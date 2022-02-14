
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ grub_dl_t ;
typedef TYPE_1__* grub_dl_list_t ;
struct TYPE_4__ {scalar_t__ mod; struct TYPE_4__* next; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (grub_dl_t VAR_1)
{
  grub_dl_list_t *VAR_2, VAR_3;

  for (VAR_2 = &VAR_0, VAR_3 = *VAR_2; VAR_3; VAR_2 = &VAR_3->next, VAR_3 = *VAR_2)
    if (VAR_3->mod == VAR_1)
      {
 *VAR_2 = VAR_3->next;
 FUNC_0 (VAR_3);
 return;
      }
}
