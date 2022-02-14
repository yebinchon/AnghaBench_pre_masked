
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_7__ {TYPE_4__* state; } ;
struct TYPE_8__ {int ss_currentScanDesc; int * ss_ScanTupleSlot; int ss_currentRelation; TYPE_1__ ps; } ;
struct TYPE_9__ {int tss_NumTids; int tss_TidPtr; scalar_t__ tss_isCurrentOf; int * tss_TidList; TYPE_2__ ss; } ;
typedef TYPE_3__ TidScanState ;
typedef int TableScanDesc ;
struct TYPE_10__ {int es_snapshot; int es_direction; } ;
typedef int Snapshot ;
typedef int ScanDirection ;
typedef int Relation ;
typedef int ItemPointerData ;
typedef TYPE_4__ EState ;


 int FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_6(TidScanState *VAR_0)
{
 EState *VAR_1;
 ScanDirection VAR_2;
 Snapshot VAR_3;
 TableScanDesc VAR_4;
 Relation VAR_5;
 TupleTableSlot *VAR_6;
 ItemPointerData *VAR_7;
 int VAR_8;
 bool VAR_9;




 VAR_1 = VAR_0->ss.ps.state;
 VAR_2 = VAR_1->es_direction;
 VAR_3 = VAR_1->es_snapshot;
 VAR_5 = VAR_0->ss.ss_currentRelation;
 VAR_6 = VAR_0->ss.ss_ScanTupleSlot;




 if (VAR_0->tss_TidList == ((void*)0))
  FUNC_3(VAR_0);

 VAR_4 = VAR_0->ss.ss_currentScanDesc;
 VAR_7 = VAR_0->tss_TidList;
 VAR_8 = VAR_0->tss_NumTids;




 VAR_9 = FUNC_2(VAR_2);
 if (VAR_9)
 {
  if (VAR_0->tss_TidPtr < 0)
  {

   VAR_0->tss_TidPtr = VAR_8 - 1;
  }
  else
   VAR_0->tss_TidPtr--;
 }
 else
 {
  if (VAR_0->tss_TidPtr < 0)
  {

   VAR_0->tss_TidPtr = 0;
  }
  else
   VAR_0->tss_TidPtr++;
 }

 while (VAR_0->tss_TidPtr >= 0 && VAR_0->tss_TidPtr < VAR_8)
 {
  ItemPointerData VAR_10 = VAR_7[VAR_0->tss_TidPtr];






  if (VAR_0->tss_isCurrentOf)
   FUNC_5(VAR_4, &VAR_10);

  if (FUNC_4(VAR_5, &VAR_10, VAR_3, VAR_6))
   return VAR_6;


  if (VAR_9)
   VAR_0->tss_TidPtr--;
  else
   VAR_0->tss_TidPtr++;

  FUNC_0();
 }





 return FUNC_1(VAR_6);
}
