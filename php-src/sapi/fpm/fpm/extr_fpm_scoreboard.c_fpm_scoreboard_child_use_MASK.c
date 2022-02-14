
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_scoreboard_s {int dummy; } ;
struct fpm_scoreboard_proc_s {int start_epoch; int pid; } ;
typedef int pid_t ;


 struct fpm_scoreboard_s* VAR_0 ;
 int VAR_1 ;
 struct fpm_scoreboard_proc_s* FUNC_0 (struct fpm_scoreboard_s*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct fpm_scoreboard_s *VAR_2, int VAR_3, pid_t VAR_4)
{
 struct fpm_scoreboard_proc_s *VAR_5;
 VAR_0 = VAR_2;
 VAR_1 = VAR_3;
 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5) {
  return;
 }
 VAR_5->pid = VAR_4;
 VAR_5->start_epoch = FUNC_1(((void*)0));
}
