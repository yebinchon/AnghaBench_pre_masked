
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_8__ {int tg_event; TYPE_5__* tg_relation; TYPE_1__* tg_trigger; int tg_newtuple; int tg_trigtuple; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_10__ {int rd_id; int rd_att; } ;
struct TYPE_9__ {scalar_t__ context; } ;
struct TYPE_7__ {char* tgname; int tgnargs; char** tgargs; } ;
typedef int SV ;
typedef int HV ;
typedef TYPE_3__* FunctionCallInfo ;
typedef int AV ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (TYPE_5__*) ;
 char* FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int *) ;
 int * FUNC_16 (char*) ;
 int VAR_0 ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,char*,int *) ;
 int * FUNC_19 () ;
 int * FUNC_20 () ;
 int * FUNC_21 (int *) ;
 int * FUNC_22 (int) ;
 int VAR_1 ;
 int * FUNC_23 (int ,int ,int) ;

__attribute__((used)) static SV *
FUNC_24(FunctionCallInfo VAR_2)
{
 VAR_0;
 TriggerData *VAR_3;
 TupleDesc VAR_4;
 int VAR_5;
 char *VAR_6;
 char *VAR_7;
 char *VAR_8;
 char *VAR_9;
 HV *VAR_10;

 VAR_10 = FUNC_20();
 FUNC_17(VAR_10, 12);

 VAR_3 = (TriggerData *) VAR_2->context;
 VAR_4 = VAR_3->tg_relation->rd_att;

 VAR_8 = FUNC_0(
       FUNC_1(VAR_1,
            FUNC_2(VAR_3->tg_relation->rd_id)
            )
  );

 FUNC_18(VAR_10, "name", FUNC_16(VAR_3->tg_trigger->tgname));
 FUNC_18(VAR_10, "relid", FUNC_16(VAR_8));






 if (FUNC_8(VAR_3->tg_event))
 {
  VAR_7 = "INSERT";
  if (FUNC_11(VAR_3->tg_event))
   FUNC_18(VAR_10, "new",
       FUNC_23(VAR_3->tg_trigtuple,
               VAR_4,
               !FUNC_6(VAR_3->tg_event)));
 }
 else if (FUNC_7(VAR_3->tg_event))
 {
  VAR_7 = "DELETE";
  if (FUNC_11(VAR_3->tg_event))
   FUNC_18(VAR_10, "old",
       FUNC_23(VAR_3->tg_trigtuple,
               VAR_4,
               1));
 }
 else if (FUNC_10(VAR_3->tg_event))
 {
  VAR_7 = "UPDATE";
  if (FUNC_11(VAR_3->tg_event))
  {
   FUNC_18(VAR_10, "old",
       FUNC_23(VAR_3->tg_trigtuple,
               VAR_4,
               1));
   FUNC_18(VAR_10, "new",
       FUNC_23(VAR_3->tg_newtuple,
               VAR_4,
               !FUNC_6(VAR_3->tg_event)));
  }
 }
 else if (FUNC_9(VAR_3->tg_event))
  VAR_7 = "TRUNCATE";
 else
  VAR_7 = "UNKNOWN";

 FUNC_18(VAR_10, "event", FUNC_16(VAR_7));
 FUNC_18(VAR_10, "argc", FUNC_22(VAR_3->tg_trigger->tgnargs));

 if (VAR_3->tg_trigger->tgnargs > 0)
 {
  AV *VAR_11 = FUNC_19();

  FUNC_14(VAR_11, VAR_3->tg_trigger->tgnargs);
  for (VAR_5 = 0; VAR_5 < VAR_3->tg_trigger->tgnargs; VAR_5++)
   FUNC_15(VAR_11, FUNC_16(VAR_3->tg_trigger->tgargs[VAR_5]));
  FUNC_18(VAR_10, "args", FUNC_21((SV *) VAR_11));
 }

 FUNC_18(VAR_10, "relname",
     FUNC_16(FUNC_4(VAR_3->tg_relation)));

 FUNC_18(VAR_10, "table_name",
     FUNC_16(FUNC_4(VAR_3->tg_relation)));

 FUNC_18(VAR_10, "table_schema",
     FUNC_16(FUNC_3(VAR_3->tg_relation)));

 if (FUNC_6(VAR_3->tg_event))
  VAR_9 = "BEFORE";
 else if (FUNC_5(VAR_3->tg_event))
  VAR_9 = "AFTER";
 else if (FUNC_13(VAR_3->tg_event))
  VAR_9 = "INSTEAD OF";
 else
  VAR_9 = "UNKNOWN";
 FUNC_18(VAR_10, "when", FUNC_16(VAR_9));

 if (FUNC_11(VAR_3->tg_event))
  VAR_6 = "ROW";
 else if (FUNC_12(VAR_3->tg_event))
  VAR_6 = "STATEMENT";
 else
  VAR_6 = "UNKNOWN";
 FUNC_18(VAR_10, "level", FUNC_16(VAR_6));

 return FUNC_21((SV *) VAR_10);
}
