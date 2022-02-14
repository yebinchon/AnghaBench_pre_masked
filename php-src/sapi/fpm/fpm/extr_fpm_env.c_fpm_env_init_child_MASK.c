
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_value_s {char* key; scalar_t__ value; struct key_value_s* next; } ;
struct fpm_worker_pool_s {scalar_t__ home; scalar_t__ user; TYPE_1__* config; } ;
struct TYPE_2__ {struct key_value_s* env; scalar_t__ clear_env; int name; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,int) ;
 int FUNC_4 (char**,int ,char*,int ) ;

int FUNC_5(struct fpm_worker_pool_s *VAR_0)
{
 struct key_value_s *VAR_1;
 char *VAR_2;
 FUNC_4(&VAR_2, 0, "pool %s", VAR_0->config->name);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 if (VAR_0->config->clear_env) {
  FUNC_0();
 }

 for (VAR_1 = VAR_0->config->env; VAR_1; VAR_1 = VAR_1->next) {
  FUNC_3(VAR_1->key, VAR_1->value, 1);
 }

 if (VAR_0->user) {
  FUNC_3("USER", VAR_0->user, 1);
 }

 if (VAR_0->home) {
  FUNC_3("HOME", VAR_0->home, 1);
 }

 return 0;
}
