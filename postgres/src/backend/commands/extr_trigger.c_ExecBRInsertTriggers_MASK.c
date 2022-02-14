
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_9__ {int numtriggers; TYPE_3__* triggers; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_10__ {int tg_event; TYPE_3__* tg_trigger; int * tg_trigtuple; int * tg_trigslot; int * tg_newtable; int * tg_oldtable; int * tg_newslot; int * tg_newtuple; int tg_relation; int type; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_11__ {int tgtype; } ;
typedef TYPE_3__ Trigger ;
struct TYPE_12__ {int ri_TrigInstrument; int ri_TrigFunctions; int ri_RelationDesc; TYPE_1__* ri_TrigDesc; } ;
typedef TYPE_4__ ResultRelInfo ;
typedef int * HeapTuple ;
typedef int EState ;


 int * FUNC_0 (TYPE_2__*,int,int ,int ,int ) ;
 int * FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,TYPE_4__*,TYPE_3__*,int,int *,int *,int *) ;
 int FUNC_6 (int *) ;

bool
FUNC_7(EState *VAR_7, ResultRelInfo *VAR_8,
      TupleTableSlot *VAR_9)
{
 TriggerDesc *VAR_10 = VAR_8->ri_TrigDesc;
 HeapTuple VAR_11 = ((void*)0);
 bool VAR_12;
 TriggerData VAR_13;
 int VAR_14;

 VAR_13.type = VAR_6;
 VAR_13.tg_event = VAR_1 |
  VAR_2 |
  VAR_0;
 VAR_13.tg_relation = VAR_8->ri_RelationDesc;
 VAR_13.tg_trigtuple = ((void*)0);
 VAR_13.tg_newtuple = ((void*)0);
 VAR_13.tg_trigslot = ((void*)0);
 VAR_13.tg_newslot = ((void*)0);
 VAR_13.tg_oldtable = ((void*)0);
 VAR_13.tg_newtable = ((void*)0);
 for (VAR_14 = 0; VAR_14 < VAR_10->numtriggers; VAR_14++)
 {
  Trigger *VAR_15 = &VAR_10->triggers[VAR_14];
  HeapTuple VAR_16;

  if (!FUNC_4(VAR_15->tgtype,
          VAR_5,
          VAR_3,
          VAR_4))
   continue;
  if (!FUNC_5(VAR_7, VAR_8, VAR_15, VAR_13.tg_event,
       ((void*)0), ((void*)0), VAR_9))
   continue;

  if (!VAR_11)
   VAR_11 = FUNC_1(VAR_9, 1, &VAR_12);

  VAR_13.tg_trigslot = VAR_9;
  VAR_13.tg_trigtuple = VAR_16 = VAR_11;
  VAR_13.tg_trigger = VAR_15;
  VAR_11 = FUNC_0(&VAR_13,
            VAR_14,
            VAR_8->ri_TrigFunctions,
            VAR_8->ri_TrigInstrument,
            FUNC_3(VAR_7));
  if (VAR_11 == ((void*)0))
  {
   if (VAR_12)
    FUNC_6(VAR_16);
   return 0;
  }
  else if (VAR_11 != VAR_16)
  {
   FUNC_2(VAR_11, VAR_9, 0);

   if (VAR_12)
    FUNC_6(VAR_16);


   VAR_11 = ((void*)0);
  }
 }

 return 1;
}
