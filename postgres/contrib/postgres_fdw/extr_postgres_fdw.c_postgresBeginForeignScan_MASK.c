
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int UserMapping ;
struct TYPE_17__ {int scanrelid; } ;
struct TYPE_24__ {int fdw_exprs; TYPE_2__ scan; int fdw_private; int fs_relids; } ;
struct TYPE_16__ {TYPE_10__* state; scalar_t__ plan; } ;
struct TYPE_19__ {TYPE_3__* ss_ScanTupleSlot; int * ss_currentRelation; TYPE_1__ ps; } ;
struct TYPE_23__ {TYPE_4__ ss; void* fdw_state; } ;
struct TYPE_22__ {int serverid; } ;
struct TYPE_21__ {int cursor_exists; int numParams; int param_values; int param_exprs; int param_flinfo; int tupdesc; int attinmeta; int * rel; void* temp_cxt; void* batch_cxt; int fetch_size; int * retrieved_attrs; int query; int conn; int cursor_number; } ;
struct TYPE_20__ {int relid; scalar_t__ checkAsUser; } ;
struct TYPE_18__ {int tts_tupleDescriptor; } ;
struct TYPE_15__ {int es_query_cxt; } ;
typedef TYPE_5__ RangeTblEntry ;
typedef int PlanState ;
typedef TYPE_6__ PgFdwScanState ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef TYPE_7__ ForeignTable ;
typedef TYPE_8__ ForeignScanState ;
typedef TYPE_9__ ForeignScan ;
typedef TYPE_10__ EState ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 TYPE_7__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int * FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 TYPE_5__* FUNC_9 (int,TYPE_10__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,int ,int,int *,int *,int *) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static void
FUNC_16(ForeignScanState *VAR_6, int VAR_7)
{
 ForeignScan *VAR_8 = (ForeignScan *) VAR_6->ss.ps.plan;
 EState *VAR_9 = VAR_6->ss.ps.state;
 PgFdwScanState *VAR_10;
 RangeTblEntry *VAR_11;
 Oid VAR_12;
 ForeignTable *VAR_13;
 UserMapping *VAR_14;
 int VAR_15;
 int VAR_16;




 if (VAR_7 & VAR_2)
  return;




 VAR_10 = (PgFdwScanState *) FUNC_13(sizeof(PgFdwScanState));
 VAR_6->fdw_state = (void *) VAR_10;







 if (VAR_8->scan.scanrelid > 0)
  VAR_15 = VAR_8->scan.scanrelid;
 else
  VAR_15 = FUNC_8(VAR_8->fs_relids, -1);
 VAR_11 = FUNC_9(VAR_15, VAR_9);
 VAR_12 = VAR_11->checkAsUser ? VAR_11->checkAsUser : FUNC_4();


 VAR_13 = FUNC_3(VAR_11->relid);
 VAR_14 = FUNC_5(VAR_12, VAR_13->serverid);





 VAR_10->conn = FUNC_1(VAR_14, 0);


 VAR_10->cursor_number = FUNC_2(VAR_10->conn);
 VAR_10->cursor_exists = 0;


 VAR_10->query = FUNC_15(FUNC_12(VAR_8->fdw_private,
          VAR_5));
 VAR_10->retrieved_attrs = (List *) FUNC_12(VAR_8->fdw_private,
             VAR_4);
 VAR_10->fetch_size = FUNC_10(FUNC_12(VAR_8->fdw_private,
            VAR_3));


 VAR_10->batch_cxt = FUNC_0(VAR_9->es_query_cxt,
              "postgres_fdw tuple data",
              VAR_0);
 VAR_10->temp_cxt = FUNC_0(VAR_9->es_query_cxt,
             "postgres_fdw temporary data",
             VAR_1);





 if (VAR_8->scan.scanrelid > 0)
 {
  VAR_10->rel = VAR_6->ss.ss_currentRelation;
  VAR_10->tupdesc = FUNC_6(VAR_10->rel);
 }
 else
 {
  VAR_10->rel = ((void*)0);
  VAR_10->tupdesc = VAR_6->ss.ss_ScanTupleSlot->tts_tupleDescriptor;
 }

 VAR_10->attinmeta = FUNC_7(VAR_10->tupdesc);




 VAR_16 = FUNC_11(VAR_8->fdw_exprs);
 VAR_10->numParams = VAR_16;
 if (VAR_16 > 0)
  FUNC_14((PlanState *) VAR_6,
        VAR_8->fdw_exprs,
        VAR_16,
        &VAR_10->param_flinfo,
        &VAR_10->param_exprs,
        &VAR_10->param_values);
}
