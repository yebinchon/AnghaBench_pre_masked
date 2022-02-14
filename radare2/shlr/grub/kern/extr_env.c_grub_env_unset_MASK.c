
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_env_var {struct grub_env_var* value; struct grub_env_var* name; scalar_t__ write_hook; scalar_t__ read_hook; } ;


 struct grub_env_var* FUNC_0 (char const*) ;
 int FUNC_1 (struct grub_env_var*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct grub_env_var*) ;

void
FUNC_4 (const char *VAR_0)
{
  struct grub_env_var *VAR_1;

  VAR_1 = FUNC_0 (VAR_0);
  if (! VAR_1)
    return;

  if (VAR_1->read_hook || VAR_1->write_hook)
    {
      FUNC_2 (VAR_0, "");
      return;
    }

  FUNC_1 (VAR_1);

  FUNC_3 (VAR_1->name);
  FUNC_3 (VAR_1->value);
  FUNC_3 (VAR_1);
}
