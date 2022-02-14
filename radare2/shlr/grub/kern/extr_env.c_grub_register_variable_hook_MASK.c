
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_env_var {int write_hook; int read_hook; } ;
typedef scalar_t__ grub_err_t ;
typedef int grub_env_write_hook_t ;
typedef int grub_env_read_hook_t ;


 scalar_t__ VAR_0 ;
 struct grub_env_var* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ VAR_1 ;

grub_err_t
FUNC_2 (const char *VAR_2,
        grub_env_read_hook_t VAR_3,
        grub_env_write_hook_t VAR_4)
{
  struct grub_env_var *VAR_5 = FUNC_0 (VAR_2);

  if (! VAR_5)
    {
      if (FUNC_1 (VAR_2, "") != VAR_0)
 return VAR_1;

      VAR_5 = FUNC_0 (VAR_2);

    }

  if (VAR_5) {
   VAR_5->read_hook = VAR_3;
   VAR_5->write_hook = VAR_4;
  }

  return VAR_0;
}
