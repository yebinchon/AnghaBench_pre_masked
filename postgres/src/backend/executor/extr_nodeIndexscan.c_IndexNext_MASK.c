
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_20__ {int es_snapshot; int es_direction; } ;
struct TYPE_19__ {int * ecxt_scantuple; } ;
struct TYPE_18__ {int indexorderdir; } ;
struct TYPE_17__ {scalar_t__ xs_recheck; } ;
struct TYPE_14__ {TYPE_6__* ps_ExprContext; scalar_t__ plan; TYPE_7__* state; } ;
struct TYPE_15__ {int ss_currentRelation; int * ss_ScanTupleSlot; TYPE_1__ ps; } ;
struct TYPE_16__ {scalar_t__ iss_NumRuntimeKeys; int iss_ReachedEnd; int indexqualorig; int iss_NumOrderByKeys; int iss_OrderByKeys; int iss_NumScanKeys; int iss_ScanKeys; scalar_t__ iss_RuntimeKeysReady; TYPE_4__* iss_ScanDesc; int iss_RelationDesc; TYPE_2__ ss; } ;
typedef int ScanDirection ;
typedef TYPE_3__ IndexScanState ;
typedef TYPE_4__* IndexScanDesc ;
typedef TYPE_5__ IndexScan ;
typedef TYPE_6__ ExprContext ;
typedef TYPE_7__ EState ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,int *) ;
 int FUNC_8 (TYPE_4__*,int ,int ,int ,int ) ;

__attribute__((used)) static TupleTableSlot *
FUNC_9(IndexScanState *VAR_2)
{
 EState *VAR_3;
 ExprContext *VAR_4;
 ScanDirection VAR_5;
 IndexScanDesc VAR_6;
 TupleTableSlot *VAR_7;




 VAR_3 = VAR_2->ss.ps.state;
 VAR_5 = VAR_3->es_direction;

 if (FUNC_4(((IndexScan *) VAR_2->ss.ps.plan)->indexorderdir))
 {
  if (FUNC_5(VAR_5))
   VAR_5 = VAR_0;
  else if (FUNC_4(VAR_5))
   VAR_5 = VAR_1;
 }
 VAR_6 = VAR_2->iss_ScanDesc;
 VAR_4 = VAR_2->ss.ps.ps_ExprContext;
 VAR_7 = VAR_2->ss.ss_ScanTupleSlot;

 if (VAR_6 == ((void*)0))
 {




  VAR_6 = FUNC_6(VAR_2->ss.ss_currentRelation,
           VAR_2->iss_RelationDesc,
           VAR_3->es_snapshot,
           VAR_2->iss_NumScanKeys,
           VAR_2->iss_NumOrderByKeys);

  VAR_2->iss_ScanDesc = VAR_6;





  if (VAR_2->iss_NumRuntimeKeys == 0 || VAR_2->iss_RuntimeKeysReady)
   FUNC_8(VAR_6,
       VAR_2->iss_ScanKeys, VAR_2->iss_NumScanKeys,
       VAR_2->iss_OrderByKeys, VAR_2->iss_NumOrderByKeys);
 }




 while (FUNC_7(VAR_6, VAR_5, VAR_7))
 {
  FUNC_0();





  if (VAR_6->xs_recheck)
  {
   VAR_4->ecxt_scantuple = VAR_7;
   if (!FUNC_2(VAR_2->indexqualorig, VAR_4))
   {

    FUNC_3(VAR_2, 1);
    continue;
   }
  }

  return VAR_7;
 }





 VAR_2->iss_ReachedEnd = 1;
 return FUNC_1(VAR_7);
}
