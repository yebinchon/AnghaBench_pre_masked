
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_env_var {int name; struct grub_env_var* next; } ;
struct TYPE_2__ {struct grub_env_var** vars; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;

struct grub_env_var *
FUNC_2 (const char *VAR_1)
{
  struct grub_env_var *VAR_2;
  int VAR_3 = FUNC_0 (VAR_1);


  for (VAR_2 = VAR_0->vars[VAR_3]; VAR_2; VAR_2 = VAR_2->next)
    if (FUNC_1 (VAR_2->name, VAR_1) == 0)
      return VAR_2;

  return 0;
}
