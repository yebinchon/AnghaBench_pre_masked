
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_scoreboard_s {unsigned int nprocs; struct fpm_scoreboard_proc_s** procs; } ;
struct fpm_scoreboard_proc_s {int dummy; } ;


 struct fpm_scoreboard_s* VAR_0 ;
 int VAR_1 ;

struct fpm_scoreboard_proc_s *FUNC_0(struct fpm_scoreboard_s *VAR_2, int VAR_3)
{
 if (!VAR_2) {
  VAR_2 = VAR_0;
 }

 if (!VAR_2) {
  return ((void*)0);
 }

 if (VAR_3 < 0) {
  VAR_3 = VAR_1;
 }

 if (VAR_3 < 0 || (unsigned int)VAR_3 >= VAR_2->nprocs) {
  return ((void*)0);
 }

 return VAR_2->procs[VAR_3];
}
