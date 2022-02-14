
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int TableScanDesc ;
struct TYPE_6__ {int * ss_ScanTupleSlot; int ss_currentScanDesc; } ;
struct TYPE_7__ {int done; int haveblock; int donetuples; TYPE_1__ ss; } ;
typedef TYPE_2__ SampleScanState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_3(SampleScanState *VAR_0)
{
 TableScanDesc VAR_1 = VAR_0->ss.ss_currentScanDesc;
 TupleTableSlot *VAR_2 = VAR_0->ss.ss_ScanTupleSlot;

 FUNC_0(VAR_2);

 if (VAR_0->done)
  return ((void*)0);

 for (;;)
 {
  if (!VAR_0->haveblock)
  {
   if (!FUNC_1(VAR_1, VAR_0))
   {
    VAR_0->haveblock = 0;
    VAR_0->done = 1;


    return ((void*)0);
   }

   VAR_0->haveblock = 1;
  }

  if (!FUNC_2(VAR_1, VAR_0, VAR_2))
  {




   VAR_0->haveblock = 0;
   continue;
  }


  break;
 }

 VAR_0->donetuples++;

 return VAR_2;
}
