
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int done; struct TYPE_4__* next; int tid; } ;
typedef TYPE_1__ spgVacPendingItem ;
struct TYPE_5__ {TYPE_1__* pendingList; } ;
typedef TYPE_2__ spgBulkDeleteState ;
typedef int * ItemPointer ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(spgBulkDeleteState *VAR_0, ItemPointer VAR_1)
{
 spgVacPendingItem *VAR_2;
 spgVacPendingItem **VAR_3;


 VAR_3 = &VAR_0->pendingList;
 while (*VAR_3 != ((void*)0))
 {
  VAR_2 = *VAR_3;
  if (FUNC_0(VAR_1, &VAR_2->tid))
   return;
  VAR_3 = &VAR_2->next;
 }

 VAR_2 = (spgVacPendingItem *) FUNC_1(sizeof(spgVacPendingItem));
 VAR_2->tid = *VAR_1;
 VAR_2->done = 0;
 VAR_2->next = ((void*)0);
 *VAR_3 = VAR_2;
}
