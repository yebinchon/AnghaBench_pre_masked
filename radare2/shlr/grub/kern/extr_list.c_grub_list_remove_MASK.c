
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* grub_list_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;



void
FUNC_0 (grub_list_t *VAR_0, grub_list_t VAR_1)
{
  grub_list_t *VAR_2, VAR_3;

  for (VAR_2 = VAR_0, VAR_3 = *VAR_2; VAR_3; VAR_2 = &(VAR_3->next), VAR_3 = VAR_3->next)
    if (VAR_3 == VAR_1)
      {
 *VAR_2 = VAR_3->next;
 break;
      }
}
