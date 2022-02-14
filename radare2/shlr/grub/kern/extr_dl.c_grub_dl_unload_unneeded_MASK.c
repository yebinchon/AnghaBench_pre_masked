
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* grub_dl_list_t ;
struct TYPE_3__ {struct TYPE_3__* next; int mod; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1 (void)
{


  grub_dl_list_t VAR_1 = VAR_0;

  while (VAR_1)
    {
      if (FUNC_0 (VAR_1->mod))
 {
   VAR_1 = VAR_0;
   continue;
 }

      VAR_1 = VAR_1->next;
    }
}
