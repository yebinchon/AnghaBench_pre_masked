
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {struct fpm_child_s* children; int running_children; } ;
struct fpm_child_s {struct fpm_child_s* prev; struct fpm_child_s* next; struct fpm_worker_pool_s* wp; } ;
struct TYPE_2__ {int running_children; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct fpm_child_s *VAR_1)
{
 struct fpm_worker_pool_s *VAR_2 = VAR_1->wp;

 ++VAR_2->running_children;
 ++VAR_0.running_children;

 VAR_1->next = VAR_2->children;
 if (VAR_1->next) {
  VAR_1->next->prev = VAR_1;
 }
 VAR_1->prev = 0;
 VAR_2->children = VAR_1;
}
