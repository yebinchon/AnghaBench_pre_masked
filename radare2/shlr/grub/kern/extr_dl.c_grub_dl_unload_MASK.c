
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* grub_dl_t ;
typedef TYPE_1__* grub_dl_segment_t ;
typedef TYPE_1__* grub_dl_dep_t ;
struct TYPE_9__ {scalar_t__ ref_count; struct TYPE_9__* symtab; struct TYPE_9__* name; struct TYPE_9__* addr; struct TYPE_9__* next; struct TYPE_9__* segment; struct TYPE_9__* mod; struct TYPE_9__* dep; int (* fini ) () ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;

int
FUNC_5 (grub_dl_t VAR_0)
{
  grub_dl_dep_t VAR_1, VAR_2;
  grub_dl_segment_t VAR_3, VAR_4;

  if (VAR_0->ref_count > 0)
    return 0;

  if (VAR_0->fini)
    (VAR_0->fini) ();

  FUNC_0 (VAR_0);
  FUNC_2 (VAR_0);

  for (VAR_1 = VAR_0->dep; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;

      if (! FUNC_1 (VAR_1->mod))
 FUNC_5 (VAR_1->mod);

      FUNC_3 (VAR_1);
    }

  for (VAR_3 = VAR_0->segment; VAR_3; VAR_3 = VAR_4)
    {
      VAR_4 = VAR_3->next;
      FUNC_3 (VAR_3->addr);
      FUNC_3 (VAR_3);
    }

  FUNC_3 (VAR_0->name);



  FUNC_3 (VAR_0);
  return 1;
}
