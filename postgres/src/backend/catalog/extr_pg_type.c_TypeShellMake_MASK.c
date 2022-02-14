
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
typedef int TupleDesc ;
struct TYPE_6__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int NameData ;
typedef int HeapTuple ;
typedef int Form_pg_type ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (char) ;
 char VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int *,int ,int,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_36 ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ VAR_37 ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_38 ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char const*) ;
 int VAR_39 ;
 char VAR_40 ;
 char VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,scalar_t__*,int*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *,char const*) ;
 int FUNC_22 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_23 (int ,int ) ;

ObjectAddress
FUNC_24(const char *VAR_45, Oid VAR_46, Oid VAR_47)
{
 Relation VAR_48;
 TupleDesc VAR_49;
 int VAR_50;
 HeapTuple VAR_51;
 Datum VAR_52[VAR_38];
 bool VAR_53[VAR_38];
 Oid VAR_54;
 NameData VAR_55;
 ObjectAddress VAR_56;

 FUNC_0(FUNC_15(VAR_45));




 VAR_48 = FUNC_23(VAR_43, VAR_39);
 VAR_49 = VAR_48->rd_att;




 for (VAR_50 = 0; VAR_50 < VAR_38; ++VAR_50)
 {
  VAR_53[VAR_50] = 0;
  VAR_52[VAR_50] = (Datum) ((void*)0);
 }
 FUNC_21(&VAR_55, VAR_45);
 VAR_52[VAR_19 - 1] = FUNC_11(&VAR_55);
 VAR_52[VAR_20 - 1] = FUNC_13(VAR_46);
 VAR_52[VAR_24 - 1] = FUNC_13(VAR_47);
 VAR_52[VAR_16 - 1] = FUNC_7(sizeof(int32));
 VAR_52[VAR_6 - 1] = FUNC_1(1);
 VAR_52[VAR_29 - 1] = FUNC_3(VAR_41);
 VAR_52[VAR_7 - 1] = FUNC_3(VAR_40);
 VAR_52[VAR_15 - 1] = FUNC_1(0);
 VAR_52[VAR_14 - 1] = FUNC_1(0);
 VAR_52[VAR_11 - 1] = FUNC_3(VAR_31);
 VAR_52[VAR_26 - 1] = FUNC_13(VAR_36);
 VAR_52[VAR_12 - 1] = FUNC_13(VAR_36);
 VAR_52[VAR_4 - 1] = FUNC_13(VAR_36);
 VAR_52[VAR_13 - 1] = FUNC_13(VAR_34);
 VAR_52[VAR_23 - 1] = FUNC_13(VAR_35);
 VAR_52[VAR_25 - 1] = FUNC_13(VAR_36);
 VAR_52[VAR_27 - 1] = FUNC_13(VAR_36);
 VAR_52[VAR_17 - 1] = FUNC_13(VAR_36);
 VAR_52[VAR_18 - 1] = FUNC_13(VAR_36);
 VAR_52[VAR_3 - 1] = FUNC_13(VAR_36);
 VAR_52[VAR_2 - 1] = FUNC_3('i');
 VAR_52[VAR_28 - 1] = FUNC_3('p');
 VAR_52[VAR_22 - 1] = FUNC_1(0);
 VAR_52[VAR_5 - 1] = FUNC_13(VAR_36);
 VAR_52[VAR_30 - 1] = FUNC_8(-1);
 VAR_52[VAR_21 - 1] = FUNC_8(0);
 VAR_52[VAR_8 - 1] = FUNC_13(VAR_36);
 VAR_53[VAR_10 - 1] = 1;
 VAR_53[VAR_9 - 1] = 1;
 VAR_53[VAR_1 - 1] = 1;


 if (VAR_37)
 {
  if (!FUNC_14(VAR_44))
   FUNC_16(VAR_33,
     (FUNC_17(VAR_32),
      FUNC_18("pg_type OID value not set when in binary upgrade mode")));

  VAR_54 = VAR_44;
  VAR_44 = VAR_36;
 }
 else
 {
  VAR_54 = FUNC_6(VAR_48, VAR_42,
         VAR_0);
 }

 VAR_52[VAR_0 - 1] = FUNC_13(VAR_54);




 VAR_51 = FUNC_19(VAR_49, VAR_52, VAR_53);




 FUNC_2(VAR_48, VAR_51);




 if (!FUNC_10())
  FUNC_5(VAR_54,
         (Form_pg_type) FUNC_4(VAR_51),
         ((void*)0),
         ((void*)0),
         0,
         0,
         0,
         0);


 FUNC_9(VAR_43, VAR_54, 0);

 FUNC_12(VAR_56, VAR_43, VAR_54);




 FUNC_20(VAR_51);
 FUNC_22(VAR_48, VAR_39);

 return VAR_56;
}
