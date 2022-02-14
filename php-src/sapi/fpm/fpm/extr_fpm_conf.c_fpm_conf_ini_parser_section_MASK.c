
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct fpm_worker_pool_s {TYPE_1__* config; struct fpm_worker_pool_s* next; } ;
struct fpm_worker_pool_config_s {int name; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 struct fpm_worker_pool_s* VAR_1 ;
 struct fpm_worker_pool_s* VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_5(zval *VAR_5, void *VAR_6)
{
 struct fpm_worker_pool_s *VAR_7;
 struct fpm_worker_pool_config_s *VAR_8;
 int *VAR_9 = (int *)VAR_6;


 if (!FUNC_2(FUNC_0(VAR_5), "global")) {
  VAR_1 = ((void*)0);
  return;
 }

 for (VAR_7 = VAR_2; VAR_7; VAR_7 = VAR_7->next) {
  if (!VAR_7->config) continue;
  if (!VAR_7->config->name) continue;
  if (!FUNC_2(VAR_7->config->name, FUNC_0(VAR_5))) {

   VAR_1 = VAR_7;
   return;
  }
 }


 VAR_8 = (struct fpm_worker_pool_config_s *)FUNC_1();
 if (!VAR_1 || !VAR_8) {
  FUNC_4(VAR_0, "[%s:%d] Unable to alloc a new WorkerPool for worker '%s'", VAR_3, VAR_4, FUNC_0(VAR_5));
  *VAR_9 = 1;
  return;
 }
 VAR_8->name = FUNC_3(FUNC_0(VAR_5));
 if (!VAR_8->name) {
  FUNC_4(VAR_0, "[%s:%d] Unable to alloc memory for configuration name for worker '%s'", VAR_3, VAR_4, FUNC_0(VAR_5));
  *VAR_9 = 1;
  return;
 }
}
