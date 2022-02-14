
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_15__ {scalar_t__ contype; int convalidated; int oid; } ;
struct TYPE_14__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int List ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_constraint ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_15 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_16 ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,TYPE_1__*,int ,int*) ;
 int VAR_17 ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int VAR_18 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,char const*,int ) ;
 TYPE_1__* FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int * FUNC_20 (int *) ;
 int FUNC_21 (int ,int ,int,int *,int,int *) ;
 int FUNC_22 (int ) ;
 TYPE_1__* FUNC_23 (int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int ,char*) ;

ObjectAddress
FUNC_28(List *VAR_19, const char *VAR_20)
{
 TypeName *VAR_21;
 Oid VAR_22;
 Relation VAR_23;
 Relation VAR_24;
 HeapTuple VAR_25;
 Form_pg_constraint VAR_26;
 Form_pg_constraint VAR_27;
 char *VAR_28;
 SysScanDesc VAR_29;
 Datum VAR_30;
 bool VAR_31;
 HeapTuple VAR_32;
 HeapTuple VAR_33;
 ScanKeyData VAR_34[3];
 ObjectAddress VAR_35;


 VAR_21 = FUNC_20(VAR_19);
 VAR_22 = FUNC_26(((void*)0), VAR_21);


 VAR_23 = FUNC_25(VAR_18, VAR_0);

 VAR_25 = FUNC_9(VAR_17, FUNC_6(VAR_22));
 if (!FUNC_3(VAR_25))
  FUNC_14(VAR_12, "cache lookup failed for type %u", VAR_22);


 FUNC_13(VAR_25);




 VAR_24 = FUNC_25(VAR_8, VAR_16);

 FUNC_8(&VAR_34[0],
    VAR_3,
    VAR_5, VAR_14,
    FUNC_6(VAR_15));
 FUNC_8(&VAR_34[1],
    VAR_4,
    VAR_5, VAR_14,
    FUNC_6(VAR_22));
 FUNC_8(&VAR_34[2],
    VAR_2,
    VAR_5, VAR_13,
    FUNC_0(VAR_20));

 VAR_29 = FUNC_21(VAR_24, VAR_9, 1,
         ((void*)0), 3, VAR_34);


 if (!FUNC_3(VAR_32 = FUNC_23(VAR_29)))
  FUNC_15(VAR_12,
    (FUNC_16(VAR_10),
     FUNC_17("constraint \"%s\" of domain \"%s\" does not exist",
      VAR_20, FUNC_12(VAR_21))));

 VAR_26 = (Form_pg_constraint) FUNC_2(VAR_32);
 if (VAR_26->contype != VAR_6)
  FUNC_15(VAR_12,
    (FUNC_16(VAR_11),
     FUNC_17("constraint \"%s\" of domain \"%s\" is not a check constraint",
      VAR_20, FUNC_12(VAR_21))));

 VAR_30 = FUNC_10(VAR_7, VAR_32,
        VAR_1,
        &VAR_31);
 if (VAR_31)
  FUNC_14(VAR_12, "null conbin for constraint %u",
    VAR_26->oid);
 VAR_28 = FUNC_11(VAR_30);

 FUNC_27(VAR_22, VAR_28);




 VAR_33 = FUNC_18(VAR_32);
 VAR_27 = (Form_pg_constraint) FUNC_2(VAR_33);
 VAR_27->convalidated = 1;
 FUNC_1(VAR_24, &VAR_33->t_self, VAR_33);

 FUNC_4(VAR_8, VAR_26->oid, 0);

 FUNC_5(VAR_35, VAR_18, VAR_22);

 FUNC_19(VAR_33);

 FUNC_22(VAR_29);

 FUNC_24(VAR_23, VAR_0);
 FUNC_24(VAR_24, VAR_16);

 FUNC_7(VAR_25);

 return VAR_35;
}
