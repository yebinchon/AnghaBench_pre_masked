
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int TransactionId ;
struct TYPE_24__ {int state; TYPE_5__* ps_ExprContext; } ;
struct TYPE_23__ {int es_output_cid; int es_snapshot; } ;
struct TYPE_22__ {int * ecxt_outertuple; int * ecxt_innertuple; int * ecxt_scantuple; } ;
struct TYPE_21__ {TYPE_8__ ps; int mt_epqstate; } ;
struct TYPE_20__ {scalar_t__ ri_WithCheckOptions; TYPE_1__* ri_onConflict; int ri_RelationDesc; } ;
struct TYPE_19__ {int ctid; } ;
struct TYPE_18__ {int oc_ProjSlot; int oc_ProjInfo; int * oc_Existing; int * oc_WhereClause; } ;
typedef int TM_Result ;
typedef TYPE_2__ TM_FailureData ;
typedef TYPE_3__ ResultRelInfo ;
typedef int Relation ;
typedef TYPE_4__ ModifyTableState ;
typedef int LockTupleMode ;
typedef int ItemPointer ;
typedef int ExprState ;
typedef TYPE_5__ ExprContext ;
typedef TYPE_6__ EState ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_6__*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int * FUNC_6 (TYPE_4__*,int ,int *,int ,int *,int *,int ,int) ;
 int FUNC_7 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_8 (int ,TYPE_3__*,int *,int ) ;
 int FUNC_9 (TYPE_8__*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;





 int FUNC_12 (int ) ;
 int VAR_6 ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int *,int ,int*) ;
 int FUNC_19 (int ,int ,int ,int *,int ,int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_20(ModifyTableState *VAR_7,
      ResultRelInfo *VAR_8,
      ItemPointer VAR_9,
      TupleTableSlot *VAR_10,
      TupleTableSlot *VAR_11,
      EState *VAR_12,
      bool VAR_13,
      TupleTableSlot **VAR_14)
{
 ExprContext *VAR_15 = VAR_7->ps.ps_ExprContext;
 Relation VAR_16 = VAR_8->ri_RelationDesc;
 ExprState *VAR_17 = VAR_8->ri_onConflict->oc_WhereClause;
 TupleTableSlot *VAR_18 = VAR_8->ri_onConflict->oc_Existing;
 TM_FailureData VAR_19;
 LockTupleMode VAR_20;
 TM_Result VAR_21;
 Datum VAR_22;
 TransactionId VAR_23;
 bool VAR_24;


 VAR_20 = FUNC_7(VAR_12, VAR_8);







 VAR_21 = FUNC_19(VAR_16, VAR_9,
       VAR_12->es_snapshot,
       VAR_18, VAR_12->es_output_cid,
       VAR_20, VAR_3, 0,
       &VAR_19);
 switch (VAR_21)
 {
  case 130:

   break;

  case 131:
   VAR_22 = FUNC_18(VAR_18,
          VAR_4,
          &VAR_24);
   FUNC_0(!VAR_24);
   VAR_23 = FUNC_1(VAR_22);

   if (FUNC_12(VAR_23))
    FUNC_14(VAR_2,
      (FUNC_15(VAR_0),
       FUNC_17("ON CONFLICT DO UPDATE command cannot affect row a second time"),
       FUNC_16("Ensure that no rows proposed for insertion within the same command have duplicate constrained values.")));


   FUNC_13(VAR_2, "attempted to lock invisible tuple");
   break;

  case 129:






   FUNC_13(VAR_2, "unexpected self-updated tuple");
   break;

  case 128:
   if (FUNC_10())
    FUNC_14(VAR_2,
      (FUNC_15(VAR_1),
       FUNC_17("could not serialize access due to concurrent update")));







   FUNC_0(!FUNC_11(&VAR_19.ctid));
   FUNC_3(VAR_18);
   return 0;

  case 132:
   if (FUNC_10())
    FUNC_14(VAR_2,
      (FUNC_15(VAR_1),
       FUNC_17("could not serialize access due to concurrent delete")));


   FUNC_0(!FUNC_11(&VAR_19.ctid));
   FUNC_3(VAR_18);
   return 0;

  default:
   FUNC_13(VAR_2, "unrecognized table_tuple_lock status: %u", VAR_21);
 }
 FUNC_2(VAR_12, VAR_16, VAR_18);
 VAR_15->ecxt_scantuple = VAR_18;
 VAR_15->ecxt_innertuple = VAR_11;
 VAR_15->ecxt_outertuple = ((void*)0);

 if (!FUNC_5(VAR_17, VAR_15))
 {
  FUNC_3(VAR_18);
  FUNC_9(&VAR_7->ps, 1);
  return 1;
 }

 if (VAR_8->ri_WithCheckOptions != VAR_5)
 {
  FUNC_8(VAR_6, VAR_8,
        VAR_18,
        VAR_7->ps.state);
 }


 FUNC_4(VAR_8->ri_onConflict->oc_ProjInfo);
 *VAR_14 = FUNC_6(VAR_7, VAR_9, ((void*)0),
       VAR_8->ri_onConflict->oc_ProjSlot,
       VAR_10,
       &VAR_7->mt_epqstate, VAR_7->ps.state,
       VAR_13);






 FUNC_3(VAR_18);
 return 1;
}
