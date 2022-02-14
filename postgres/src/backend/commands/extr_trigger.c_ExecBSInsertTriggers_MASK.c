
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int numtriggers; TYPE_3__* triggers; int trig_insert_before_statement; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_10__ {int tg_event; TYPE_3__* tg_trigger; int * tg_newtable; int * tg_oldtable; int * tg_newslot; int * tg_trigslot; int * tg_newtuple; int * tg_trigtuple; int tg_relation; int type; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_11__ {int tgtype; } ;
typedef TYPE_3__ Trigger ;
struct TYPE_12__ {int ri_TrigInstrument; int ri_TrigFunctions; int ri_RelationDesc; TYPE_1__* ri_TrigDesc; } ;
typedef TYPE_4__ ResultRelInfo ;
typedef scalar_t__ HeapTuple ;
typedef int EState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,TYPE_4__*,TYPE_3__*,int,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;

void
FUNC_9(EState *VAR_9, ResultRelInfo *VAR_10)
{
 TriggerDesc *VAR_11;
 int VAR_12;
 TriggerData VAR_13;

 VAR_11 = VAR_10->ri_TrigDesc;

 if (VAR_11 == ((void*)0))
  return;
 if (!VAR_11->trig_insert_before_statement)
  return;


 if (FUNC_5(FUNC_2(VAR_10->ri_RelationDesc),
           VAR_0))
  return;

 VAR_13.type = VAR_8;
 VAR_13.tg_event = VAR_4 |
  VAR_3;
 VAR_13.tg_relation = VAR_10->ri_RelationDesc;
 VAR_13.tg_trigtuple = ((void*)0);
 VAR_13.tg_newtuple = ((void*)0);
 VAR_13.tg_trigslot = ((void*)0);
 VAR_13.tg_newslot = ((void*)0);
 VAR_13.tg_oldtable = ((void*)0);
 VAR_13.tg_newtable = ((void*)0);
 for (VAR_12 = 0; VAR_12 < VAR_11->numtriggers; VAR_12++)
 {
  Trigger *VAR_14 = &VAR_11->triggers[VAR_12];
  HeapTuple VAR_15;

  if (!FUNC_3(VAR_14->tgtype,
          VAR_7,
          VAR_5,
          VAR_6))
   continue;
  if (!FUNC_4(VAR_9, VAR_10, VAR_14, VAR_13.tg_event,
       ((void*)0), ((void*)0), ((void*)0)))
   continue;

  VAR_13.tg_trigger = VAR_14;
  VAR_15 = FUNC_0(&VAR_13,
            VAR_12,
            VAR_10->ri_TrigFunctions,
            VAR_10->ri_TrigInstrument,
            FUNC_1(VAR_9));

  if (VAR_15)
   FUNC_6(VAR_2,
     (FUNC_7(VAR_1),
      FUNC_8("BEFORE STATEMENT trigger cannot return a value")));
 }
}
