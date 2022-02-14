
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_100__ TYPE_9__ ;
typedef struct TYPE_99__ TYPE_8__ ;
typedef struct TYPE_98__ TYPE_81__ ;
typedef struct TYPE_97__ TYPE_7__ ;
typedef struct TYPE_96__ TYPE_6__ ;
typedef struct TYPE_95__ TYPE_5__ ;
typedef struct TYPE_94__ TYPE_4__ ;
typedef struct TYPE_93__ TYPE_3__ ;
typedef struct TYPE_92__ TYPE_2__ ;
typedef struct TYPE_91__ TYPE_1__ ;
typedef struct TYPE_90__ TYPE_13__ ;
typedef struct TYPE_89__ TYPE_12__ ;
typedef struct TYPE_88__ TYPE_11__ ;
typedef struct TYPE_87__ TYPE_10__ ;


struct TYPE_96__ {void* tts_tableOid; } ;
typedef TYPE_6__ TupleTableSlot ;
struct TYPE_97__ {int attrMap; } ;
typedef TYPE_7__ TupleConversionMap ;
struct TYPE_100__ {scalar_t__ ri_NumIndices; scalar_t__ ri_projectReturning; int * ri_WithCheckOptions; int ri_junkFilter; int ri_RangeTableIndex; scalar_t__ ri_PartitionCheck; TYPE_2__* ri_FdwRoutine; TYPE_1__* ri_TrigDesc; TYPE_10__* ri_RelationDesc; } ;
struct TYPE_99__ {int traversed; int cmax; } ;
struct TYPE_98__ {TYPE_7__* tcs_map; int * tcs_original_insert_tuple; } ;
struct TYPE_95__ {TYPE_4__* constr; } ;
struct TYPE_94__ {scalar_t__ has_generated_stored; } ;
struct TYPE_93__ {scalar_t__ plan; } ;
struct TYPE_92__ {TYPE_6__* (* ExecForeignUpdate ) (TYPE_13__*,TYPE_9__*,TYPE_6__*,TYPE_6__*) ;} ;
struct TYPE_91__ {scalar_t__ trig_update_instead_row; scalar_t__ trig_update_before_row; } ;
struct TYPE_90__ {int es_processed; int es_output_cid; int es_snapshot; int es_crosscheck_snapshot; TYPE_9__* es_result_relation_info; } ;
struct TYPE_89__ {scalar_t__ onConflictAction; } ;
struct TYPE_88__ {int mt_nplans; scalar_t__ operation; TYPE_81__* mt_transition_capture; TYPE_81__* mt_oc_transition_capture; int * rootResultRelInfo; int mt_root_tuple_slot; TYPE_9__* resultRelInfo; TYPE_3__ ps; int * mt_partition_tuple_routing; } ;
struct TYPE_87__ {TYPE_5__* rd_att; } ;
typedef int TM_Result ;
typedef TYPE_8__ TM_FailureData ;
typedef TYPE_9__ ResultRelInfo ;
typedef TYPE_10__* Relation ;
typedef int PartitionTupleRouting ;
typedef TYPE_11__ ModifyTableState ;
typedef TYPE_12__ ModifyTable ;
typedef int LockTupleMode ;
typedef int List ;
typedef int ItemPointer ;
typedef int HeapTuple ;
typedef TYPE_13__ EState ;
typedef int EPQState ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_1 (int *,TYPE_10__*,int ,TYPE_6__*) ;
 TYPE_6__* FUNC_2 (int *,TYPE_10__*,int ) ;
 int FUNC_3 (TYPE_13__*,TYPE_9__*,int ,int ,TYPE_6__*,int *,TYPE_81__*) ;
 int FUNC_4 (TYPE_13__*,int *,TYPE_9__*,int ,int ,TYPE_6__*) ;
 int FUNC_5 (TYPE_13__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_9__*,TYPE_6__*,TYPE_13__*) ;
 int FUNC_7 (TYPE_11__*,int ,int ,TYPE_6__*,int *,TYPE_13__*,int,int,int,int*,TYPE_6__**) ;
 TYPE_6__* FUNC_8 (int ,TYPE_6__*) ;
 int FUNC_9 (TYPE_13__*,TYPE_9__*,int ,TYPE_6__*) ;
 TYPE_6__* FUNC_10 (TYPE_11__*,TYPE_6__*,TYPE_6__*,TYPE_13__*,int) ;
 int * FUNC_11 (TYPE_6__*,TYPE_13__*,int,int *,int *) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_9__*,TYPE_6__*,TYPE_13__*,int) ;
 int FUNC_14 (TYPE_9__*,TYPE_6__*,TYPE_13__*) ;
 TYPE_6__* FUNC_15 (TYPE_11__*,TYPE_13__*,int *,int *,TYPE_6__*) ;
 TYPE_6__* FUNC_16 (TYPE_9__*,TYPE_6__*,TYPE_6__*) ;
 int FUNC_17 (int ,TYPE_9__*,TYPE_6__*,TYPE_13__*) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_20 (TYPE_10__*) ;




 int VAR_8 ;
 scalar_t__ FUNC_21 (TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_22 (int ,char*,...) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (char*) ;
 TYPE_6__* FUNC_28 (int ,TYPE_6__*,int ) ;
 int FUNC_29 (int *) ;
 TYPE_6__* FUNC_30 (TYPE_13__*,TYPE_9__*,TYPE_6__*,TYPE_6__*) ;
 int FUNC_31 (TYPE_10__*,int ,int ,TYPE_6__*,int ,int ,int ,int ,TYPE_8__*) ;
 int FUNC_32 (TYPE_10__*,int ,TYPE_6__*,int ,int ,int ,int,TYPE_8__*,int *,int*) ;
 TYPE_7__* FUNC_33 (TYPE_11__*,int) ;

__attribute__((used)) static TupleTableSlot *
FUNC_34(ModifyTableState *VAR_11,
     ItemPointer VAR_12,
     HeapTuple VAR_13,
     TupleTableSlot *VAR_14,
     TupleTableSlot *VAR_15,
     EPQState *VAR_16,
     EState *VAR_17,
     bool VAR_18)
{
 ResultRelInfo *VAR_19;
 Relation VAR_20;
 TM_Result VAR_21;
 TM_FailureData VAR_22;
 List *VAR_23 = VAR_6;
 TupleConversionMap *VAR_24 = ((void*)0);




 if (FUNC_18())
  FUNC_22(VAR_4, "cannot UPDATE during bootstrap");

 FUNC_12(VAR_14);




 VAR_19 = VAR_17->es_result_relation_info;
 VAR_20 = VAR_19->ri_RelationDesc;


 if (VAR_19->ri_TrigDesc &&
  VAR_19->ri_TrigDesc->trig_update_before_row)
 {
  if (!FUNC_4(VAR_17, VAR_16, VAR_19,
          VAR_12, VAR_13, VAR_14))
   return ((void*)0);
 }


 if (VAR_19->ri_TrigDesc &&
  VAR_19->ri_TrigDesc->trig_update_instead_row)
 {
  if (!FUNC_9(VAR_17, VAR_19,
          VAR_13, VAR_14))
   return ((void*)0);
 }
 else if (VAR_19->ri_FdwRoutine)
 {



  if (VAR_20->rd_att->constr &&
   VAR_20->rd_att->constr->has_generated_stored)
   FUNC_5(VAR_17, VAR_14);




  VAR_14 = VAR_19->ri_FdwRoutine->ExecForeignUpdate(VAR_17,
                  VAR_19,
                  VAR_14,
                  VAR_15);

  if (VAR_14 == ((void*)0))
   return ((void*)0);






  VAR_14->tts_tableOid = FUNC_20(VAR_20);
 }
 else
 {
  LockTupleMode VAR_25;
  bool VAR_26;
  bool VAR_27;





  VAR_14->tts_tableOid = FUNC_20(VAR_20);




  if (VAR_20->rd_att->constr &&
   VAR_20->rd_att->constr->has_generated_stored)
   FUNC_5(VAR_17, VAR_14);
lreplace:;


  FUNC_12(VAR_14);
  VAR_26 =
   VAR_19->ri_PartitionCheck &&
   !FUNC_13(VAR_19, VAR_14, VAR_17, 0);

  if (!VAR_26 &&
   VAR_19->ri_WithCheckOptions != VAR_6)
  {




   FUNC_17(VAR_9,
         VAR_19, VAR_14, VAR_17);
  }





  if (VAR_26)
  {
   bool VAR_28;
   TupleTableSlot *VAR_29;
   TupleTableSlot *VAR_30 = ((void*)0);
   PartitionTupleRouting *VAR_31 = VAR_11->mt_partition_tuple_routing;
   int VAR_32;
   TupleConversionMap *VAR_33;







   if (((ModifyTable *) VAR_11->ps.plan)->onConflictAction == VAR_7)
    FUNC_23(VAR_4,
      (FUNC_24(VAR_1),
       FUNC_27("invalid ON UPDATE specification"),
       FUNC_25("The result tuple would appear in a different partition than the original tuple.")));






   if (VAR_31 == ((void*)0))
    FUNC_14(VAR_19, VAR_14, VAR_17);





   FUNC_7(VAR_11, VAR_12, VAR_13, VAR_15, VAR_16,
        VAR_17, 0, 0 ,
        1 , &VAR_28, &VAR_30);
   if (!VAR_28)
   {







    if (FUNC_21(VAR_30))
     return ((void*)0);
    else
    {
     VAR_14 = FUNC_8(VAR_19->ri_junkFilter, VAR_30);
     goto lreplace;
    }
   }
   if (VAR_11->mt_transition_capture)
    VAR_24 = VAR_11->mt_transition_capture->tcs_map;
   VAR_32 = VAR_19 - VAR_11->resultRelInfo;
   FUNC_0(VAR_32 >= 0 && VAR_32 < VAR_11->mt_nplans);
   VAR_33 = FUNC_33(VAR_11, VAR_32);
   if (VAR_33 != ((void*)0))
    VAR_14 = FUNC_28(VAR_33->attrMap,
            VAR_14,
            VAR_11->mt_root_tuple_slot);





   FUNC_0(VAR_11->rootResultRelInfo != ((void*)0));
   VAR_14 = FUNC_15(VAR_11, VAR_17, VAR_31,
             VAR_11->rootResultRelInfo, VAR_14);

   VAR_29 = FUNC_10(VAR_11, VAR_14, VAR_15,
          VAR_17, VAR_18);


   VAR_17->es_result_relation_info = VAR_19;
   if (VAR_11->mt_transition_capture)
   {
    VAR_11->mt_transition_capture->tcs_original_insert_tuple = ((void*)0);
    VAR_11->mt_transition_capture->tcs_map = VAR_24;
   }

   return VAR_29;
  }







  if (VAR_20->rd_att->constr)
   FUNC_6(VAR_19, VAR_14, VAR_17);
  VAR_21 = FUNC_32(VAR_20, VAR_12, VAR_14,
         VAR_17->es_output_cid,
         VAR_17->es_snapshot,
         VAR_17->es_crosscheck_snapshot,
         1 ,
         &VAR_22, &VAR_25, &VAR_27);

  switch (VAR_21)
  {
   case 129:
    if (VAR_22.cmax != VAR_17->es_output_cid)
     FUNC_23(VAR_4,
       (FUNC_24(VAR_2),
        FUNC_27("tuple to be updated was already modified by an operation triggered by the current command"),
        FUNC_26("Consider using an AFTER trigger instead of a BEFORE trigger to propagate changes to other rows.")));


    return ((void*)0);

   case 130:
    break;

   case 128:
    {
     TupleTableSlot *VAR_34;
     TupleTableSlot *VAR_35;

     if (FUNC_19())
      FUNC_23(VAR_4,
        (FUNC_24(VAR_3),
         FUNC_27("could not serialize access due to concurrent update")));





     VAR_34 = FUNC_2(VAR_16, VAR_20,
             VAR_19->ri_RangeTableIndex);

     VAR_21 = FUNC_31(VAR_20, VAR_12,
             VAR_17->es_snapshot,
             VAR_34, VAR_17->es_output_cid,
             VAR_25, VAR_5,
             VAR_8,
             &VAR_22);

     switch (VAR_21)
     {
      case 130:
       FUNC_0(VAR_22.traversed);

       VAR_35 = FUNC_1(VAR_16,
               VAR_20,
               VAR_19->ri_RangeTableIndex,
               VAR_34);
       if (FUNC_21(VAR_35))

        return ((void*)0);

       VAR_14 = FUNC_8(VAR_19->ri_junkFilter, VAR_35);
       goto lreplace;

      case 131:

       return ((void*)0);

      case 129:
       if (VAR_22.cmax != VAR_17->es_output_cid)
        FUNC_23(VAR_4,
          (FUNC_24(VAR_2),
           FUNC_27("tuple to be updated was already modified by an operation triggered by the current command"),
           FUNC_26("Consider using an AFTER trigger instead of a BEFORE trigger to propagate changes to other rows.")));
       return ((void*)0);

      default:

       FUNC_22(VAR_4, "unexpected table_tuple_lock status: %u",
         VAR_21);
       return ((void*)0);
     }
    }

    break;

   case 131:
    if (FUNC_19())
     FUNC_23(VAR_4,
       (FUNC_24(VAR_3),
        FUNC_27("could not serialize access due to concurrent delete")));

    return ((void*)0);

   default:
    FUNC_22(VAR_4, "unrecognized table_tuple_update status: %u",
      VAR_21);
    return ((void*)0);
  }


  if (VAR_19->ri_NumIndices > 0 && VAR_27)
   VAR_23 = FUNC_11(VAR_14, VAR_17, 0, ((void*)0), VAR_6);
 }

 if (VAR_18)
  (VAR_17->es_processed)++;


 FUNC_3(VAR_17, VAR_19, VAR_12, VAR_13, VAR_14,
       VAR_23,
       VAR_11->operation == VAR_0 ?
       VAR_11->mt_oc_transition_capture :
       VAR_11->mt_transition_capture);

 FUNC_29(VAR_23);
 if (VAR_19->ri_WithCheckOptions != VAR_6)
  FUNC_17(VAR_10, VAR_19, VAR_14, VAR_17);


 if (VAR_19->ri_projectReturning)
  return FUNC_16(VAR_19, VAR_14, VAR_15);

 return ((void*)0);
}
