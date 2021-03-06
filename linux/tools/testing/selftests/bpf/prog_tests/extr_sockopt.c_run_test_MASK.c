
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt_test {scalar_t__ error; scalar_t__ get_optlen; int attach_type; int get_optval; int get_optname; int get_level; scalar_t__ get_optlen_ret; int set_optlen; int set_optval; int set_optname; int set_level; int expected_attach_type; int insns; } ;
typedef scalar_t__ socklen_t ;


 int AF_INET ;
 scalar_t__ DENY_ATTACH ;
 scalar_t__ DENY_LOAD ;
 scalar_t__ EFAULT ;
 scalar_t__ EFAULT_GETSOCKOPT ;
 scalar_t__ EFAULT_SETSOCKOPT ;
 scalar_t__ EPERM ;
 scalar_t__ EPERM_GETSOCKOPT ;
 scalar_t__ EPERM_SETSOCKOPT ;
 scalar_t__ OK ;
 int SOCK_STREAM ;
 int bpf_prog_attach (int,int,int ,int ) ;
 int bpf_prog_detach2 (int,int,int ) ;
 int close (int) ;
 scalar_t__ errno ;
 int free (void*) ;
 int getsockopt (int,int ,int ,void*,scalar_t__*) ;
 int load_prog (int ,int ) ;
 int log_err (char*) ;
 void* malloc (scalar_t__) ;
 scalar_t__ memcmp (void*,int ,scalar_t__) ;
 int setsockopt (int,int ,int ,int ,int ) ;
 int socket (int ,int ,int ) ;

__attribute__((used)) static int run_test(int cgroup_fd, struct sockopt_test *test)
{
 int sock_fd, err, prog_fd;
 void *optval = ((void*)0);
 int ret = 0;

 prog_fd = load_prog(test->insns, test->expected_attach_type);
 if (prog_fd < 0) {
  if (test->error == DENY_LOAD)
   return 0;

  log_err("Failed to load BPF program");
  return -1;
 }

 err = bpf_prog_attach(prog_fd, cgroup_fd, test->attach_type, 0);
 if (err < 0) {
  if (test->error == DENY_ATTACH)
   goto close_prog_fd;

  log_err("Failed to attach BPF program");
  ret = -1;
  goto close_prog_fd;
 }

 sock_fd = socket(AF_INET, SOCK_STREAM, 0);
 if (sock_fd < 0) {
  log_err("Failed to create AF_INET socket");
  ret = -1;
  goto detach_prog;
 }

 if (test->set_optlen) {
  err = setsockopt(sock_fd, test->set_level, test->set_optname,
     test->set_optval, test->set_optlen);
  if (err) {
   if (errno == EPERM && test->error == EPERM_SETSOCKOPT)
    goto close_sock_fd;
   if (errno == EFAULT && test->error == EFAULT_SETSOCKOPT)
    goto free_optval;

   log_err("Failed to call setsockopt");
   ret = -1;
   goto close_sock_fd;
  }
 }

 if (test->get_optlen) {
  optval = malloc(test->get_optlen);
  socklen_t optlen = test->get_optlen;
  socklen_t expected_get_optlen = test->get_optlen_ret ?:
   test->get_optlen;

  err = getsockopt(sock_fd, test->get_level, test->get_optname,
     optval, &optlen);
  if (err) {
   if (errno == EPERM && test->error == EPERM_GETSOCKOPT)
    goto free_optval;
   if (errno == EFAULT && test->error == EFAULT_GETSOCKOPT)
    goto free_optval;

   log_err("Failed to call getsockopt");
   ret = -1;
   goto free_optval;
  }

  if (optlen != expected_get_optlen) {
   errno = 0;
   log_err("getsockopt returned unexpected optlen");
   ret = -1;
   goto free_optval;
  }

  if (memcmp(optval, test->get_optval, optlen) != 0) {
   errno = 0;
   log_err("getsockopt returned unexpected optval");
   ret = -1;
   goto free_optval;
  }
 }

 ret = test->error != OK;

free_optval:
 free(optval);
close_sock_fd:
 close(sock_fd);
detach_prog:
 bpf_prog_detach2(prog_fd, cgroup_fd, test->attach_type);
close_prog_fd:
 close(prog_fd);
 return ret;
}
