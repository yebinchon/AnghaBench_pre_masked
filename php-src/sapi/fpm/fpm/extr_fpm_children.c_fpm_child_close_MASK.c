
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_child_s {int fd_stdout; int fd_stderr; int ev_stderr; int ev_stdout; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fpm_child_s*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fpm_child_s *VAR_0, int VAR_1)
{
 if (VAR_0->fd_stdout != -1) {
  if (VAR_1) {
   FUNC_2(&VAR_0->ev_stdout);
  }
  if (VAR_0->fd_stdout != -1) {
   FUNC_0(VAR_0->fd_stdout);
  }
 }

 if (VAR_0->fd_stderr != -1) {
  if (VAR_1) {
   FUNC_2(&VAR_0->ev_stderr);
  }
  if (VAR_0->fd_stderr != -1) {
   FUNC_0(VAR_0->fd_stderr);
  }
 }

 FUNC_1(VAR_0);
}
