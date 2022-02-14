
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_value_s {struct key_value_s* value; struct key_value_s* key; struct key_value_s* next; } ;
struct fpm_worker_pool_config_s {struct key_value_s* env; struct key_value_s* php_admin_values; struct key_value_s* php_values; struct key_value_s* apparmor_hat; struct key_value_s* security_limit_extensions; struct key_value_s* chdir; struct key_value_s* chroot; struct key_value_s* slowlog; struct key_value_s* access_format; struct key_value_s* access_log; struct key_value_s* ping_response; struct key_value_s* ping_path; struct key_value_s* pm_status_path; struct key_value_s* listen_allowed_clients; struct key_value_s* listen_mode; struct key_value_s* listen_group; struct key_value_s* listen_owner; struct key_value_s* listen_address; struct key_value_s* group; struct key_value_s* user; struct key_value_s* prefix; struct key_value_s* name; } ;


 int FUNC_0 (struct key_value_s*) ;

int FUNC_1(struct fpm_worker_pool_config_s *VAR_0)
{
 struct key_value_s *VAR_1, *VAR_2;

 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->prefix);
 FUNC_0(VAR_0->user);
 FUNC_0(VAR_0->group);
 FUNC_0(VAR_0->listen_address);
 FUNC_0(VAR_0->listen_owner);
 FUNC_0(VAR_0->listen_group);
 FUNC_0(VAR_0->listen_mode);
 FUNC_0(VAR_0->listen_allowed_clients);
 FUNC_0(VAR_0->pm_status_path);
 FUNC_0(VAR_0->ping_path);
 FUNC_0(VAR_0->ping_response);
 FUNC_0(VAR_0->access_log);
 FUNC_0(VAR_0->access_format);
 FUNC_0(VAR_0->slowlog);
 FUNC_0(VAR_0->chroot);
 FUNC_0(VAR_0->chdir);
 FUNC_0(VAR_0->security_limit_extensions);




 for (VAR_1 = VAR_0->php_values; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->key);
  FUNC_0(VAR_1->value);
  FUNC_0(VAR_1);
 }
 for (VAR_1 = VAR_0->php_admin_values; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->key);
  FUNC_0(VAR_1->value);
  FUNC_0(VAR_1);
 }
 for (VAR_1 = VAR_0->env; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->key);
  FUNC_0(VAR_1->value);
  FUNC_0(VAR_1);
 }

 return 0;
}
