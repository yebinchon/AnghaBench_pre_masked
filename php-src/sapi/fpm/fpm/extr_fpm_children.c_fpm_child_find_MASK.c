
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_worker_pool_s {struct fpm_child_s* children; struct fpm_worker_pool_s* next; } ;
struct fpm_child_s {scalar_t__ pid; struct fpm_child_s* next; } ;
typedef scalar_t__ pid_t ;


 struct fpm_worker_pool_s* VAR_0 ;

__attribute__((used)) static struct fpm_child_s *FUNC_0(pid_t VAR_1)
{
 struct fpm_worker_pool_s *VAR_2;
 struct fpm_child_s *VAR_3 = 0;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {

  for (VAR_3 = VAR_2->children; VAR_3; VAR_3 = VAR_3->next) {
   if (VAR_3->pid == VAR_1) {
    break;
   }
  }

  if (VAR_3) break;
 }

 if (!VAR_3) {
  return 0;
 }

 return VAR_3;
}
