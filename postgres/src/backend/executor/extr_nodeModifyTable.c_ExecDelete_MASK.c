
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_57__ TYPE_8__ ;
typedef struct TYPE_56__ TYPE_7__ ;
typedef struct TYPE_55__ TYPE_6__ ;
typedef struct TYPE_54__ TYPE_5__ ;
typedef struct TYPE_53__ TYPE_4__ ;
typedef struct TYPE_52__ TYPE_3__ ;
typedef struct TYPE_51__ TYPE_2__ ;
typedef struct TYPE_50__ TYPE_1__ ;


struct TYPE_52__ {int tts_tableOid; } ;
typedef TYPE_3__ TupleTableSlot ;
struct TYPE_53__ {scalar_t__ tcs_update_old_table; } ;
typedef TYPE_4__ TransitionCaptureState ;
struct TYPE_57__ {int es_processed; int es_output_cid; int es_snapshot; int es_crosscheck_snapshot; TYPE_6__* es_result_relation_info; } ;
struct TYPE_56__ {scalar_t__ operation; TYPE_4__* mt_transition_capture; } ;
struct TYPE_55__ {TYPE_2__* ri_FdwRoutine; scalar_t__ ri_projectReturning; int ri_RangeTableIndex; TYPE_1__* ri_TrigDesc; int ri_RelationDesc; } ;
struct TYPE_54__ {int traversed; int cmax; } ;
struct TYPE_51__ {TYPE_3__* (* ExecForeignDelete ) (TYPE_8__*,TYPE_6__*,TYPE_3__*,TYPE_3__*) ;} ;
struct TYPE_50__ {scalar_t__ trig_delete_instead_row; scalar_t__ trig_delete_before_row; } ;
typedef int TM_Result ;
typedef TYPE_5__ TM_FailureData ;
typedef TYPE_6__ ResultRelInfo ;
typedef int Relation ;
typedef TYPE_7__ ModifyTableState ;
typedef int ItemPointer ;
typedef int * HeapTuple ;
typedef TYPE_8__ EState ;
typedef int EPQState ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int *,int ,int ,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_8__*,TYPE_6__*,int ,int *,TYPE_4__*) ;
 int FUNC_5 (TYPE_8__*,TYPE_6__*,int ,int *,int *,int *,TYPE_4__*) ;
 int FUNC_6 (TYPE_8__*,int *,TYPE_6__*,int ,int *,TYPE_3__**) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,TYPE_3__*,int) ;
 TYPE_3__* FUNC_9 (TYPE_8__*,TYPE_6__*) ;
 int FUNC_10 (TYPE_8__*,TYPE_6__*,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_3__* FUNC_12 (TYPE_6__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (int ) ;
 int VAR_6 ;




 scalar_t__ FUNC_16 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 TYPE_3__* FUNC_23 (TYPE_8__*,TYPE_6__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_24 (int ,int ,int ,int ,int ,int,TYPE_5__*,int) ;
 int FUNC_25 (int ,int ,int ,TYPE_3__*) ;
 int FUNC_26 (int ,int ,int ,TYPE_3__*,int ,int ,int ,int ,TYPE_5__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_27(ModifyTableState *VAR_8,
     ItemPointer VAR_9,
     HeapTuple VAR_10,
     TupleTableSlot *VAR_11,
     EPQState *VAR_12,
     EState *VAR_13,
     bool VAR_14,
     bool VAR_15,
     bool VAR_16,
     bool *VAR_17,
     TupleTableSlot **VAR_18)
{
 ResultRelInfo *VAR_19;
 Relation VAR_20;
 TM_Result VAR_21;
 TM_FailureData VAR_22;
 TupleTableSlot *VAR_23 = ((void*)0);
 TransitionCaptureState *VAR_24;

 if (VAR_17)
  *VAR_17 = 0;




 VAR_19 = VAR_13->es_result_relation_info;
 VAR_20 = VAR_19->ri_RelationDesc;


 if (VAR_19->ri_TrigDesc &&
  VAR_19->ri_TrigDesc->trig_delete_before_row)
 {
  bool VAR_25;

  VAR_25 = FUNC_6(VAR_13, VAR_12, VAR_19,
          VAR_9, VAR_10, VAR_18);

  if (!VAR_25)
   return ((void*)0);
 }


 if (VAR_19->ri_TrigDesc &&
  VAR_19->ri_TrigDesc->trig_delete_instead_row)
 {
  bool VAR_26;

  FUNC_0(VAR_10 != ((void*)0));
  VAR_26 = FUNC_10(VAR_13, VAR_19, VAR_10);

  if (!VAR_26)
   return ((void*)0);
 }
 else if (VAR_19->ri_FdwRoutine)
 {






  VAR_23 = FUNC_9(VAR_13, VAR_19);
  VAR_23 = VAR_19->ri_FdwRoutine->ExecForeignDelete(VAR_13,
                  VAR_19,
                  VAR_23,
                  VAR_11);

  if (VAR_23 == ((void*)0))
   return ((void*)0);





  if (FUNC_16(VAR_23))
   FUNC_13(VAR_23);

  VAR_23->tts_tableOid = FUNC_15(VAR_20);
 }
 else
 {
ldelete:;
  VAR_21 = FUNC_24(VAR_20, VAR_9,
         VAR_13->es_output_cid,
         VAR_13->es_snapshot,
         VAR_13->es_crosscheck_snapshot,
         1 ,
         &VAR_22,
         VAR_16);

  switch (VAR_21)
  {
   case 129:
    if (VAR_22.cmax != VAR_13->es_output_cid)
     FUNC_19(VAR_3,
       (FUNC_20(VAR_1),
        FUNC_22("tuple to be deleted was already modified by an operation triggered by the current command"),
        FUNC_21("Consider using an AFTER trigger instead of a BEFORE trigger to propagate changes to other rows.")));


    return ((void*)0);

   case 130:
    break;

   case 128:
    {
     TupleTableSlot *VAR_27;
     TupleTableSlot *VAR_28;

     if (FUNC_14())
      FUNC_19(VAR_3,
        (FUNC_20(VAR_2),
         FUNC_22("could not serialize access due to concurrent update")));





     FUNC_2(VAR_12);
     VAR_27 = FUNC_3(VAR_12, VAR_20,
             VAR_19->ri_RangeTableIndex);

     VAR_21 = FUNC_26(VAR_20, VAR_9,
             VAR_13->es_snapshot,
             VAR_27, VAR_13->es_output_cid,
             VAR_4, VAR_5,
             VAR_7,
             &VAR_22);

     switch (VAR_21)
     {
      case 130:
       FUNC_0(VAR_22.traversed);
       VAR_28 = FUNC_1(VAR_12,
               VAR_20,
               VAR_19->ri_RangeTableIndex,
               VAR_27);
       if (FUNC_17(VAR_28))

        return ((void*)0);





       if (VAR_18)
       {
        *VAR_18 = VAR_28;
        return ((void*)0);
       }
       else
        goto ldelete;

      case 129:
       if (VAR_22.cmax != VAR_13->es_output_cid)
        FUNC_19(VAR_3,
          (FUNC_20(VAR_1),
           FUNC_22("tuple to be deleted was already modified by an operation triggered by the current command"),
           FUNC_21("Consider using an AFTER trigger instead of a BEFORE trigger to propagate changes to other rows.")));
       return ((void*)0);

      case 131:

       return ((void*)0);

      default:
       FUNC_18(VAR_3, "unexpected table_tuple_lock status: %u",
         VAR_21);
       return ((void*)0);
     }

     FUNC_0(0);
     break;
    }

   case 131:
    if (FUNC_14())
     FUNC_19(VAR_3,
       (FUNC_20(VAR_2),
        FUNC_22("could not serialize access due to concurrent delete")));

    return ((void*)0);

   default:
    FUNC_18(VAR_3, "unrecognized table_tuple_delete status: %u",
      VAR_21);
    return ((void*)0);
  }
 }

 if (VAR_15)
  (VAR_13->es_processed)++;


 if (VAR_17)
  *VAR_17 = 1;







 VAR_24 = VAR_8->mt_transition_capture;
 if (VAR_8->operation == VAR_0 && VAR_8->mt_transition_capture
  && VAR_8->mt_transition_capture->tcs_update_old_table)
 {
  FUNC_5(VAR_13, VAR_19,
        VAR_9,
        VAR_10,
        ((void*)0),
        ((void*)0),
        VAR_8->mt_transition_capture);





  VAR_24 = ((void*)0);
 }


 FUNC_4(VAR_13, VAR_19, VAR_9, VAR_10,
       VAR_24);


 if (VAR_14 && VAR_19->ri_projectReturning)
 {




  TupleTableSlot *VAR_29;

  if (VAR_19->ri_FdwRoutine)
  {

   FUNC_0(!FUNC_17(VAR_23));
  }
  else
  {
   VAR_23 = FUNC_9(VAR_13, VAR_19);
   if (VAR_10 != ((void*)0))
   {
    FUNC_8(VAR_10, VAR_23, 0);
   }
   else
   {
    if (!FUNC_25(VAR_20, VAR_9,
               VAR_6, VAR_23))
     FUNC_18(VAR_3, "failed to fetch deleted tuple for DELETE RETURNING");
   }
  }

  VAR_29 = FUNC_12(VAR_19, VAR_23, VAR_11);





  FUNC_11(VAR_29);

  FUNC_7(VAR_23);

  return VAR_29;
 }

 return ((void*)0);
}
