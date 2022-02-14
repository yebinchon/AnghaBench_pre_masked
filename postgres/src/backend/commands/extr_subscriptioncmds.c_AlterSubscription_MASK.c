
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int values ;
typedef int replaces ;
typedef int nulls ;
struct TYPE_18__ {char* subname; int kind; char* conninfo; int options; int publication; } ;
struct TYPE_17__ {int oid; } ;
struct TYPE_16__ {int t_self; } ;
struct TYPE_15__ {int enabled; int publications; int slotname; } ;
typedef TYPE_1__ Subscription ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_subscription ;
typedef int Datum ;
typedef TYPE_4__ AlterSubscriptionStmt ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *,TYPE_2__*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 TYPE_1__* FUNC_9 (int ,int) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_2__* FUNC_16 (int ,int ,int ) ;
 int VAR_15 ;
 int FUNC_17 (int ,int ,char*) ;
 int FUNC_18 (int ,char*,int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (TYPE_2__*) ;
 TYPE_2__* FUNC_24 (TYPE_2__*,int ,int*,int*,int*) ;
 int FUNC_25 (char*,int) ;
 int FUNC_26 (int*,int,int) ;
 int VAR_16 ;
 int FUNC_27 (int ,int *,int*,int*,int *,int*,char**,int*,char**,int*) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (char*) ;

ObjectAddress
FUNC_33(AlterSubscriptionStmt *VAR_17)
{
 Relation VAR_18;
 ObjectAddress VAR_19;
 bool VAR_20[VAR_11];
 bool VAR_21[VAR_11];
 Datum VAR_22[VAR_11];
 HeapTuple VAR_23;
 Oid VAR_24;
 bool VAR_25 = 0;
 Subscription *VAR_26;
 Form_pg_subscription VAR_27;

 VAR_18 = FUNC_31(VAR_15, VAR_13);


 VAR_23 = FUNC_16(VAR_14, VAR_10,
         FUNC_4(VAR_17->subname));

 if (!FUNC_11(VAR_23))
  FUNC_19(VAR_9,
    (FUNC_20(VAR_8),
     FUNC_22("subscription \"%s\" does not exist",
      VAR_17->subname)));

 VAR_27 = (Form_pg_subscription) FUNC_8(VAR_23);
 VAR_24 = VAR_27->oid;


 if (!FUNC_28(VAR_24, FUNC_10()))
  FUNC_17(VAR_0, VAR_12,
        VAR_17->subname);

 VAR_26 = FUNC_9(VAR_24, 0);


 FUNC_13(VAR_15, VAR_24, 0, VAR_1);


 FUNC_26(VAR_22, 0, sizeof(VAR_22));
 FUNC_26(VAR_20, 0, sizeof(VAR_20));
 FUNC_26(VAR_21, 0, sizeof(VAR_21));

 switch (VAR_17->kind)
 {
  case 130:
   {
    char *VAR_28;
    bool VAR_29;
    char *VAR_30;

    FUNC_27(VAR_17->options, ((void*)0), ((void*)0), ((void*)0),
             ((void*)0), &VAR_29, &VAR_28,
             ((void*)0), &VAR_30, ((void*)0));

    if (VAR_29)
    {
     if (VAR_26->enabled && !VAR_28)
      FUNC_19(VAR_9,
        (FUNC_20(VAR_7),
         FUNC_22("cannot set %s for enabled subscription",
          "slot_name = NONE")));

     if (VAR_28)
      VAR_22[VAR_5 - 1] =
       FUNC_7(VAR_16, FUNC_4(VAR_28));
     else
      VAR_20[VAR_5 - 1] = 1;
     VAR_21[VAR_5 - 1] = 1;
    }

    if (VAR_30)
    {
     VAR_22[VAR_6 - 1] =
      FUNC_5(VAR_30);
     VAR_21[VAR_6 - 1] = 1;
    }

    VAR_25 = 1;
    break;
   }

  case 131:
   {
    bool VAR_31,
       VAR_32;

    FUNC_27(VAR_17->options, ((void*)0),
             &VAR_32, &VAR_31, ((void*)0),
             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_2(VAR_32);

    if (!VAR_26->slotname && VAR_31)
     FUNC_19(VAR_9,
       (FUNC_20(VAR_7),
        FUNC_22("cannot enable subscription that does not have a slot name")));

    VAR_22[VAR_3 - 1] =
     FUNC_3(VAR_31);
    VAR_21[VAR_3 - 1] = 1;

    if (VAR_31)
     FUNC_1();

    VAR_25 = 1;
    break;
   }

  case 132:

   FUNC_25("libpqwalreceiver", 0);

   FUNC_32(VAR_17->conninfo);

   VAR_22[VAR_2 - 1] =
    FUNC_5(VAR_17->conninfo);
   VAR_21[VAR_2 - 1] = 1;
   VAR_25 = 1;
   break;

  case 129:
   {
    bool VAR_33;
    bool VAR_34;

    FUNC_27(VAR_17->options, ((void*)0), ((void*)0), ((void*)0),
             ((void*)0), ((void*)0), ((void*)0), &VAR_33,
             ((void*)0), &VAR_34);

    VAR_22[VAR_4 - 1] =
     FUNC_29(VAR_17->publication);
    VAR_21[VAR_4 - 1] = 1;

    VAR_25 = 1;


    if (VAR_34)
    {
     if (!VAR_26->enabled)
      FUNC_19(VAR_9,
        (FUNC_20(VAR_7),
         FUNC_22("ALTER SUBSCRIPTION with refresh is not allowed for disabled subscriptions"),
         FUNC_21("Use ALTER SUBSCRIPTION ... SET PUBLICATION ... WITH (refresh = false).")));


     VAR_26->publications = VAR_17->publication;

     FUNC_0(VAR_26, VAR_33);
    }

    break;
   }

  case 128:
   {
    bool VAR_35;

    if (!VAR_26->enabled)
     FUNC_19(VAR_9,
       (FUNC_20(VAR_7),
        FUNC_22("ALTER SUBSCRIPTION ... REFRESH is not allowed for disabled subscriptions")));

    FUNC_27(VAR_17->options, ((void*)0), ((void*)0), ((void*)0),
             ((void*)0), ((void*)0), ((void*)0), &VAR_35,
             ((void*)0), ((void*)0));

    FUNC_0(VAR_26, VAR_35);

    break;
   }

  default:
   FUNC_18(VAR_9, "unrecognized ALTER SUBSCRIPTION kind %d",
     VAR_17->kind);
 }


 if (VAR_25)
 {
  VAR_23 = FUNC_24(VAR_23, FUNC_15(VAR_18), VAR_22, VAR_20,
        VAR_21);

  FUNC_6(VAR_18, &VAR_23->t_self, VAR_23);

  FUNC_23(VAR_23);
 }

 FUNC_30(VAR_18, VAR_13);

 FUNC_14(VAR_19, VAR_15, VAR_24);

 FUNC_12(VAR_15, VAR_24, 0);

 return VAR_19;
}
