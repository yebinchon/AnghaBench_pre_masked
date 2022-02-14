
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_scoreboard_s {int dummy; } ;
struct fpm_scoreboard_proc_s {int lock; } ;


 struct fpm_scoreboard_proc_s* FUNC_0 (struct fpm_scoreboard_s*,int) ;
 int FUNC_1 (int *,int) ;

struct fpm_scoreboard_proc_s *FUNC_2(struct fpm_scoreboard_s *VAR_0, int VAR_1, int VAR_2)
{
 struct fpm_scoreboard_proc_s *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3) {
  return ((void*)0);
 }

 if (!FUNC_1(&VAR_3->lock, VAR_2)) {
  return ((void*)0);
 }

 return VAR_3;
}
