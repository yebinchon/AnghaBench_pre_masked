
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_19__ {TYPE_3__* evtrigdata; TYPE_2__* trigdata; int datum_context; } ;
struct TYPE_18__ {int promise; } ;
struct TYPE_17__ {char* event; char* tag; } ;
struct TYPE_16__ {TYPE_1__* tg_trigger; TYPE_12__* tg_relation; int tg_event; } ;
struct TYPE_15__ {int tgnargs; int * tgargs; int tgname; } ;
struct TYPE_14__ {int rd_id; } ;
typedef TYPE_4__ PLpgSQL_var ;
typedef TYPE_5__ PLpgSQL_execstate ;
typedef int MemoryContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_12__*) ;
 int FUNC_8 (TYPE_12__*) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_5__*,TYPE_4__*,int ,int,int) ;
 int FUNC_19 (TYPE_5__*,TYPE_4__*,char*) ;
 int FUNC_20 (int *,int *,int,int*,int*,int ,int,int,char) ;
 int FUNC_21 (int ,char*,...) ;
 int FUNC_22 (int ) ;
 int VAR_3 ;
 int * FUNC_23 (int) ;

__attribute__((used)) static void
FUNC_24(PLpgSQL_execstate *VAR_4,
      PLpgSQL_var *VAR_5)
{
 MemoryContext VAR_6;

 if (VAR_5->promise == VAR_1)
  return;
 VAR_6 = FUNC_4(VAR_4->datum_context);

 switch (VAR_5->promise)
 {
  case 135:
   if (VAR_4->trigdata == ((void*)0))
    FUNC_21(VAR_0, "trigger promise is not in a trigger function");
   FUNC_18(VAR_4, VAR_5,
         FUNC_2(VAR_3,
              FUNC_0(VAR_4->trigdata->tg_trigger->tgname)),
         0, 1);
   break;

  case 128:
   if (VAR_4->trigdata == ((void*)0))
    FUNC_21(VAR_0, "trigger promise is not in a trigger function");
   if (FUNC_10(VAR_4->trigdata->tg_event))
    FUNC_19(VAR_4, VAR_5, "BEFORE");
   else if (FUNC_9(VAR_4->trigdata->tg_event))
    FUNC_19(VAR_4, VAR_5, "AFTER");
   else if (FUNC_17(VAR_4->trigdata->tg_event))
    FUNC_19(VAR_4, VAR_5, "INSTEAD OF");
   else
    FUNC_21(VAR_0, "unrecognized trigger execution time: not BEFORE, AFTER, or INSTEAD OF");
   break;

  case 136:
   if (VAR_4->trigdata == ((void*)0))
    FUNC_21(VAR_0, "trigger promise is not in a trigger function");
   if (FUNC_15(VAR_4->trigdata->tg_event))
    FUNC_19(VAR_4, VAR_5, "ROW");
   else if (FUNC_16(VAR_4->trigdata->tg_event))
    FUNC_19(VAR_4, VAR_5, "STATEMENT");
   else
    FUNC_21(VAR_0, "unrecognized trigger event type: not ROW or STATEMENT");
   break;

  case 133:
   if (VAR_4->trigdata == ((void*)0))
    FUNC_21(VAR_0, "trigger promise is not in a trigger function");
   if (FUNC_12(VAR_4->trigdata->tg_event))
    FUNC_19(VAR_4, VAR_5, "INSERT");
   else if (FUNC_14(VAR_4->trigdata->tg_event))
    FUNC_19(VAR_4, VAR_5, "UPDATE");
   else if (FUNC_11(VAR_4->trigdata->tg_event))
    FUNC_19(VAR_4, VAR_5, "DELETE");
   else if (FUNC_13(VAR_4->trigdata->tg_event))
    FUNC_19(VAR_4, VAR_5, "TRUNCATE");
   else
    FUNC_21(VAR_0, "unrecognized trigger action: not INSERT, DELETE, UPDATE, or TRUNCATE");
   break;

  case 132:
   if (VAR_4->trigdata == ((void*)0))
    FUNC_21(VAR_0, "trigger promise is not in a trigger function");
   FUNC_18(VAR_4, VAR_5,
         FUNC_5(VAR_4->trigdata->tg_relation->rd_id),
         0, 0);
   break;

  case 131:
   if (VAR_4->trigdata == ((void*)0))
    FUNC_21(VAR_0, "trigger promise is not in a trigger function");
   FUNC_18(VAR_4, VAR_5,
         FUNC_2(VAR_3,
              FUNC_0(FUNC_8(VAR_4->trigdata->tg_relation))),
         0, 1);
   break;

  case 130:
   if (VAR_4->trigdata == ((void*)0))
    FUNC_21(VAR_0, "trigger promise is not in a trigger function");
   FUNC_18(VAR_4, VAR_5,
         FUNC_2(VAR_3,
              FUNC_0(FUNC_22(FUNC_7(VAR_4->trigdata->tg_relation)))),
         0, 1);
   break;

  case 134:
   if (VAR_4->trigdata == ((void*)0))
    FUNC_21(VAR_0, "trigger promise is not in a trigger function");
   FUNC_18(VAR_4, VAR_5,
         FUNC_3(VAR_4->trigdata->tg_trigger->tgnargs),
         0, 0);
   break;

  case 138:
   if (VAR_4->trigdata == ((void*)0))
    FUNC_21(VAR_0, "trigger promise is not in a trigger function");
   if (VAR_4->trigdata->tg_trigger->tgnargs > 0)
   {




    int VAR_7 = VAR_4->trigdata->tg_trigger->tgnargs;
    Datum *VAR_8;
    int VAR_9[1];
    int VAR_10[1];
    int VAR_11;

    VAR_8 = FUNC_23(sizeof(Datum) * VAR_7);
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
     VAR_8[VAR_11] = FUNC_1(VAR_4->trigdata->tg_trigger->tgargs[VAR_11]);
    VAR_9[0] = VAR_7;
    VAR_10[0] = 0;

    FUNC_18(VAR_4, VAR_5,
          FUNC_6(FUNC_20(VAR_8, ((void*)0),
                  1, VAR_9, VAR_10,
                  VAR_2,
                  -1, 0, 'i')),
          0, 1);
   }
   else
   {
    FUNC_18(VAR_4, VAR_5, (Datum) 0, 1, 0);
   }
   break;

  case 137:
   if (VAR_4->evtrigdata == ((void*)0))
    FUNC_21(VAR_0, "event trigger promise is not in an event trigger function");
   FUNC_19(VAR_4, VAR_5, VAR_4->evtrigdata->event);
   break;

  case 129:
   if (VAR_4->evtrigdata == ((void*)0))
    FUNC_21(VAR_0, "event trigger promise is not in an event trigger function");
   FUNC_19(VAR_4, VAR_5, VAR_4->evtrigdata->tag);
   break;

  default:
   FUNC_21(VAR_0, "unrecognized promise type: %d", VAR_5->promise);
 }

 FUNC_4(VAR_6);
}
