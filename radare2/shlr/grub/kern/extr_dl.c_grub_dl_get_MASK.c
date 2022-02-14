
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* grub_dl_t ;
typedef TYPE_2__* grub_dl_list_t ;
struct TYPE_6__ {TYPE_1__* mod; struct TYPE_6__* next; } ;
struct TYPE_5__ {int name; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

grub_dl_t
FUNC_1 (const char *VAR_1)
{
  grub_dl_list_t VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    if (FUNC_0 (VAR_1, VAR_2->mod->name) == 0)
      return VAR_2->mod;

  return 0;
}
