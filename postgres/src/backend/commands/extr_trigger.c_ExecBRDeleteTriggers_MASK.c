
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_11__ {int numtriggers; TYPE_3__* triggers; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_12__ {int tg_event; TYPE_3__* tg_trigger; int * tg_trigtuple; int * tg_trigslot; int * tg_newtable; int * tg_oldtable; int * tg_newslot; int * tg_newtuple; int tg_relation; int type; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_13__ {int tgtype; } ;
typedef TYPE_3__ Trigger ;
struct TYPE_14__ {int ri_TrigInstrument; int ri_TrigFunctions; int ri_RelationDesc; TYPE_1__* ri_TrigDesc; } ;
typedef TYPE_4__ ResultRelInfo ;
typedef int ItemPointer ;
typedef int * HeapTuple ;
typedef int EState ;
typedef int EPQState ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_2__*,int,int ,int ,int ) ;
 int * FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *,int *,int) ;
 int * FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,TYPE_4__*,int ,int ,int *,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *,TYPE_4__*,TYPE_3__*,int,int *,int *,int *) ;
 int FUNC_11 (int *) ;

bool
FUNC_12(EState *VAR_8, EPQState *VAR_9,
      ResultRelInfo *VAR_10,
      ItemPointer VAR_11,
      HeapTuple VAR_12,
      TupleTableSlot **VAR_13)
{
 TupleTableSlot *VAR_14 = FUNC_4(VAR_8, VAR_10);
 TriggerDesc *VAR_15 = VAR_10->ri_TrigDesc;
 bool VAR_16 = 1;
 TriggerData VAR_17;
 HeapTuple VAR_18;
 bool VAR_19 = 0;
 int VAR_20;

 FUNC_0(FUNC_7(VAR_12) ^ FUNC_8(VAR_11));
 if (VAR_12 == ((void*)0))
 {
  TupleTableSlot *VAR_21 = ((void*)0);

  if (!FUNC_6(VAR_8, VAR_9, VAR_10, VAR_11,
        VAR_0, VAR_14, &VAR_21))
   return 0;






  if (VAR_21 != ((void*)0) && VAR_13 != ((void*)0))
  {
   *VAR_13 = VAR_21;
   return 0;
  }

  VAR_18 = FUNC_2(VAR_14, 1, &VAR_19);

 }
 else
 {
  VAR_18 = VAR_12;
  FUNC_3(VAR_18, VAR_14, 0);
 }

 VAR_17.type = VAR_7;
 VAR_17.tg_event = VAR_2 |
  VAR_3 |
  VAR_1;
 VAR_17.tg_relation = VAR_10->ri_RelationDesc;
 VAR_17.tg_trigtuple = ((void*)0);
 VAR_17.tg_newtuple = ((void*)0);
 VAR_17.tg_trigslot = ((void*)0);
 VAR_17.tg_newslot = ((void*)0);
 VAR_17.tg_oldtable = ((void*)0);
 VAR_17.tg_newtable = ((void*)0);
 for (VAR_20 = 0; VAR_20 < VAR_15->numtriggers; VAR_20++)
 {
  HeapTuple VAR_22;
  Trigger *VAR_23 = &VAR_15->triggers[VAR_20];

  if (!FUNC_9(VAR_23->tgtype,
          VAR_6,
          VAR_4,
          VAR_5))
   continue;
  if (!FUNC_10(VAR_8, VAR_10, VAR_23, VAR_17.tg_event,
       ((void*)0), VAR_14, ((void*)0)))
   continue;

  VAR_17.tg_trigslot = VAR_14;
  VAR_17.tg_trigtuple = VAR_18;
  VAR_17.tg_trigger = VAR_23;
  VAR_22 = FUNC_1(&VAR_17,
            VAR_20,
            VAR_10->ri_TrigFunctions,
            VAR_10->ri_TrigInstrument,
            FUNC_5(VAR_8));
  if (VAR_22 == ((void*)0))
  {
   VAR_16 = 0;
   break;
  }
  if (VAR_22 != VAR_18)
   FUNC_11(VAR_22);
 }
 if (VAR_19)
  FUNC_11(VAR_18);

 return VAR_16;
}
