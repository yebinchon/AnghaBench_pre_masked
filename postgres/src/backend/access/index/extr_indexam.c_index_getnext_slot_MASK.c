
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_5__ {int xs_heaptid; int xs_heap_continue; } ;
typedef int ScanDirection ;
typedef int * ItemPointer ;
typedef TYPE_1__* IndexScanDesc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (TYPE_1__*,int ) ;

bool
FUNC_5(IndexScanDesc VAR_0, ScanDirection VAR_1, TupleTableSlot *VAR_2)
{
 for (;;)
 {
  if (!VAR_0->xs_heap_continue)
  {
   ItemPointer VAR_3;


   VAR_3 = FUNC_4(VAR_0, VAR_1);


   if (VAR_3 == ((void*)0))
    break;

   FUNC_0(FUNC_1(VAR_3, &VAR_0->xs_heaptid));
  }






  FUNC_0(FUNC_2(&VAR_0->xs_heaptid));
  if (FUNC_3(VAR_0, VAR_2))
   return 1;
 }

 return 0;
}
