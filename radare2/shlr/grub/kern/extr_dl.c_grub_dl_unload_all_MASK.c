
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* grub_dl_list_t ;
struct TYPE_5__ {TYPE_1__* mod; struct TYPE_5__* next; } ;
struct TYPE_4__ {int ref_count; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;

void
FUNC_1 (void)
{
  while (VAR_0)
    {
      grub_dl_list_t VAR_1;

      FUNC_0 ();



      for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
 VAR_1->mod->ref_count--;
    }
}
