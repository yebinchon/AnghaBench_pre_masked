
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_value_s {int key; struct key_value_s* next; } ;
struct fpm_worker_pool_s {TYPE_1__* config; } ;
struct TYPE_2__ {struct key_value_s* php_admin_values; struct key_value_s* php_values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct key_value_s*,int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct fpm_worker_pool_s *VAR_3)
{
 struct key_value_s *VAR_4;

 for (VAR_4 = VAR_3->config->php_values; VAR_4; VAR_4 = VAR_4->next) {
  if (FUNC_0(VAR_4, VAR_1) == -1) {
   FUNC_1(VAR_2, "Unable to set php_value '%s'", VAR_4->key);
  }
 }

 for (VAR_4 = VAR_3->config->php_admin_values; VAR_4; VAR_4 = VAR_4->next) {
  if (FUNC_0(VAR_4, VAR_0) == -1) {
   FUNC_1(VAR_2, "Unable to set php_admin_value '%s'", VAR_4->key);
  }
 }

 return 0;
}
