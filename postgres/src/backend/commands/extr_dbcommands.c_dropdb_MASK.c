
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int*,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_11 ;
 int FUNC_11 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (scalar_t__,int*,int*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int) ;
 int VAR_16 ;
 TYPE_1__* FUNC_17 (int ,int ) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (int ,int ,char const*) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int ,char*,scalar_t__) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int,int) ;
 int FUNC_25 (char*,char*,int,int) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 (char const*,int ,scalar_t__*,int *,int *,int*,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_28 (scalar_t__,int ) ;
 int FUNC_29 (scalar_t__) ;
 int FUNC_30 (scalar_t__) ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int ,int ) ;

void
FUNC_33(const char *VAR_17, bool VAR_18, bool VAR_19)
{
 Oid VAR_20;
 bool VAR_21;
 Relation VAR_22;
 HeapTuple VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26,
    VAR_27;
 int VAR_28;
 VAR_22 = FUNC_32(VAR_6, VAR_16);

 if (!FUNC_27(VAR_17, VAR_1, &VAR_20, ((void*)0), ((void*)0),
      &VAR_21, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
 {
  if (!VAR_18)
  {
   FUNC_22(VAR_10,
     (FUNC_23(VAR_8),
      FUNC_26("database \"%s\" does not exist", VAR_17)));
  }
  else
  {

   FUNC_31(VAR_22, VAR_16);
   FUNC_22(VAR_13,
     (FUNC_26("database \"%s\" does not exist, skipping",
       VAR_17)));
   return;
  }
 }




 if (!FUNC_28(VAR_20, FUNC_9()))
  FUNC_19(VAR_0, VAR_15,
        VAR_17);


 FUNC_11(VAR_6, VAR_20, 0);






 if (VAR_21)
  FUNC_22(VAR_10,
    (FUNC_23(VAR_9),
     FUNC_26("cannot drop a template database")));


 if (VAR_20 == VAR_12)
  FUNC_22(VAR_10,
    (FUNC_23(VAR_7),
     FUNC_26("cannot drop the currently open database")));







 (void) FUNC_14(VAR_20, &VAR_26, &VAR_27);
 if (VAR_27)
 {
  FUNC_22(VAR_10,
    (FUNC_23(VAR_7),
     FUNC_26("database \"%s\" is used by an active logical replication slot",
      VAR_17),
     FUNC_25("There is %d active slot.",
          "There are %d active slots.",
          VAR_27, VAR_27)));
 }







 if ((VAR_28 = FUNC_1(VAR_20)) > 0)
  FUNC_22(VAR_10,
    (FUNC_23(VAR_7),
     FUNC_26("database \"%s\" is being used by logical replication subscription",
      VAR_17),
     FUNC_25("There is %d subscription.",
          "There are %d subscriptions.",
          VAR_28, VAR_28)));






 if (VAR_19)
  FUNC_18(VAR_20);







 if (FUNC_2(VAR_20, &VAR_24, &VAR_25))
  FUNC_22(VAR_10,
    (FUNC_23(VAR_7),
     FUNC_26("database \"%s\" is being accessed by other users",
      VAR_17),
     FUNC_24(VAR_24, VAR_25)));




 VAR_23 = FUNC_17(VAR_5, FUNC_12(VAR_20));
 if (!FUNC_10(VAR_23))
  FUNC_21(VAR_10, "cache lookup failed for database %u", VAR_20);

 FUNC_0(VAR_22, &VAR_23->t_self);

 FUNC_13(VAR_23);




 FUNC_3(VAR_20, VAR_6);
 FUNC_4(VAR_20, VAR_6);




 FUNC_6(VAR_20, VAR_11);




 FUNC_20(VAR_20);




 FUNC_15(VAR_20);






 FUNC_5(VAR_20);




 FUNC_29(VAR_20);







 FUNC_8(VAR_20);







 FUNC_16(VAR_3 | VAR_2 | VAR_4);




 FUNC_30(VAR_20);




 FUNC_31(VAR_22, VAR_14);







 FUNC_7();
}
