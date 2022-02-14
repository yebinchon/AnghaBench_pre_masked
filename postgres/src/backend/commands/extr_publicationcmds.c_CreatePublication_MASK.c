
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int values ;
typedef int nulls ;
struct TYPE_3__ {int for_all_tables; scalar_t__ tables; int options; int pubname; } ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int List ;
typedef int HeapTuple ;
typedef int Datum ;
typedef TYPE_1__ CreatePublicationStmt ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int * FUNC_14 (scalar_t__) ;
 int VAR_17 ;
 int FUNC_15 (int ,int *,int,int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_16 (int ) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_17 (scalar_t__,int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int*,int*) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (scalar_t__) ;
 int FUNC_26 (int*,int,int) ;
 int VAR_23 ;
 int FUNC_27 (int ,int*,int*,int*,int*,int*) ;
 scalar_t__ FUNC_28 (int ,int ,int ) ;
 int FUNC_29 (int ,int ,int ) ;
 int FUNC_30 () ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int ,int ) ;
 scalar_t__ VAR_24 ;

ObjectAddress
FUNC_33(CreatePublicationStmt *VAR_25)
{
 Relation VAR_26;
 ObjectAddress VAR_27;
 Oid VAR_28;
 bool VAR_29[VAR_15];
 Datum VAR_30[VAR_15];
 HeapTuple VAR_31;
 bool VAR_32;
 bool VAR_33;
 bool VAR_34;
 bool VAR_35;
 bool VAR_36;
 AclResult VAR_37;


 VAR_37 = FUNC_28(VAR_14, FUNC_9(), VAR_1);
 if (VAR_37 != VAR_0)
  FUNC_17(VAR_37, VAR_16,
        FUNC_22(VAR_14));


 if (VAR_25->for_all_tables && !FUNC_30())
  FUNC_18(VAR_13,
    (FUNC_19(VAR_11),
     (FUNC_21("must be superuser to create FOR ALL TABLES publication"))));

 VAR_26 = FUNC_32(VAR_19, VAR_20);


 VAR_28 = FUNC_8(VAR_17, VAR_2,
        FUNC_2(VAR_25->pubname));
 if (FUNC_13(VAR_28))
 {
  FUNC_18(VAR_13,
    (FUNC_19(VAR_10),
     FUNC_21("publication \"%s\" already exists",
      VAR_25->pubname)));
 }


 FUNC_26(VAR_30, 0, sizeof(VAR_30));
 FUNC_26(VAR_29, 0, sizeof(VAR_29));

 VAR_30[VAR_6 - 1] =
  FUNC_6(VAR_23, FUNC_2(VAR_25->pubname));
 VAR_30[VAR_7 - 1] = FUNC_12(FUNC_9());

 FUNC_27(VAR_25->options,
         &VAR_32, &VAR_33,
         &VAR_34, &VAR_35,
         &VAR_36);

 VAR_28 = FUNC_7(VAR_26, VAR_18,
        VAR_2);
 VAR_30[VAR_2 - 1] = FUNC_12(VAR_28);
 VAR_30[VAR_3 - 1] =
  FUNC_1(VAR_25->for_all_tables);
 VAR_30[VAR_5 - 1] =
  FUNC_1(VAR_33);
 VAR_30[VAR_9 - 1] =
  FUNC_1(VAR_34);
 VAR_30[VAR_4 - 1] =
  FUNC_1(VAR_35);
 VAR_30[VAR_8 - 1] =
  FUNC_1(VAR_36);

 VAR_31 = FUNC_23(FUNC_16(VAR_26), VAR_30, VAR_29);


 FUNC_3(VAR_26, VAR_31);
 FUNC_24(VAR_31);

 FUNC_29(VAR_19, VAR_28, FUNC_9());

 FUNC_11(VAR_27, VAR_19, VAR_28);


 FUNC_5();

 if (VAR_25->tables)
 {
  List *VAR_38;

  FUNC_0(FUNC_25(VAR_25->tables) > 0);

  VAR_38 = FUNC_14(VAR_25->tables);
  FUNC_15(VAR_28, VAR_38, 1, ((void*)0));
  FUNC_4(VAR_38);
 }

 FUNC_31(VAR_26, VAR_20);

 FUNC_10(VAR_19, VAR_28, 0);

 if (VAR_24 != VAR_21)
 {
  FUNC_18(VAR_22,
    (FUNC_19(VAR_12),
     FUNC_21("wal_level is insufficient to publish logical changes"),
     FUNC_20("Set wal_level to logical before creating subscriptions.")));
 }

 return VAR_27;
}
