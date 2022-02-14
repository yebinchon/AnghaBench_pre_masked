
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int next; int count; int * tids; } ;
typedef TYPE_1__ corrupt_items ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;


 int * FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(corrupt_items *VAR_0, ItemPointer VAR_1)
{

 if (VAR_0->next >= VAR_0->count)
 {
  VAR_0->count *= 2;
  VAR_0->tids = FUNC_0(VAR_0->tids,
          VAR_0->count * sizeof(ItemPointerData));
 }

 VAR_0->tids[VAR_0->next++] = *VAR_1;
}
