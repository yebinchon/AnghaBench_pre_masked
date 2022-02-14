
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int values ;
typedef int replaces ;
typedef int nulls ;
struct TYPE_15__ {int collname; } ;
struct TYPE_14__ {int collcollate; int collprovider; } ;
struct TYPE_13__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_collation ;
typedef int Datum ;
typedef TYPE_3__ AlterCollationStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_9 ;
 TYPE_1__* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,TYPE_1__*,int,int*) ;
 char* FUNC_13 (int) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (char*,...) ;
 char* FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (TYPE_1__*) ;
 TYPE_1__* FUNC_21 (TYPE_1__*,int ,int*,int*,int*) ;
 int FUNC_22 (int*,int,int) ;
 int FUNC_23 (int ,int ) ;
 scalar_t__ FUNC_24 (char*,char*) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int ) ;

ObjectAddress
FUNC_27(AlterCollationStmt *VAR_10)
{
 Relation VAR_11;
 Oid VAR_12;
 HeapTuple VAR_13;
 Form_pg_collation VAR_14;
 Datum VAR_15;
 bool VAR_16;
 char *VAR_17;
 char *VAR_18;
 ObjectAddress VAR_19;

 VAR_11 = FUNC_26(VAR_3, VAR_9);
 VAR_12 = FUNC_19(VAR_10->collname, 0);

 if (!FUNC_23(VAR_12, FUNC_3()))
  FUNC_14(VAR_0, VAR_8,
        FUNC_6(VAR_10->collname));

 VAR_13 = FUNC_11(VAR_2, FUNC_9(VAR_12));
 if (!FUNC_4(VAR_13))
  FUNC_15(VAR_4, "cache lookup failed for collation %u", VAR_12);

 VAR_14 = (Form_pg_collation) FUNC_2(VAR_13);
 VAR_15 = FUNC_12(VAR_2, VAR_13, VAR_1,
          &VAR_16);
 VAR_17 = VAR_16 ? ((void*)0) : FUNC_13(VAR_15);

 VAR_18 = FUNC_18(VAR_14->collprovider, FUNC_7(VAR_14->collcollate));


 if ((!VAR_17 && VAR_18) || (VAR_17 && !VAR_18))
  FUNC_15(VAR_4, "invalid collation version change");
 else if (VAR_17 && VAR_18 && FUNC_24(VAR_18, VAR_17) != 0)
 {
  bool VAR_20[VAR_6];
  bool VAR_21[VAR_6];
  Datum VAR_22[VAR_6];

  FUNC_16(VAR_5,
    (FUNC_17("changing version from %s to %s",
      VAR_17, VAR_18)));

  FUNC_22(VAR_22, 0, sizeof(VAR_22));
  FUNC_22(VAR_20, 0, sizeof(VAR_20));
  FUNC_22(VAR_21, 0, sizeof(VAR_21));

  VAR_22[VAR_1 - 1] = FUNC_0(VAR_18);
  VAR_21[VAR_1 - 1] = 1;

  VAR_13 = FUNC_21(VAR_13, FUNC_10(VAR_11),
        VAR_22, VAR_20, VAR_21);
 }
 else
  FUNC_16(VAR_5,
    (FUNC_17("version has not changed")));

 FUNC_1(VAR_11, &VAR_13->t_self, VAR_13);

 FUNC_5(VAR_3, VAR_12, 0);

 FUNC_8(VAR_19, VAR_3, VAR_12);

 FUNC_20(VAR_13);
 FUNC_25(VAR_11, VAR_7);

 return VAR_19;
}
