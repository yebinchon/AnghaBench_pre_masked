
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct rlimit {void* rlim_cur; void* rlim_max; } ;
struct fpm_worker_pool_s {struct fpm_worker_pool_s* next; } ;
typedef void* rlim_t ;
typedef int readval ;
typedef int pid_t ;
typedef int fd_set ;
struct TYPE_4__ {int rlimit_core; int process_priority; scalar_t__ daemonize; scalar_t__ rlimit_files; } ;
struct TYPE_3__ {int parent_pid; int * send_config_pipe; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 TYPE_2__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (struct fpm_worker_pool_s*) ;
 struct fpm_worker_pool_s* VAR_14 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int*,int) ;
 int FUNC_13 (int ,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_14 (int ,int ,int) ;
 scalar_t__ FUNC_15 (int ,struct rlimit*) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,char*,...) ;

int FUNC_18()
{
 struct fpm_worker_pool_s *VAR_15;
 int VAR_16 = !FUNC_8();

 if (VAR_11.rlimit_files) {
  struct rlimit VAR_17;

  VAR_17.rlim_max = VAR_17.rlim_cur = (rlim_t) VAR_11.rlimit_files;

  if (0 > FUNC_15(VAR_5, &VAR_17)) {
   FUNC_17(VAR_10, "failed to set rlimit_core for this pool. Please check your system limits or decrease rlimit_files. setrlimit(RLIMIT_NOFILE, %d)", VAR_11.rlimit_files);
   return -1;
  }
 }

 if (VAR_11.rlimit_core) {
  struct rlimit VAR_18;

  VAR_18.rlim_max = VAR_18.rlim_cur = VAR_11.rlimit_core == -1 ? (rlim_t) VAR_6 : (rlim_t) VAR_11.rlimit_core;

  if (0 > FUNC_15(VAR_4, &VAR_18)) {
   FUNC_17(VAR_10, "failed to set rlimit_core for this pool. Please check your system limits or decrease rlimit_core. setrlimit(RLIMIT_CORE, %d)", VAR_11.rlimit_core);
   return -1;
  }
 }

 VAR_13 = FUNC_9();
 if (VAR_11.daemonize) {
  struct timeval VAR_19;
  fd_set VAR_20;
  int VAR_21;

  if (FUNC_11(VAR_12.send_config_pipe) == -1) {
   FUNC_17(VAR_10, "failed to create pipe");
   return -1;
  }


  pid_t VAR_22 = FUNC_4();
  switch (VAR_22) {

   case -1 :
    FUNC_17(VAR_10, "failed to daemonize");
    return -1;

   case 0 :
    FUNC_2(VAR_12.send_config_pipe[0]);
    break;

   default :
    FUNC_2(VAR_12.send_config_pipe[1]);






    FUNC_1(&VAR_20);
    FUNC_0(VAR_12.send_config_pipe[0], &VAR_20);

    VAR_19.tv_sec = 10;
    VAR_19.tv_usec = 0;

    FUNC_17(VAR_7, "The calling process is waiting for the master process to ping via fd=%d", VAR_12.send_config_pipe[0]);
    VAR_21 = FUNC_13(VAR_12.send_config_pipe[0] + 1, &VAR_20, ((void*)0), ((void*)0), &VAR_19);
    if (VAR_21 == -1) {
     FUNC_17(VAR_10, "failed to select");
     FUNC_3(VAR_2);
    }
    if (VAR_21) {
     int VAR_23;
     VAR_21 = FUNC_12(VAR_12.send_config_pipe[0], &VAR_23, sizeof(VAR_23));
     if (VAR_21 == -1) {
      FUNC_17(VAR_10, "failed to read from pipe");
      FUNC_3(VAR_2);
     }

     if (VAR_21 == 0) {
      FUNC_17(VAR_8, "no data have been read from pipe");
      FUNC_3(VAR_2);
     } else {
      if (VAR_23 == 1) {
       FUNC_17(VAR_7, "I received a valid acknowledge from the master process, I can exit without error");
       FUNC_5(VAR_0);
       FUNC_3(VAR_1);
      } else {
       FUNC_17(VAR_7, "The master process returned an error !");
       FUNC_3(VAR_2);
      }
     }
    } else {
     FUNC_17(VAR_8, "the master process didn't send back its status (via the pipe to the calling process)");
      FUNC_3(VAR_2);
    }
    FUNC_3(VAR_2);
  }
 }


 FUNC_16();
 if (0 > FUNC_6()) {
  return -1;
 }

 if (VAR_11.process_priority != 64) {
  if (VAR_16) {
   if (FUNC_14(VAR_3, 0, VAR_11.process_priority) < 0) {
    FUNC_17(VAR_10, "Unable to set priority for the master process");
    return -1;
   }
  } else {
   FUNC_17(VAR_9, "'process.priority' directive is ignored when FPM is not running as root");
  }
 }

 VAR_12.parent_pid = FUNC_10();
 for (VAR_15 = VAR_14; VAR_15; VAR_15 = VAR_15->next) {
  if (0 > FUNC_7(VAR_15)) {
   return -1;
  }
 }

 return 0;
}
