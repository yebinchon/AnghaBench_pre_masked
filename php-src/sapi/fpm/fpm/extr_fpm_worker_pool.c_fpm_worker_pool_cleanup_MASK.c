
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {int scoreboard; int children; int config; struct fpm_worker_pool_s* next; } ;
struct TYPE_2__ {scalar_t__ parent_pid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 struct fpm_worker_pool_s* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fpm_worker_pool_s*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(int VAR_3, void *VAR_4)
{
 struct fpm_worker_pool_s *VAR_5, *VAR_6;

 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_6) {
  VAR_6 = VAR_5->next;
  FUNC_2(VAR_5->config);
  FUNC_0(VAR_5->children);
  if ((VAR_3 & VAR_0) == 0 && VAR_1.parent_pid == FUNC_4()) {
   FUNC_1(VAR_5->scoreboard);
  }
  FUNC_3(VAR_5);
 }
 VAR_2 = ((void*)0);
}
