
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_env_var {char* (* read_hook ) (struct grub_env_var*,char*) ;char* value; } ;


 struct grub_env_var* FUNC_0 (char const*) ;
 char* FUNC_1 (struct grub_env_var*,char*) ;

char *
FUNC_2 (const char *VAR_0)
{
  struct grub_env_var *VAR_1;

  VAR_1 = FUNC_0 (VAR_0);
  if (! VAR_1)
    return 0;

  if (VAR_1->read_hook)
    return VAR_1->read_hook (VAR_1, VAR_1->value);

  return VAR_1->value;
}
