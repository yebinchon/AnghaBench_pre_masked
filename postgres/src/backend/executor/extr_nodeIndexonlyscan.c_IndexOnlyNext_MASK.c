
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_30__ {TYPE_3__* tts_tupleDescriptor; } ;
typedef TYPE_5__ TupleTableSlot ;
struct TYPE_34__ {TYPE_5__* ecxt_scantuple; } ;
struct TYPE_33__ {int indexorderdir; } ;
struct TYPE_26__ {TYPE_9__* ps_ExprContext; scalar_t__ plan; TYPE_10__* state; } ;
struct TYPE_27__ {int ss_currentRelation; TYPE_5__* ss_ScanTupleSlot; TYPE_1__ ps; } ;
struct TYPE_32__ {scalar_t__ ioss_NumRuntimeKeys; int indexqual; TYPE_5__* ioss_TableSlot; int ioss_VMBuffer; int ioss_NumOrderByKeys; int ioss_OrderByKeys; int ioss_NumScanKeys; int ioss_ScanKeys; scalar_t__ ioss_RuntimeKeysReady; TYPE_6__* ioss_ScanDesc; int ioss_RelationDesc; TYPE_2__ ss; } ;
struct TYPE_31__ {int xs_want_itup; scalar_t__ numberOfOrderBys; int heapRelation; scalar_t__ xs_recheckorderby; scalar_t__ xs_recheck; int xs_itupdesc; scalar_t__ xs_itup; scalar_t__ xs_hitup; TYPE_4__* xs_hitupdesc; scalar_t__ xs_heap_continue; } ;
struct TYPE_29__ {scalar_t__ natts; } ;
struct TYPE_28__ {scalar_t__ natts; } ;
struct TYPE_25__ {int es_snapshot; int es_direction; } ;
typedef int ScanDirection ;
typedef int * ItemPointer ;
typedef TYPE_6__* IndexScanDesc ;
typedef TYPE_7__ IndexOnlyScanState ;
typedef TYPE_8__ IndexOnlyScan ;
typedef TYPE_9__ ExprContext ;
typedef TYPE_10__ EState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (scalar_t__,TYPE_5__*,int) ;
 int FUNC_4 (int ,TYPE_9__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_7__*,int) ;
 int FUNC_6 (TYPE_7__*,int) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_5__*,scalar_t__,int ) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 TYPE_6__* FUNC_17 (int ,int ,int ,int ,int ) ;
 int FUNC_18 (TYPE_6__*,TYPE_5__*) ;
 int * FUNC_19 (TYPE_6__*,int ) ;
 int FUNC_20 (TYPE_6__*,int ,int ,int ,int ) ;

__attribute__((used)) static TupleTableSlot *
FUNC_21(IndexOnlyScanState *VAR_5)
{
 EState *VAR_6;
 ExprContext *VAR_7;
 ScanDirection VAR_8;
 IndexScanDesc VAR_9;
 TupleTableSlot *VAR_10;
 ItemPointer VAR_11;




 VAR_6 = VAR_5->ss.ps.state;
 VAR_8 = VAR_6->es_direction;

 if (FUNC_9(((IndexOnlyScan *) VAR_5->ss.ps.plan)->indexorderdir))
 {
  if (FUNC_10(VAR_8))
   VAR_8 = VAR_0;
  else if (FUNC_9(VAR_8))
   VAR_8 = VAR_3;
 }
 VAR_9 = VAR_5->ioss_ScanDesc;
 VAR_7 = VAR_5->ss.ps.ps_ExprContext;
 VAR_10 = VAR_5->ss.ss_ScanTupleSlot;

 if (VAR_9 == ((void*)0))
 {





  VAR_9 = FUNC_17(VAR_5->ss.ss_currentRelation,
           VAR_5->ioss_RelationDesc,
           VAR_6->es_snapshot,
           VAR_5->ioss_NumScanKeys,
           VAR_5->ioss_NumOrderByKeys);

  VAR_5->ioss_ScanDesc = VAR_9;



  VAR_5->ioss_ScanDesc->xs_want_itup = 1;
  VAR_5->ioss_VMBuffer = VAR_4;





  if (VAR_5->ioss_NumRuntimeKeys == 0 || VAR_5->ioss_RuntimeKeysReady)
   FUNC_20(VAR_9,
       VAR_5->ioss_ScanKeys,
       VAR_5->ioss_NumScanKeys,
       VAR_5->ioss_OrderByKeys,
       VAR_5->ioss_NumOrderByKeys);
 }




 while ((VAR_11 = FUNC_19(VAR_9, VAR_8)) != ((void*)0))
 {
  bool VAR_12 = 0;

  FUNC_1();
  if (!FUNC_12(VAR_9->heapRelation,
       FUNC_7(VAR_11),
       &VAR_5->ioss_VMBuffer))
  {



   FUNC_6(VAR_5, 1);
   if (!FUNC_18(VAR_9, VAR_5->ioss_TableSlot))
    continue;

   FUNC_2(VAR_5->ioss_TableSlot);







   if (VAR_9->xs_heap_continue)
    FUNC_13(VAR_2, "non-MVCC snapshots are not supported in index-only scans");
   VAR_12 = 1;
  }







  if (VAR_9->xs_hitup)
  {





   FUNC_0(VAR_10->tts_tupleDescriptor->natts ==
       VAR_9->xs_hitupdesc->natts);
   FUNC_3(VAR_9->xs_hitup, VAR_10, 0);
  }
  else if (VAR_9->xs_itup)
   FUNC_11(VAR_10, VAR_9->xs_itup, VAR_9->xs_itupdesc);
  else
   FUNC_13(VAR_2, "no data returned for index-only scan");






  if (VAR_9->xs_recheck)
  {
   VAR_7->ecxt_scantuple = VAR_10;
   if (!FUNC_4(VAR_5->indexqual, VAR_7))
   {

    FUNC_5(VAR_5, 1);
    continue;
   }
  }
  if (VAR_9->numberOfOrderBys > 0 && VAR_9->xs_recheckorderby)
   FUNC_14(VAR_2,
     (FUNC_15(VAR_1),
      FUNC_16("lossy distance functions are not supported in index-only scans")));





  if (!VAR_12)
   FUNC_8(VAR_9->heapRelation,
         FUNC_7(VAR_11),
         VAR_6->es_snapshot);

  return VAR_10;
 }





 return FUNC_2(VAR_10);
}
