
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_54__ TYPE_9__ ;
typedef struct TYPE_53__ TYPE_8__ ;
typedef struct TYPE_52__ TYPE_7__ ;
typedef struct TYPE_51__ TYPE_6__ ;
typedef struct TYPE_50__ TYPE_5__ ;
typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;
typedef struct TYPE_45__ TYPE_17__ ;
typedef struct TYPE_44__ TYPE_13__ ;
typedef struct TYPE_43__ TYPE_12__ ;
typedef struct TYPE_42__ TYPE_11__ ;
typedef struct TYPE_41__ TYPE_10__ ;


typedef int Tuplestorestate ;
struct TYPE_49__ {int tts_tid; } ;
typedef TYPE_4__ TupleTableSlot ;
struct TYPE_50__ {int attrMap; int outdesc; } ;
typedef TYPE_5__ TupleConversionMap ;
struct TYPE_51__ {int numtriggers; TYPE_7__* triggers; int trig_update_after_row; int trig_insert_after_row; int trig_delete_after_row; } ;
typedef TYPE_6__ TriggerDesc ;
struct TYPE_52__ {scalar_t__ tgfoid; scalar_t__ tgnewtable; scalar_t__ tgoldtable; int tgoid; scalar_t__ tginitdeferred; scalar_t__ tgdeferrable; int tgconstrindid; int tgtype; } ;
typedef TYPE_7__ Trigger ;
struct TYPE_53__ {int tcs_delete_old_table; int tcs_update_old_table; int tcs_update_new_table; int tcs_insert_new_table; TYPE_3__* tcs_private; TYPE_5__* tcs_map; TYPE_4__* tcs_original_insert_tuple; } ;
typedef TYPE_8__ TransitionCaptureState ;
struct TYPE_54__ {TYPE_6__* ri_TrigDesc; TYPE_10__* ri_RelationDesc; } ;
struct TYPE_48__ {TYPE_4__* storeslot; int * new_tuplestore; int * old_tuplestore; } ;
struct TYPE_47__ {char relkind; } ;
struct TYPE_46__ {int events; } ;
struct TYPE_45__ {size_t query_depth; size_t maxquerydepth; TYPE_1__* query_stack; } ;
struct TYPE_44__ {int ate_flags; int ate_ctid2; int ate_ctid1; } ;
struct TYPE_43__ {int ats_event; TYPE_3__* ats_table; scalar_t__ ats_firing_id; int ats_relid; int ats_tgoid; } ;
struct TYPE_42__ {int es_tupleTable; } ;
struct TYPE_41__ {TYPE_2__* rd_rel; } ;
typedef TYPE_9__ ResultRelInfo ;
typedef TYPE_10__* Relation ;
typedef int List ;
typedef TYPE_11__ EState ;
typedef int Bitmapset ;
typedef TYPE_12__ AfterTriggerSharedData ;
typedef TYPE_13__ AfterTriggerEventData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_2 (int *,int ,int *) ;
 scalar_t__ VAR_10 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 char VAR_11 ;
 int FUNC_6 (TYPE_7__*,TYPE_10__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_7__*,TYPE_10__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_8 (scalar_t__) ;



 int FUNC_9 (TYPE_10__*) ;


 int VAR_12 ;
 int VAR_13 ;


 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int ,int,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_13 (TYPE_11__*,TYPE_9__*,TYPE_7__*,int,int *,TYPE_4__*,TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int *,TYPE_13__*,TYPE_12__*) ;
 TYPE_17__ VAR_22 ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (int ,TYPE_4__*,TYPE_4__*) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_21(EState *VAR_23, ResultRelInfo *VAR_24,
       int VAR_25, bool VAR_26,
       TupleTableSlot *VAR_27, TupleTableSlot *VAR_28,
       List *VAR_29, Bitmapset *VAR_30,
       TransitionCaptureState *VAR_31)
{
 Relation VAR_32 = VAR_24->ri_RelationDesc;
 TriggerDesc *VAR_33 = VAR_24->ri_TrigDesc;
 AfterTriggerEventData VAR_34;
 AfterTriggerSharedData VAR_35;
 char VAR_36 = VAR_32->rd_rel->relkind;
 int VAR_37;
 int VAR_38;
 int VAR_39;
 Tuplestorestate *VAR_40 = ((void*)0);






 if (VAR_22.query_depth < 0)
  FUNC_17(VAR_9, "AfterTriggerSaveEvent() called outside of query");


 if (VAR_22.query_depth >= VAR_22.maxquerydepth)
  FUNC_0();





 if (VAR_26 && VAR_31 != ((void*)0))
 {
  TupleTableSlot *VAR_41 = VAR_31->tcs_original_insert_tuple;
  TupleConversionMap *VAR_42 = VAR_31->tcs_map;
  bool VAR_43 = VAR_31->tcs_delete_old_table;
  bool VAR_44 = VAR_31->tcs_update_old_table;
  bool VAR_45 = VAR_31->tcs_update_new_table;
  bool VAR_46 = VAR_31->tcs_insert_new_table;
  FUNC_1(!(VAR_25 == 131 && VAR_43 &&
     FUNC_14(VAR_27)));
  FUNC_1(!(VAR_25 == 130 && VAR_46 &&
     FUNC_14(VAR_28)));

  if (!FUNC_14(VAR_27) &&
   ((VAR_25 == 131 && VAR_43) ||
    (VAR_25 == 128 && VAR_44)))
  {
   Tuplestorestate *VAR_47;

   VAR_47 = VAR_31->tcs_private->old_tuplestore;

   if (VAR_42 != ((void*)0))
   {
    TupleTableSlot *VAR_48;

    VAR_48 = VAR_31->tcs_private->storeslot;
    if (!VAR_48)
    {
     VAR_48 = FUNC_2(&VAR_23->es_tupleTable,
               VAR_42->outdesc,
               &VAR_21);
     VAR_31->tcs_private->storeslot = VAR_48;
    }

    FUNC_18(VAR_42->attrMap, VAR_27, VAR_48);
    FUNC_20(VAR_47, VAR_48);
   }
   else
    FUNC_20(VAR_47, VAR_27);
  }
  if (!FUNC_14(VAR_28) &&
   ((VAR_25 == 130 && VAR_46) ||
    (VAR_25 == 128 && VAR_45)))
  {
   Tuplestorestate *VAR_49;

   VAR_49 = VAR_31->tcs_private->new_tuplestore;

   if (VAR_41 != ((void*)0))
    FUNC_20(VAR_49,
          VAR_41);
   else if (VAR_42 != ((void*)0))
   {
    TupleTableSlot *VAR_50;

    VAR_50 = VAR_31->tcs_private->storeslot;

    if (!VAR_50)
    {
     VAR_50 = FUNC_2(&VAR_23->es_tupleTable,
               VAR_42->outdesc,
               &VAR_21);
     VAR_31->tcs_private->storeslot = VAR_50;
    }

    FUNC_18(VAR_42->attrMap, VAR_28, VAR_50);
    FUNC_20(VAR_49, VAR_50);
   }
   else
    FUNC_20(VAR_49, VAR_28);
  }
  if (VAR_33 == ((void*)0) ||
   (VAR_25 == 131 && !VAR_33->trig_delete_after_row) ||
   (VAR_25 == 130 && !VAR_33->trig_insert_after_row) ||
   (VAR_25 == 128 && !VAR_33->trig_update_after_row) ||
   (VAR_25 == 128 && (FUNC_14(VAR_27) ^ FUNC_14(VAR_28))))
   return;
 }
 switch (VAR_25)
 {
  case 130:
   VAR_37 = VAR_16;
   if (VAR_26)
   {
    FUNC_1(VAR_27 == ((void*)0));
    FUNC_1(VAR_28 != ((void*)0));
    FUNC_4(&(VAR_28->tts_tid), &(VAR_34.ate_ctid1));
    FUNC_5(&(VAR_34.ate_ctid2));
   }
   else
   {
    FUNC_1(VAR_27 == ((void*)0));
    FUNC_1(VAR_28 == ((void*)0));
    FUNC_5(&(VAR_34.ate_ctid1));
    FUNC_5(&(VAR_34.ate_ctid2));
    FUNC_16(FUNC_9(VAR_32),
             VAR_7, VAR_25);
   }
   break;
  case 131:
   VAR_37 = VAR_15;
   if (VAR_26)
   {
    FUNC_1(VAR_27 != ((void*)0));
    FUNC_1(VAR_28 == ((void*)0));
    FUNC_4(&(VAR_27->tts_tid), &(VAR_34.ate_ctid1));
    FUNC_5(&(VAR_34.ate_ctid2));
   }
   else
   {
    FUNC_1(VAR_27 == ((void*)0));
    FUNC_1(VAR_28 == ((void*)0));
    FUNC_5(&(VAR_34.ate_ctid1));
    FUNC_5(&(VAR_34.ate_ctid2));
    FUNC_16(FUNC_9(VAR_32),
             VAR_6, VAR_25);
   }
   break;
  case 128:
   VAR_37 = VAR_20;
   if (VAR_26)
   {
    FUNC_1(VAR_27 != ((void*)0));
    FUNC_1(VAR_28 != ((void*)0));
    FUNC_4(&(VAR_27->tts_tid), &(VAR_34.ate_ctid1));
    FUNC_4(&(VAR_28->tts_tid), &(VAR_34.ate_ctid2));
   }
   else
   {
    FUNC_1(VAR_27 == ((void*)0));
    FUNC_1(VAR_28 == ((void*)0));
    FUNC_5(&(VAR_34.ate_ctid1));
    FUNC_5(&(VAR_34.ate_ctid2));
    FUNC_16(FUNC_9(VAR_32),
             VAR_8, VAR_25);
   }
   break;
  case 129:
   VAR_37 = VAR_19;
   FUNC_1(VAR_27 == ((void*)0));
   FUNC_1(VAR_28 == ((void*)0));
   FUNC_5(&(VAR_34.ate_ctid1));
   FUNC_5(&(VAR_34.ate_ctid2));
   break;
  default:
   FUNC_17(VAR_9, "invalid after-trigger event code: %d", VAR_25);
   VAR_37 = 0;
   break;
 }

 if (!(VAR_36 == VAR_11 && VAR_26))
  VAR_34.ate_flags = (VAR_26 && VAR_25 == 128) ?
   VAR_1 : VAR_0;


 VAR_38 = (VAR_26 ? VAR_17 : VAR_18);

 for (VAR_39 = 0; VAR_39 < VAR_33->numtriggers; VAR_39++)
 {
  Trigger *VAR_51 = &VAR_33->triggers[VAR_39];

  if (!FUNC_12(VAR_51->tgtype,
          VAR_38,
          VAR_14,
          VAR_37))
   continue;
  if (!FUNC_13(VAR_23, VAR_24, VAR_51, VAR_25,
       VAR_30, VAR_27, VAR_28))
   continue;

  if (VAR_36 == VAR_11 && VAR_26)
  {
   if (VAR_40 == ((void*)0))
   {
    VAR_40 = FUNC_3();
    VAR_34.ate_flags = VAR_3;
   }
   else

    VAR_34.ate_flags = VAR_4;
  }






  if (FUNC_11(VAR_25) || FUNC_10(VAR_25))
  {
   switch (FUNC_8(VAR_51->tgfoid))
   {
    case 132:

     if (!FUNC_7(VAR_51, VAR_32,
                VAR_27, VAR_28))
     {

      continue;
     }
     break;

    case 134:

     if (!FUNC_6(VAR_51, VAR_32,
                VAR_27, VAR_28))
     {

      continue;
     }
     break;

    case 133:

     break;
   }
  }






  if (VAR_51->tgfoid == VAR_10)
  {
   if (!FUNC_19(VAR_29, VAR_51->tgconstrindid))
    continue;
  }






  VAR_35.ats_event =
   (VAR_25 & VAR_12) |
   (VAR_26 ? VAR_13 : 0) |
   (VAR_51->tgdeferrable ? VAR_2 : 0) |
   (VAR_51->tginitdeferred ? VAR_5 : 0);
  VAR_35.ats_tgoid = VAR_51->tgoid;
  VAR_35.ats_relid = FUNC_9(VAR_32);
  VAR_35.ats_firing_id = 0;
  if ((VAR_51->tgoldtable || VAR_51->tgnewtable) &&
   VAR_31 != ((void*)0))
   VAR_35.ats_table = VAR_31->tcs_private;
  else
   VAR_35.ats_table = ((void*)0);

  FUNC_15(&VAR_22.query_stack[VAR_22.query_depth].events,
        &VAR_34, &VAR_35);
 }






 if (VAR_40)
 {
  if (VAR_27 != ((void*)0))
   FUNC_20(VAR_40, VAR_27);
  if (VAR_28 != ((void*)0))
   FUNC_20(VAR_40, VAR_28);
 }
}
