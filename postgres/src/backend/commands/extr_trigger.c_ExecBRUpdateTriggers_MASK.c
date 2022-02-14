
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_13__ {int numtriggers; TYPE_3__* triggers; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_14__ {int tg_event; TYPE_3__* tg_trigger; int * tg_newslot; int * tg_newtuple; int * tg_trigtuple; int * tg_trigslot; int * tg_newtable; int * tg_oldtable; int tg_relation; int type; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_15__ {int tgtype; } ;
typedef TYPE_3__ Trigger ;
struct TYPE_16__ {int ri_TrigInstrument; int ri_TrigFunctions; int ri_RelationDesc; int ri_junkFilter; TYPE_1__* ri_TrigDesc; } ;
typedef TYPE_4__ ResultRelInfo ;
typedef int LockTupleMode ;
typedef int ItemPointer ;
typedef int * HeapTuple ;
typedef int EState ;
typedef int EPQState ;
typedef int Bitmapset ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int,int*) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int * FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 int * FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,TYPE_4__*,int ,int ,int *,int **) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (int *,TYPE_4__*,TYPE_3__*,int,int *,int *,int *) ;
 int FUNC_16 (int *) ;

bool
FUNC_17(EState *VAR_7, EPQState *VAR_8,
      ResultRelInfo *VAR_9,
      ItemPointer VAR_10,
      HeapTuple VAR_11,
      TupleTableSlot *VAR_12)
{
 TriggerDesc *VAR_13 = VAR_9->ri_TrigDesc;
 TupleTableSlot *VAR_14 = FUNC_6(VAR_7, VAR_9);
 HeapTuple VAR_15 = ((void*)0);
 HeapTuple VAR_16;
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 TriggerData VAR_19;
 int VAR_20;
 Bitmapset *VAR_21;
 LockTupleMode VAR_22;


 VAR_22 = FUNC_8(VAR_7, VAR_9);

 FUNC_0(FUNC_12(VAR_11) ^ FUNC_13(VAR_10));
 if (VAR_11 == ((void*)0))
 {
  TupleTableSlot *VAR_23 = ((void*)0);


  if (!FUNC_11(VAR_7, VAR_8, VAR_9, VAR_10,
        VAR_22, VAR_14, &VAR_23))
   return 0;
  if (VAR_23 != ((void*)0))
  {
   TupleTableSlot *VAR_24;

   VAR_24 = FUNC_4(VAR_9->ri_junkFilter, VAR_23);

   if (VAR_12 != VAR_24)
    FUNC_2(VAR_12, VAR_24);
  }

  VAR_16 = FUNC_3(VAR_14, 1, &VAR_17);
 }
 else
 {
  FUNC_5(VAR_11, VAR_14, 0);
  VAR_16 = VAR_11;
 }

 VAR_19.type = VAR_6;
 VAR_19.tg_event = VAR_2 |
  VAR_1 |
  VAR_0;
 VAR_19.tg_relation = VAR_9->ri_RelationDesc;
 VAR_19.tg_oldtable = ((void*)0);
 VAR_19.tg_newtable = ((void*)0);
 VAR_21 = FUNC_9(VAR_9, VAR_7);
 for (VAR_20 = 0; VAR_20 < VAR_13->numtriggers; VAR_20++)
 {
  Trigger *VAR_25 = &VAR_13->triggers[VAR_20];
  HeapTuple VAR_26;

  if (!FUNC_14(VAR_25->tgtype,
          VAR_4,
          VAR_3,
          VAR_5))
   continue;
  if (!FUNC_15(VAR_7, VAR_9, VAR_25, VAR_19.tg_event,
       VAR_21, VAR_14, VAR_12))
   continue;

  if (!VAR_15)
   VAR_15 = FUNC_3(VAR_12, 1, &VAR_18);

  VAR_19.tg_trigslot = VAR_14;
  VAR_19.tg_trigtuple = VAR_16;
  VAR_19.tg_newtuple = VAR_26 = VAR_15;
  VAR_19.tg_newslot = VAR_12;
  VAR_19.tg_trigger = VAR_25;
  VAR_15 = FUNC_1(&VAR_19,
            VAR_20,
            VAR_9->ri_TrigFunctions,
            VAR_9->ri_TrigInstrument,
            FUNC_10(VAR_7));

  if (VAR_15 == ((void*)0))
  {
   if (VAR_17)
    FUNC_16(VAR_16);
   if (VAR_18)
    FUNC_16(VAR_26);
   return 0;
  }
  else if (VAR_15 != VAR_26)
  {
   FUNC_5(VAR_15, VAR_12, 0);







   if (VAR_17 && VAR_15 == VAR_16)
    FUNC_7(VAR_12);

   if (VAR_18)
    FUNC_16(VAR_26);


   VAR_15 = ((void*)0);
  }
 }
 if (VAR_17)
  FUNC_16(VAR_16);

 return 1;
}
