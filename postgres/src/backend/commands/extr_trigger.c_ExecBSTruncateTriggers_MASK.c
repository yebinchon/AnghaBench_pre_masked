
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int numtriggers; TYPE_3__* triggers; int trig_truncate_before_statement; } ;
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
 scalar_t__ FUNC_0 (TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,TYPE_4__*,TYPE_3__*,int,int *,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

void
FUNC_7(EState *VAR_8, ResultRelInfo *VAR_9)
{
 TriggerDesc *VAR_10;
 int VAR_11;
 TriggerData VAR_12;

 VAR_10 = VAR_9->ri_TrigDesc;

 if (VAR_10 == ((void*)0))
  return;
 if (!VAR_10->trig_truncate_before_statement)
  return;

 VAR_12.type = VAR_7;
 VAR_12.tg_event = VAR_3 |
  VAR_2;
 VAR_12.tg_relation = VAR_9->ri_RelationDesc;
 VAR_12.tg_trigtuple = ((void*)0);
 VAR_12.tg_newtuple = ((void*)0);
 VAR_12.tg_trigslot = ((void*)0);
 VAR_12.tg_newslot = ((void*)0);
 VAR_12.tg_oldtable = ((void*)0);
 VAR_12.tg_newtable = ((void*)0);

 for (VAR_11 = 0; VAR_11 < VAR_10->numtriggers; VAR_11++)
 {
  Trigger *VAR_13 = &VAR_10->triggers[VAR_11];
  HeapTuple VAR_14;

  if (!FUNC_2(VAR_13->tgtype,
          VAR_5,
          VAR_4,
          VAR_6))
   continue;
  if (!FUNC_3(VAR_8, VAR_9, VAR_13, VAR_12.tg_event,
       ((void*)0), ((void*)0), ((void*)0)))
   continue;

  VAR_12.tg_trigger = VAR_13;
  VAR_14 = FUNC_0(&VAR_12,
            VAR_11,
            VAR_9->ri_TrigFunctions,
            VAR_9->ri_TrigInstrument,
            FUNC_1(VAR_8));

  if (VAR_14)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("BEFORE STATEMENT trigger cannot return a value")));
 }
}
