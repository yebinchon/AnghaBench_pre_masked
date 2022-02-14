
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int numtriggers; TYPE_3__* triggers; int trig_update_before_statement; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_11__ {int tg_event; TYPE_3__* tg_trigger; int * tg_newtable; int * tg_oldtable; int * tg_newslot; int * tg_trigslot; int * tg_newtuple; int * tg_trigtuple; int tg_relation; int type; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_12__ {int tgtype; } ;
typedef TYPE_3__ Trigger ;
struct TYPE_13__ {int ri_TrigInstrument; int ri_TrigFunctions; int ri_RelationDesc; TYPE_1__* ri_TrigDesc; } ;
typedef TYPE_4__ ResultRelInfo ;
typedef scalar_t__ HeapTuple ;
typedef int EState ;
typedef int Bitmapset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int ,int ,int ) ;
 int * FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,TYPE_4__*,TYPE_3__*,int,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

void
FUNC_10(EState *VAR_9, ResultRelInfo *VAR_10)
{
 TriggerDesc *VAR_11;
 int VAR_12;
 TriggerData VAR_13;
 Bitmapset *VAR_14;

 VAR_11 = VAR_10->ri_TrigDesc;

 if (VAR_11 == ((void*)0))
  return;
 if (!VAR_11->trig_update_before_statement)
  return;


 if (FUNC_6(FUNC_3(VAR_10->ri_RelationDesc),
           VAR_0))
  return;

 VAR_14 = FUNC_1(VAR_10, VAR_9);

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
  Trigger *VAR_15 = &VAR_11->triggers[VAR_12];
  HeapTuple VAR_16;

  if (!FUNC_4(VAR_15->tgtype,
          VAR_6,
          VAR_5,
          VAR_7))
   continue;
  if (!FUNC_5(VAR_9, VAR_10, VAR_15, VAR_13.tg_event,
       VAR_14, ((void*)0), ((void*)0)))
   continue;

  VAR_13.tg_trigger = VAR_15;
  VAR_16 = FUNC_0(&VAR_13,
            VAR_12,
            VAR_10->ri_TrigFunctions,
            VAR_10->ri_TrigInstrument,
            FUNC_2(VAR_9));

  if (VAR_16)
   FUNC_7(VAR_2,
     (FUNC_8(VAR_1),
      FUNC_9("BEFORE STATEMENT trigger cannot return a value")));
 }
}
