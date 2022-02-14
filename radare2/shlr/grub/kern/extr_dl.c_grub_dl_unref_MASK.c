
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* grub_dl_t ;
typedef TYPE_2__* grub_dl_dep_t ;
struct TYPE_5__ {TYPE_1__* mod; struct TYPE_5__* next; } ;
struct TYPE_4__ {int ref_count; TYPE_2__* dep; } ;



int
FUNC_0 (grub_dl_t VAR_0)
{
  grub_dl_dep_t VAR_1;

  for (VAR_1 = VAR_0->dep; VAR_1; VAR_1 = VAR_1->next)
    FUNC_0 (VAR_1->mod);

  return --VAR_0->ref_count;
}
