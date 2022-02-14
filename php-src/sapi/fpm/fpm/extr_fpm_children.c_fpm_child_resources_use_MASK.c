
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_worker_pool_s {int scoreboard; struct fpm_worker_pool_s* next; } ;
struct fpm_child_s {int scoreboard_i; struct fpm_worker_pool_s* wp; } ;


 int FUNC_0 (struct fpm_child_s*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fpm_child_s*) ;
 struct fpm_worker_pool_s* VAR_0 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct fpm_child_s *VAR_1)
{
 struct fpm_worker_pool_s *VAR_2;
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2 == VAR_1->wp) {
   continue;
  }
  FUNC_2(VAR_2->scoreboard);
 }

 FUNC_1(VAR_1->wp->scoreboard, VAR_1->scoreboard_i, FUNC_4());
 FUNC_3(VAR_1);
 FUNC_0(VAR_1);
}
