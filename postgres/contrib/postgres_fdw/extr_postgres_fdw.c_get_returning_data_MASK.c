
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
typedef struct TYPE_13__ TYPE_12__ ;


typedef int TupleTableSlot ;
struct TYPE_20__ {int es_processed; TYPE_4__* es_result_relation_info; } ;
struct TYPE_14__ {TYPE_7__* state; } ;
struct TYPE_15__ {int * ss_ScanTupleSlot; TYPE_1__ ps; } ;
struct TYPE_19__ {TYPE_2__ ss; scalar_t__ fdw_state; } ;
struct TYPE_18__ {scalar_t__ next_tuple; scalar_t__ num_tuples; scalar_t__ rel; scalar_t__ result; int temp_cxt; int retrieved_attrs; int attinmeta; int has_returning; scalar_t__ set_processed; } ;
struct TYPE_17__ {TYPE_12__* ri_projectReturning; } ;
struct TYPE_16__ {int * ecxt_scantuple; } ;
struct TYPE_13__ {TYPE_3__* pi_exprContext; } ;
typedef TYPE_4__ ResultRelInfo ;
typedef TYPE_5__ PgFdwDirectModifyState ;
typedef int HeapTuple ;
typedef TYPE_6__ ForeignScanState ;
typedef TYPE_7__ EState ;


 int FUNC_0 (TYPE_12__*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int * FUNC_9 (TYPE_5__*,int *,TYPE_7__*) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,int ,int ,TYPE_6__*,int ) ;

__attribute__((used)) static TupleTableSlot *
FUNC_11(ForeignScanState *VAR_0)
{
 PgFdwDirectModifyState *VAR_1 = (PgFdwDirectModifyState *) VAR_0->fdw_state;
 EState *VAR_2 = VAR_0->ss.ps.state;
 ResultRelInfo *VAR_3 = VAR_2->es_result_relation_info;
 TupleTableSlot *VAR_4 = VAR_0->ss.ss_ScanTupleSlot;
 TupleTableSlot *VAR_5;

 FUNC_0(VAR_3->ri_projectReturning);


 if (VAR_1->next_tuple >= VAR_1->num_tuples)
  return FUNC_1(VAR_4);


 if (VAR_1->set_processed)
  VAR_2->es_processed += 1;






 if (!VAR_1->has_returning)
 {
  FUNC_2(VAR_4);
  VAR_5 = VAR_4;
 }
 else
 {




  FUNC_7();
  {
   HeapTuple VAR_6;

   VAR_6 = FUNC_10(VAR_1->result,
            VAR_1->next_tuple,
            VAR_1->rel,
            VAR_1->attinmeta,
            VAR_1->retrieved_attrs,
            VAR_0,
            VAR_1->temp_cxt);
   FUNC_3(VAR_6, VAR_4, 0);
  }
  FUNC_4();
  {
   if (VAR_1->result)
    FUNC_8(VAR_1->result);
   FUNC_6();
  }
  FUNC_5();


  if (VAR_1->rel)
   VAR_5 = VAR_4;
  else
   VAR_5 = FUNC_9(VAR_1, VAR_4, VAR_2);
 }
 VAR_1->next_tuple++;


 VAR_3->ri_projectReturning->pi_exprContext->ecxt_scantuple =
  VAR_5;

 return VAR_4;
}
