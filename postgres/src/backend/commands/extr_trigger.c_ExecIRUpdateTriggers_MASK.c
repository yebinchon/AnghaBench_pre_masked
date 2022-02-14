
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_10__ {int numtriggers; TYPE_3__* triggers; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_11__ {int tg_event; TYPE_3__* tg_trigger; int * tg_newtuple; int * tg_newslot; int * tg_trigtuple; int * tg_trigslot; int * tg_newtable; int * tg_oldtable; int tg_relation; int type; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_12__ {int tgtype; } ;
typedef TYPE_3__ Trigger ;
struct TYPE_13__ {int ri_TrigInstrument; int ri_TrigFunctions; int ri_RelationDesc; TYPE_1__* ri_TrigDesc; } ;
typedef TYPE_4__ ResultRelInfo ;
typedef int * HeapTuple ;
typedef int EState ;


 int * FUNC_0 (TYPE_2__*,int,int ,int ,int ) ;
 int * FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *,TYPE_4__*,TYPE_3__*,int,int *,int *,int *) ;
 int FUNC_7 (int *) ;

bool
FUNC_8(EState *VAR_7, ResultRelInfo *VAR_8,
      HeapTuple VAR_9, TupleTableSlot *VAR_10)
{
 TriggerDesc *VAR_11 = VAR_8->ri_TrigDesc;
 TupleTableSlot *VAR_12 = FUNC_3(VAR_7, VAR_8);
 HeapTuple VAR_13 = ((void*)0);
 bool VAR_14;
 TriggerData VAR_15;
 int VAR_16;

 VAR_15.type = VAR_6;
 VAR_15.tg_event = VAR_2 |
  VAR_1 |
  VAR_0;
 VAR_15.tg_relation = VAR_8->ri_RelationDesc;
 VAR_15.tg_oldtable = ((void*)0);
 VAR_15.tg_newtable = ((void*)0);

 FUNC_2(VAR_9, VAR_12, 0);

 for (VAR_16 = 0; VAR_16 < VAR_11->numtriggers; VAR_16++)
 {
  Trigger *VAR_17 = &VAR_11->triggers[VAR_16];
  HeapTuple VAR_18;

  if (!FUNC_5(VAR_17->tgtype,
          VAR_4,
          VAR_3,
          VAR_5))
   continue;
  if (!FUNC_6(VAR_7, VAR_8, VAR_17, VAR_15.tg_event,
       ((void*)0), VAR_12, VAR_10))
   continue;

  if (!VAR_13)
   VAR_13 = FUNC_1(VAR_10, 1, &VAR_14);

  VAR_15.tg_trigslot = VAR_12;
  VAR_15.tg_trigtuple = VAR_9;
  VAR_15.tg_newslot = VAR_10;
  VAR_15.tg_newtuple = VAR_18 = VAR_13;

  VAR_15.tg_trigger = VAR_17;
  VAR_13 = FUNC_0(&VAR_15,
            VAR_16,
            VAR_8->ri_TrigFunctions,
            VAR_8->ri_TrigInstrument,
            FUNC_4(VAR_7));
  if (VAR_13 == ((void*)0))
  {
   return 0;
  }
  else if (VAR_13 != VAR_18)
  {
   FUNC_2(VAR_13, VAR_10, 0);

   if (VAR_14)
    FUNC_7(VAR_18);


   VAR_13 = ((void*)0);
  }
 }

 return 1;
}
