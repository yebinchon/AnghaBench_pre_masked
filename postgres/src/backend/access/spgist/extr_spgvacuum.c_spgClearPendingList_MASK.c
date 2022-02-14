
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int done; struct TYPE_5__* next; } ;
typedef TYPE_1__ spgVacPendingItem ;
struct TYPE_6__ {TYPE_1__* pendingList; } ;
typedef TYPE_2__ spgBulkDeleteState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(spgBulkDeleteState *VAR_0)
{
 spgVacPendingItem *VAR_1;
 spgVacPendingItem *VAR_2;

 for (VAR_1 = VAR_0->pendingList; VAR_1 != ((void*)0); VAR_1 = VAR_2)
 {
  VAR_2 = VAR_1->next;

  FUNC_0(VAR_1->done);
  FUNC_1(VAR_1);
 }
 VAR_0->pendingList = ((void*)0);
}
