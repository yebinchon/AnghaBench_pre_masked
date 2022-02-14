
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_worker_pool_s {TYPE_2__* config; TYPE_1__* scoreboard; struct fpm_worker_pool_s* next; } ;
struct fpm_scoreboard_s {int dummy; } ;
struct fpm_scoreboard_proc_s {int dummy; } ;
struct TYPE_4__ {int pm_max_children; int name; int pm; } ;
struct TYPE_3__ {unsigned int nprocs; int pool; int start_epoch; int pm; void** procs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (size_t) ;
 struct fpm_worker_pool_s* VAR_5 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5()
{
 struct fpm_worker_pool_s *VAR_6;
 unsigned int VAR_7;
 for (VAR_6 = VAR_5; VAR_6; VAR_6 = VAR_6->next) {
  size_t VAR_8, VAR_9;
  void *VAR_10;

  if (VAR_6->config->pm_max_children < 1) {
   FUNC_4(VAR_2, "[pool %s] Unable to create scoreboard SHM because max_client is not set", VAR_6->config->name);
   return -1;
  }

  if (VAR_6->scoreboard) {
   FUNC_4(VAR_2, "[pool %s] Unable to create scoreboard SHM because it already exists", VAR_6->config->name);
   return -1;
  }

  VAR_8 = sizeof(struct fpm_scoreboard_s) + (VAR_6->config->pm_max_children) * sizeof(struct fpm_scoreboard_proc_s *);
  VAR_9 = sizeof(struct fpm_scoreboard_proc_s) * VAR_6->config->pm_max_children;
  VAR_10 = FUNC_0(VAR_8 + VAR_9);

  if (!VAR_10) {
   return -1;
  }
  VAR_6->scoreboard = VAR_10;
  VAR_6->scoreboard->nprocs = VAR_6->config->pm_max_children;
  VAR_10 += VAR_8;

  for (VAR_7 = 0; VAR_7 < VAR_6->scoreboard->nprocs; VAR_7++, VAR_10 += sizeof(struct fpm_scoreboard_proc_s)) {
   VAR_6->scoreboard->procs[VAR_7] = VAR_10;
  }

  VAR_6->scoreboard->pm = VAR_6->config->pm;
  VAR_6->scoreboard->start_epoch = FUNC_3(((void*)0));
  FUNC_1(VAR_6->scoreboard->pool, VAR_6->config->name, sizeof(VAR_6->scoreboard->pool));
 }
 return 0;
}
