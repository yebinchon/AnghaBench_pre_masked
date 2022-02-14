
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int name; } ;
typedef TYPE_1__ VariableShowStmt ;
typedef int TimeLineHistoryCmd ;
struct TYPE_12__ {scalar_t__ state; } ;
struct TYPE_11__ {int type; } ;
struct TYPE_10__ {int kind; } ;
typedef TYPE_2__ StartReplicationCmd ;
typedef TYPE_3__ Node ;
typedef int MemoryContext ;
typedef int DropReplicationSlotCmd ;
typedef int DestReceiver ;
typedef int CreateReplicationSlotCmd ;
typedef int BaseBackupCmd ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int VAR_8 ;
 int FUNC_9 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_9 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_10 ;
 TYPE_7__* VAR_11 ;
 int FUNC_14 (int,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 () ;
 scalar_t__ VAR_16 ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (int ,char*,int) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (char*,...) ;
 int FUNC_26 (char*,int) ;
 scalar_t__ VAR_17 ;
 int FUNC_27 (int *) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_28 (int ,int *) ;
 TYPE_3__* VAR_20 ;
 int FUNC_29 (char const*) ;
 int FUNC_30 () ;
 int VAR_21 ;
 int VAR_22 ;

bool
FUNC_31(const char *VAR_23)
{
 int VAR_24;
 Node *VAR_25;
 MemoryContext VAR_26;
 MemoryContext VAR_27;





 if (VAR_17)
  FUNC_21(VAR_16);






 if (VAR_11->state == VAR_16)
  FUNC_23(VAR_7,
    (FUNC_25("cannot execute new commands while WAL sender is in stopping mode")));





 FUNC_17();

 FUNC_1();

 VAR_26 = FUNC_0(VAR_1,
          "Replication command context",
          VAR_0);
 VAR_27 = FUNC_13(VAR_26);

 FUNC_29(VAR_23);
 VAR_24 = FUNC_30();
 if (VAR_24 != 0)
  FUNC_23(VAR_7,
    (FUNC_24(VAR_6),
     (FUNC_26("replication command parser returned %d",
          VAR_24))));

 VAR_25 = VAR_20;







 if (VAR_25->type != 131)
  FUNC_23(VAR_18 ? VAR_9 : VAR_2,
    (FUNC_25("received replication command: %s", VAR_23)));





 if (!FUNC_11())
  FUNC_17();





 if (FUNC_10() && !FUNC_9(VAR_25, VAR_13))
  FUNC_23(VAR_7,
    (FUNC_24(VAR_5),
     FUNC_25("current transaction is aborted, "
      "commands ignored until end of transaction block")));

 FUNC_1();





 FUNC_27(&VAR_19);
 FUNC_27(&VAR_21);
 FUNC_27(&VAR_22);


 FUNC_28(VAR_15, ((void*)0));

 switch (VAR_25->type)
 {
  case 132:
   FUNC_8();
   break;

  case 135:
   FUNC_14(1, "BASE_BACKUP");
   FUNC_15((BaseBackupCmd *) VAR_25);
   break;

  case 134:
   FUNC_4((CreateReplicationSlotCmd *) VAR_25);
   break;

  case 133:
   FUNC_5((DropReplicationSlotCmd *) VAR_25);
   break;

  case 130:
   {
    StartReplicationCmd *VAR_28 = (StartReplicationCmd *) VAR_25;

    FUNC_14(1, "START_REPLICATION");

    if (VAR_28->kind == VAR_12)
     FUNC_19(VAR_28);
    else
     FUNC_18(VAR_28);
    break;
   }

  case 129:
   FUNC_14(1, "TIMELINE_HISTORY");
   FUNC_16((TimeLineHistoryCmd *) VAR_25);
   break;

  case 128:
   {
    DestReceiver *VAR_29 = FUNC_3(VAR_4);
    VariableShowStmt *VAR_30 = (VariableShowStmt *) VAR_25;


    FUNC_20();
    FUNC_7(VAR_30->name, VAR_29);
    FUNC_2();
   }
   break;

  case 131:
   if (VAR_10 == VAR_8)
    FUNC_23(VAR_7,
      (FUNC_25("cannot execute SQL commands in WAL sender for physical replication")));


   FUNC_28(VAR_14, ((void*)0));


   return 0;

  default:
   FUNC_22(VAR_7, "unrecognized replication command node tag: %u",
     VAR_25->type);
 }


 FUNC_13(VAR_27);
 FUNC_12(VAR_26);


 FUNC_6("SELECT", VAR_3);


 FUNC_28(VAR_14, ((void*)0));

 return 1;
}
