
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_28__ {int es_snapshot; int es_direction; } ;
struct TYPE_27__ {int * ecxt_scantuple; } ;
struct TYPE_26__ {int indexorderdir; } ;
struct TYPE_25__ {int* xs_orderbynulls; int * xs_orderbyvals; scalar_t__ xs_recheckorderby; scalar_t__ xs_recheck; } ;
struct TYPE_21__ {TYPE_7__* ps_ExprContext; scalar_t__ plan; TYPE_8__* state; } ;
struct TYPE_22__ {int ss_currentRelation; int * ss_ScanTupleSlot; TYPE_1__ ps; } ;
struct TYPE_24__ {scalar_t__ iss_NumRuntimeKeys; int iss_ReachedEnd; int* iss_OrderByNulls; int * iss_OrderByValues; int indexqualorig; int iss_ReorderQueue; int iss_NumOrderByKeys; int iss_OrderByKeys; int iss_NumScanKeys; int iss_ScanKeys; scalar_t__ iss_RuntimeKeysReady; TYPE_5__* iss_ScanDesc; int iss_RelationDesc; TYPE_2__ ss; } ;
struct TYPE_23__ {int* orderbynulls; int * orderbyvals; } ;
typedef TYPE_3__ ReorderTuple ;
typedef TYPE_4__ IndexScanState ;
typedef TYPE_5__* IndexScanDesc ;
typedef TYPE_6__ IndexScan ;
typedef int HeapTuple ;
typedef TYPE_7__ ExprContext ;
typedef TYPE_8__ EState ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,TYPE_7__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,TYPE_7__*) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int*,int *,int*,TYPE_4__*) ;
 int FUNC_11 (int ,char*) ;
 TYPE_5__* FUNC_12 (int ,int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_5__*,int ,int *) ;
 int FUNC_14 (TYPE_5__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*,int *,int *,int*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_19(IndexScanState *VAR_2)
{
 EState *VAR_3;
 ExprContext *VAR_4;
 IndexScanDesc VAR_5;
 TupleTableSlot *VAR_6;
 ReorderTuple *VAR_7 = ((void*)0);
 bool VAR_8;
 Datum *VAR_9;
 bool *VAR_10;
 int VAR_11;

 VAR_3 = VAR_2->ss.ps.state;
 FUNC_0(!FUNC_8(((IndexScan *) VAR_2->ss.ps.plan)->indexorderdir));
 FUNC_0(FUNC_9(VAR_3->es_direction));

 VAR_5 = VAR_2->iss_ScanDesc;
 VAR_4 = VAR_2->ss.ps.ps_ExprContext;
 VAR_6 = VAR_2->ss.ss_ScanTupleSlot;

 if (VAR_5 == ((void*)0))
 {




  VAR_5 = FUNC_12(VAR_2->ss.ss_currentRelation,
           VAR_2->iss_RelationDesc,
           VAR_3->es_snapshot,
           VAR_2->iss_NumScanKeys,
           VAR_2->iss_NumOrderByKeys);

  VAR_2->iss_ScanDesc = VAR_5;





  if (VAR_2->iss_NumRuntimeKeys == 0 || VAR_2->iss_RuntimeKeysReady)
   FUNC_14(VAR_5,
       VAR_2->iss_ScanKeys, VAR_2->iss_NumScanKeys,
       VAR_2->iss_OrderByKeys, VAR_2->iss_NumOrderByKeys);
 }

 for (;;)
 {
  FUNC_1();






  if (!FUNC_16(VAR_2->iss_ReorderQueue))
  {
   VAR_7 = (ReorderTuple *) FUNC_15(VAR_2->iss_ReorderQueue);

   if (VAR_2->iss_ReachedEnd ||
    FUNC_10(VAR_7->orderbyvals,
        VAR_7->orderbynulls,
        VAR_5->xs_orderbyvals,
        VAR_5->xs_orderbynulls,
        VAR_2) <= 0)
   {
    HeapTuple VAR_12;

    VAR_12 = FUNC_17(VAR_2);


    FUNC_4(VAR_12, VAR_6, 1);
    return VAR_6;
   }
  }
  else if (VAR_2->iss_ReachedEnd)
  {

   return FUNC_3(VAR_6);
  }




next_indextuple:
  if (!FUNC_13(VAR_5, VAR_1, VAR_6))
  {




   VAR_2->iss_ReachedEnd = 1;
   continue;
  }





  if (VAR_5->xs_recheck)
  {
   VAR_4->ecxt_scantuple = VAR_6;
   if (!FUNC_5(VAR_2->indexqualorig, VAR_4))
   {

    FUNC_6(VAR_2, 1);

    FUNC_1();
    goto next_indextuple;
   }
  }

  if (VAR_5->xs_recheckorderby)
  {
   VAR_4->ecxt_scantuple = VAR_6;
   FUNC_7(VAR_4);
   FUNC_2(VAR_2, VAR_4);
   VAR_11 = FUNC_10(VAR_2->iss_OrderByValues,
          VAR_2->iss_OrderByNulls,
          VAR_5->xs_orderbyvals,
          VAR_5->xs_orderbynulls,
          VAR_2);
   if (VAR_11 < 0)
    FUNC_11(VAR_0, "index returned tuples in wrong order");
   else if (VAR_11 == 0)
    VAR_8 = 1;
   else
    VAR_8 = 0;
   VAR_9 = VAR_2->iss_OrderByValues;
   VAR_10 = VAR_2->iss_OrderByNulls;
  }
  else
  {
   VAR_8 = 1;
   VAR_9 = VAR_5->xs_orderbyvals;
   VAR_10 = VAR_5->xs_orderbynulls;
  }
  if (!VAR_8 || (VAR_7 && FUNC_10(VAR_9,
               VAR_10,
               VAR_7->orderbyvals,
               VAR_7->orderbynulls,
               VAR_2) > 0))
  {

   FUNC_18(VAR_2, VAR_6, VAR_9, VAR_10);
   continue;
  }
  else
  {

   return VAR_6;
  }
 }





 return FUNC_3(VAR_6);
}
