
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_scoreboard_s {int nprocs; } ;
struct fpm_scoreboard_proc_s {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fpm_scoreboard_s*,size_t) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct fpm_scoreboard_s *VAR_1)
{
 size_t VAR_2, VAR_3;

 if (!VAR_1) {
  FUNC_1(VAR_0, "**scoreboard is NULL");
  return;
 }

 VAR_2 = sizeof(struct fpm_scoreboard_s) + (VAR_1->nprocs) * sizeof(struct fpm_scoreboard_proc_s *);
 VAR_3 = sizeof(struct fpm_scoreboard_proc_s) * VAR_1->nprocs;

 FUNC_0(VAR_1, VAR_2 + VAR_3);
}
