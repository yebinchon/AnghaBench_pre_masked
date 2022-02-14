
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_85__ TYPE_9__ ;
typedef struct TYPE_84__ TYPE_8__ ;
typedef struct TYPE_83__ TYPE_7__ ;
typedef struct TYPE_82__ TYPE_6__ ;
typedef struct TYPE_81__ TYPE_5__ ;
typedef struct TYPE_80__ TYPE_4__ ;
typedef struct TYPE_79__ TYPE_3__ ;
typedef struct TYPE_78__ TYPE_2__ ;
typedef struct TYPE_77__ TYPE_24__ ;
typedef struct TYPE_76__ TYPE_1__ ;
typedef struct TYPE_75__ TYPE_11__ ;
typedef struct TYPE_74__ TYPE_10__ ;


typedef int uint32 ;
typedef int WCOKind ;
struct TYPE_81__ {int tts_tid; void* tts_tableOid; } ;
typedef TYPE_5__ TupleTableSlot ;
struct TYPE_82__ {scalar_t__ tcs_update_new_table; } ;
typedef TYPE_6__ TransitionCaptureState ;
struct TYPE_77__ {scalar_t__ plan; } ;
struct TYPE_85__ {scalar_t__ operation; TYPE_6__* mt_transition_capture; TYPE_24__ ps; } ;
struct TYPE_84__ {TYPE_3__* rd_att; } ;
struct TYPE_83__ {scalar_t__ ri_NumIndices; scalar_t__ ri_projectReturning; int * ri_WithCheckOptions; int * ri_onConflictArbiterIndexes; TYPE_4__* ri_TrigDesc; int * ri_PartitionRoot; scalar_t__ ri_PartitionCheck; TYPE_8__* ri_RelationDesc; TYPE_1__* ri_FdwRoutine; } ;
struct TYPE_80__ {scalar_t__ trig_insert_before_row; scalar_t__ trig_insert_instead_row; } ;
struct TYPE_79__ {TYPE_2__* constr; } ;
struct TYPE_78__ {scalar_t__ has_generated_stored; } ;
struct TYPE_76__ {TYPE_5__* (* ExecForeignInsert ) (TYPE_11__*,TYPE_7__*,TYPE_5__*,TYPE_5__*) ;} ;
struct TYPE_75__ {int es_processed; int es_output_cid; TYPE_7__* es_result_relation_info; } ;
struct TYPE_74__ {scalar_t__ onConflictAction; } ;
typedef TYPE_7__ ResultRelInfo ;
typedef TYPE_8__* Relation ;
typedef scalar_t__ OnConflictAction ;
typedef TYPE_9__ ModifyTableState ;
typedef TYPE_10__ ModifyTable ;
typedef int List ;
typedef int ItemPointerData ;
typedef TYPE_11__ EState ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_11__*,TYPE_7__*,TYPE_5__*,int *,TYPE_6__*) ;
 int FUNC_2 (TYPE_11__*,TYPE_7__*,int *,int *,TYPE_5__*,int *,TYPE_6__*) ;
 int FUNC_3 (TYPE_11__*,TYPE_7__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_11__*,int *,int *) ;
 int FUNC_5 (TYPE_11__*,TYPE_7__*,int *,int ) ;
 int FUNC_6 (TYPE_11__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_7__*,TYPE_5__*,TYPE_11__*) ;
 int FUNC_8 (TYPE_11__*,TYPE_7__*) ;
 int FUNC_9 (TYPE_11__*,TYPE_7__*,TYPE_5__*) ;
 int * FUNC_10 (TYPE_5__*,TYPE_11__*,int,int*,int *) ;
 int FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_9__*,TYPE_7__*,int *,TYPE_5__*,TYPE_5__*,TYPE_11__*,int,TYPE_5__**) ;
 int FUNC_13 (TYPE_7__*,TYPE_5__*,TYPE_11__*,int) ;
 TYPE_5__* FUNC_14 (TYPE_7__*,TYPE_5__*,TYPE_5__*) ;
 int FUNC_15 (int ,TYPE_7__*,TYPE_5__*,TYPE_11__*) ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_24__*,int) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_18 (TYPE_8__*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 TYPE_5__* FUNC_23 (TYPE_11__*,TYPE_7__*,TYPE_5__*,TYPE_5__*) ;
 int FUNC_24 (TYPE_8__*,TYPE_5__*,int ,int) ;
 int FUNC_25 (TYPE_8__*,TYPE_5__*,int ,int ,int *) ;
 int FUNC_26 (TYPE_8__*,TYPE_5__*,int ,int ,int *,int ) ;

__attribute__((used)) static TupleTableSlot *
FUNC_27(ModifyTableState *VAR_8,
     TupleTableSlot *VAR_9,
     TupleTableSlot *VAR_10,
     EState *VAR_11,
     bool VAR_12)
{
 ResultRelInfo *VAR_13;
 Relation VAR_14;
 List *VAR_15 = VAR_1;
 TupleTableSlot *VAR_16 = ((void*)0);
 TransitionCaptureState *VAR_17;
 ModifyTable *VAR_18 = (ModifyTable *) VAR_8->ps.plan;
 OnConflictAction VAR_19 = VAR_18->onConflictAction;

 FUNC_11(VAR_9);




 VAR_13 = VAR_11->es_result_relation_info;
 VAR_14 = VAR_13->ri_RelationDesc;
 if (VAR_13->ri_TrigDesc &&
  VAR_13->ri_TrigDesc->trig_insert_before_row)
 {
  if (!FUNC_3(VAR_11, VAR_13, VAR_9))
   return ((void*)0);
 }


 if (VAR_13->ri_TrigDesc &&
  VAR_13->ri_TrigDesc->trig_insert_instead_row)
 {
  if (!FUNC_9(VAR_11, VAR_13, VAR_9))
   return ((void*)0);
 }
 else if (VAR_13->ri_FdwRoutine)
 {



  if (VAR_14->rd_att->constr &&
   VAR_14->rd_att->constr->has_generated_stored)
   FUNC_6(VAR_11, VAR_9);




  VAR_9 = VAR_13->ri_FdwRoutine->ExecForeignInsert(VAR_11,
                  VAR_13,
                  VAR_9,
                  VAR_10);

  if (VAR_9 == ((void*)0))
   return ((void*)0);






  VAR_9->tts_tableOid = FUNC_18(VAR_13->ri_RelationDesc);

 }
 else
 {
  WCOKind VAR_20;





  VAR_9->tts_tableOid = FUNC_18(VAR_14);




  if (VAR_14->rd_att->constr &&
   VAR_14->rd_att->constr->has_generated_stored)
   FUNC_6(VAR_11, VAR_9);
  VAR_20 = (VAR_8->operation == VAR_0) ?
   VAR_6 : VAR_5;





  if (VAR_13->ri_WithCheckOptions != VAR_1)
   FUNC_15(VAR_20, VAR_13, VAR_9, VAR_11);




  if (VAR_14->rd_att->constr)
   FUNC_7(VAR_13, VAR_9, VAR_11);






  if (VAR_13->ri_PartitionCheck &&
   (VAR_13->ri_PartitionRoot == ((void*)0) ||
    (VAR_13->ri_TrigDesc &&
     VAR_13->ri_TrigDesc->trig_insert_before_row)))
   FUNC_13(VAR_13, VAR_9, VAR_11, 1);

  if (VAR_19 != VAR_2 && VAR_13->ri_NumIndices > 0)
  {

   uint32 VAR_21;
   ItemPointerData VAR_22;
   bool VAR_23;
   List *VAR_24;

   VAR_24 = VAR_13->ri_onConflictArbiterIndexes;
 vlock:
   VAR_23 = 0;
   if (!FUNC_4(VAR_9, VAR_11, &VAR_22,
             VAR_24))
   {

    if (VAR_19 == VAR_4)
    {






     TupleTableSlot *VAR_25 = ((void*)0);

     if (FUNC_12(VAR_8, VAR_13,
            &VAR_22, VAR_10, VAR_9,
            VAR_11, VAR_12, &VAR_25))
     {
      FUNC_17(&VAR_8->ps, 1);
      return VAR_25;
     }
     else
      goto vlock;
    }
    else
    {
     FUNC_0(VAR_19 == VAR_3);
     FUNC_5(VAR_11, VAR_13, &VAR_22,
          FUNC_8(VAR_11, VAR_13));
     FUNC_17(&VAR_8->ps, 1);
     return ((void*)0);
    }
   }







   VAR_21 = FUNC_19(FUNC_16());


   FUNC_26(VAR_14, VAR_9,
             VAR_11->es_output_cid,
             0,
             ((void*)0),
             VAR_21);


   VAR_15 = FUNC_10(VAR_9, VAR_11, 1,
               &VAR_23,
               VAR_24);


   FUNC_24(VAR_14, VAR_9,
            VAR_21, !VAR_23);
   FUNC_20(FUNC_16());






   if (VAR_23)
   {
    FUNC_21(VAR_15);
    goto vlock;
   }


  }
  else
  {

   FUNC_25(VAR_14, VAR_9,
          VAR_11->es_output_cid,
          0, ((void*)0));


   if (VAR_13->ri_NumIndices > 0)
    VAR_15 = FUNC_10(VAR_9, VAR_11, 0, ((void*)0),
                VAR_1);
  }
 }

 if (VAR_12)
 {
  (VAR_11->es_processed)++;
  FUNC_22(&VAR_9->tts_tid);
 }







 VAR_17 = VAR_8->mt_transition_capture;
 if (VAR_8->operation == VAR_0 && VAR_8->mt_transition_capture
  && VAR_8->mt_transition_capture->tcs_update_new_table)
 {
  FUNC_2(VAR_11, VAR_13, ((void*)0),
        ((void*)0),
        VAR_9,
        ((void*)0),
        VAR_8->mt_transition_capture);





  VAR_17 = ((void*)0);
 }


 FUNC_1(VAR_11, VAR_13, VAR_9, VAR_15,
       VAR_17);

 FUNC_21(VAR_15);
 if (VAR_13->ri_WithCheckOptions != VAR_1)
  FUNC_15(VAR_7, VAR_13, VAR_9, VAR_11);


 if (VAR_13->ri_projectReturning)
  VAR_16 = FUNC_14(VAR_13, VAR_9, VAR_10);

 return VAR_16;
}
