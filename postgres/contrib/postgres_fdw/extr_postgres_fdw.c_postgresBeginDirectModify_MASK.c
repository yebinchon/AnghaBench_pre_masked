
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int UserMapping ;
typedef int TupleDesc ;
struct TYPE_20__ {TYPE_11__* state; scalar_t__ plan; } ;
struct TYPE_23__ {TYPE_3__* ss_ScanTupleSlot; int * ss_currentRelation; TYPE_1__ ps; } ;
struct TYPE_28__ {TYPE_4__ ss; void* fdw_state; } ;
struct TYPE_27__ {int serverid; } ;
struct TYPE_26__ {int num_tuples; int numParams; int param_values; int param_exprs; int param_flinfo; int attinmeta; int * rel; void* has_returning; int temp_cxt; void* set_processed; int * retrieved_attrs; int query; int * resultRel; int conn; } ;
struct TYPE_25__ {scalar_t__ checkAsUser; } ;
struct TYPE_24__ {scalar_t__ scanrelid; } ;
struct TYPE_22__ {int tts_tupleDescriptor; } ;
struct TYPE_21__ {int ri_RangeTableIndex; } ;
struct TYPE_19__ {int es_query_cxt; TYPE_2__* es_result_relation_info; } ;
struct TYPE_18__ {int fdw_exprs; int fdw_scan_tlist; TYPE_5__ scan; int fdw_private; } ;
typedef TYPE_6__ RangeTblEntry ;
typedef int PlanState ;
typedef TYPE_7__ PgFdwDirectModifyState ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int Index ;
typedef TYPE_8__ ForeignTable ;
typedef TYPE_9__ ForeignScanState ;
typedef TYPE_10__ ForeignScan ;
typedef TYPE_11__ EState ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_11__*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int) ;
 TYPE_8__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int * FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 TYPE_6__* FUNC_9 (int ,TYPE_11__*) ;
 int FUNC_10 (TYPE_7__*,int ,int ) ;
 void* FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *,int ,int,int *,int *,int *) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static void
FUNC_17(ForeignScanState *VAR_6, int VAR_7)
{
 ForeignScan *VAR_8 = (ForeignScan *) VAR_6->ss.ps.plan;
 EState *VAR_9 = VAR_6->ss.ps.state;
 PgFdwDirectModifyState *VAR_10;
 Index VAR_11;
 RangeTblEntry *VAR_12;
 Oid VAR_13;
 ForeignTable *VAR_14;
 UserMapping *VAR_15;
 int VAR_16;




 if (VAR_7 & VAR_1)
  return;




 VAR_10 = (PgFdwDirectModifyState *) FUNC_14(sizeof(PgFdwDirectModifyState));
 VAR_6->fdw_state = (void *) VAR_10;





 VAR_11 = VAR_9->es_result_relation_info->ri_RangeTableIndex;
 VAR_12 = FUNC_9(VAR_11, VAR_9);
 VAR_13 = VAR_12->checkAsUser ? VAR_12->checkAsUser : FUNC_4();


 if (VAR_8->scan.scanrelid == 0)
  VAR_10->rel = FUNC_1(VAR_9, VAR_11, VAR_7);
 else
  VAR_10->rel = VAR_6->ss.ss_currentRelation;
 VAR_14 = FUNC_3(FUNC_7(VAR_10->rel));
 VAR_15 = FUNC_5(VAR_13, VAR_14->serverid);





 VAR_10->conn = FUNC_2(VAR_15, 0);


 if (VAR_8->scan.scanrelid == 0)
 {

  VAR_10->resultRel = VAR_10->rel;







  VAR_10->rel = ((void*)0);
 }


 VAR_10->num_tuples = -1;


 VAR_10->query = FUNC_16(FUNC_13(VAR_8->fdw_private,
          VAR_5));
 VAR_10->has_returning = FUNC_11(FUNC_13(VAR_8->fdw_private,
            VAR_2));
 VAR_10->retrieved_attrs = (List *) FUNC_13(VAR_8->fdw_private,
             VAR_3);
 VAR_10->set_processed = FUNC_11(FUNC_13(VAR_8->fdw_private,
            VAR_4));


 VAR_10->temp_cxt = FUNC_0(VAR_9->es_query_cxt,
             "postgres_fdw temporary data",
             VAR_0);


 if (VAR_10->has_returning)
 {
  TupleDesc VAR_17;

  if (VAR_8->scan.scanrelid == 0)
   VAR_17 = VAR_6->ss.ss_ScanTupleSlot->tts_tupleDescriptor;
  else
   VAR_17 = FUNC_6(VAR_10->rel);

  VAR_10->attinmeta = FUNC_8(VAR_17);






  if (VAR_8->scan.scanrelid == 0)
   FUNC_10(VAR_10, VAR_8->fdw_scan_tlist, VAR_11);
 }




 VAR_16 = FUNC_12(VAR_8->fdw_exprs);
 VAR_10->numParams = VAR_16;
 if (VAR_16 > 0)
  FUNC_15((PlanState *) VAR_6,
        VAR_8->fdw_exprs,
        VAR_16,
        &VAR_10->param_flinfo,
        &VAR_10->param_exprs,
        &VAR_10->param_values);
}
