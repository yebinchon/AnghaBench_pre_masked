
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_worker_pool_s {struct fpm_child_s* children; struct fpm_worker_pool_s* next; } ;
struct fpm_child_s {scalar_t__ pid; TYPE_2__* wp; struct fpm_child_s* next; } ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 char** VAR_1 ;
 struct fpm_worker_pool_s* VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,char*,int,...) ;

void FUNC_2(int VAR_3)
{
 struct fpm_worker_pool_s *VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  struct fpm_child_s *VAR_6;

  for (VAR_6 = VAR_4->children; VAR_6; VAR_6 = VAR_6->next) {
   int VAR_7 = FUNC_0(VAR_6->pid, VAR_3);

   FUNC_1(VAR_0, "[pool %s] sending signal %d %s to child %d",
    VAR_6->wp->config->name, VAR_3,
    VAR_1[VAR_3] ? VAR_1[VAR_3] : "", (int) VAR_6->pid);

   if (VAR_7 == 0) {
    ++VAR_5;
   }
  }
 }

 if (VAR_5) {
  FUNC_1(VAR_0, "%d child(ren) still alive", VAR_5);
 }
}
