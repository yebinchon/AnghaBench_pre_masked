
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* grub_list_t ;
typedef scalar_t__ (* grub_list_hook_t ) (TYPE_1__*,void*) ;
struct TYPE_5__ {struct TYPE_5__* next; } ;



int
FUNC_0 (grub_list_t VAR_0, grub_list_hook_t VAR_1, void *VAR_2)
{
  grub_list_t VAR_3;

  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
    if (VAR_1 (VAR_3, VAR_2))
      return 1;

  return 0;
}
