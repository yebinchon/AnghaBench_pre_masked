
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_worker_pool_s {scalar_t__ running_children; int warn_max_children; TYPE_1__* config; struct fpm_child_s* children; int scoreboard; scalar_t__ socket_event_set; } ;
struct fpm_event_s {int dummy; } ;
struct fpm_child_s {struct fpm_child_s* next; } ;
struct TYPE_4__ {scalar_t__ parent_pid; scalar_t__ is_child; } ;
struct TYPE_3__ {scalar_t__ pm_max_children; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fpm_worker_pool_s*,int,int,int) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_1 (struct fpm_child_s*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int,int ,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,int ,...) ;

void FUNC_5(struct fpm_event_s *VAR_4, short VAR_5, void *VAR_6)
{
 struct fpm_worker_pool_s *VAR_7 = (struct fpm_worker_pool_s *)VAR_6;
 struct fpm_child_s *VAR_8;


 if (VAR_3.parent_pid != FUNC_3()) {


  return;
 }

 VAR_7->socket_event_set = 0;



 if (VAR_7->running_children >= VAR_7->config->pm_max_children) {
  if (!VAR_7->warn_max_children) {
   FUNC_2(0, 0, 0, 0, 0, 1, 0, VAR_0, VAR_7->scoreboard);
   FUNC_4(VAR_2, "[pool %s] server reached max_children setting (%d), consider raising it", VAR_7->config->name, VAR_7->config->pm_max_children);
   VAR_7->warn_max_children = 1;
  }

  return;
 }

 for (VAR_8 = VAR_7->children; VAR_8; VAR_8 = VAR_8->next) {

  if (FUNC_1(VAR_8)) {
   return;
  }
 }

 VAR_7->warn_max_children = 0;
 FUNC_0(VAR_7, 1, 1, 1);

 if (VAR_3.is_child) {
  return;
 }

 FUNC_4(VAR_1, "[pool %s] got accept without idle child available .... I forked", VAR_7->config->name);
}
