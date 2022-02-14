
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int nulls ;
typedef int int32 ;
typedef int TupleDesc ;
struct TYPE_5__ {char const* objectId; scalar_t__ objectSubId; int classId; } ;
typedef int Relation ;
typedef char const* Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int NameData ;
typedef int HeapTuple ;
typedef int Datum ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 () ;
 char* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int) ;
 char const* VAR_16 ;
 int FUNC_9 (int ,char const*,int ) ;
 int VAR_17 ;
 int FUNC_10 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,int ,int ,int ) ;
 int VAR_21 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,char const*,...) ;
 int FUNC_19 (int ,int *,int*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int*,int ,int) ;
 int FUNC_22 (int *,char const*) ;
 int FUNC_23 (int) ;
 int FUNC_24 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_25 (TYPE_1__*,int) ;
 int FUNC_26 (int ,char const*,char const*) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int ) ;

Oid
FUNC_29(const char *VAR_22, Oid VAR_23,
    Oid VAR_24,
    char VAR_25,
    bool VAR_26,
    int32 VAR_27,
    const char *VAR_28, const char *VAR_29,
    const char *VAR_30,
    bool VAR_31,
    bool VAR_32)
{
 Relation VAR_33;
 TupleDesc VAR_34;
 HeapTuple VAR_35;
 Datum VAR_36[VAR_19];
 bool VAR_37[VAR_19];
 NameData VAR_38,
    VAR_39,
    VAR_40;
 Oid VAR_41;
 ObjectAddress VAR_42,
    VAR_43;

 FUNC_1(VAR_22);
 FUNC_1(VAR_23);
 FUNC_1(VAR_24);
 FUNC_1(VAR_28);
 FUNC_1(VAR_29);
 if (FUNC_15(VAR_10,
         FUNC_13(VAR_22),
         FUNC_8(VAR_27),
         FUNC_11(VAR_23)))
 {
  if (VAR_32)
   return VAR_16;
  else if (VAR_31)
  {
   FUNC_16(VAR_17,
     (FUNC_17(VAR_14),
      VAR_27 == -1
      ? FUNC_18("collation \"%s\" already exists, skipping",
         VAR_22)
      : FUNC_18("collation \"%s\" for encoding \"%s\" already exists, skipping",
         VAR_22, FUNC_23(VAR_27))));
   return VAR_16;
  }
  else
   FUNC_16(VAR_15,
     (FUNC_17(VAR_14),
      VAR_27 == -1
      ? FUNC_18("collation \"%s\" already exists",
         VAR_22)
      : FUNC_18("collation \"%s\" for encoding \"%s\" already exists",
         VAR_22, FUNC_23(VAR_27))));
 }


 VAR_33 = FUNC_28(VAR_12, VAR_21);
 if ((VAR_27 == -1 &&
   FUNC_15(VAR_10,
          FUNC_13(VAR_22),
          FUNC_8(FUNC_6()),
          FUNC_11(VAR_23))) ||
  (VAR_27 != -1 &&
   FUNC_15(VAR_10,
          FUNC_13(VAR_22),
          FUNC_8(-1),
          FUNC_11(VAR_23))))
 {
  if (VAR_32)
  {
   FUNC_27(VAR_33, VAR_20);
   return VAR_16;
  }
  else if (VAR_31)
  {
   FUNC_27(VAR_33, VAR_20);
   FUNC_16(VAR_17,
     (FUNC_17(VAR_14),
      FUNC_18("collation \"%s\" already exists, skipping",
       VAR_22)));
   return VAR_16;
  }
  else
   FUNC_16(VAR_15,
     (FUNC_17(VAR_14),
      FUNC_18("collation \"%s\" already exists",
       VAR_22)));
 }

 VAR_34 = FUNC_14(VAR_33);


 FUNC_21(VAR_37, 0, sizeof(VAR_37));

 FUNC_22(&VAR_38, VAR_22);
 VAR_41 = FUNC_7(VAR_33, VAR_11,
        VAR_9);
 VAR_36[VAR_9 - 1] = FUNC_11(VAR_41);
 VAR_36[VAR_4 - 1] = FUNC_10(&VAR_38);
 VAR_36[VAR_5 - 1] = FUNC_11(VAR_23);
 VAR_36[VAR_6 - 1] = FUNC_11(VAR_24);
 VAR_36[VAR_7 - 1] = FUNC_5(VAR_25);
 VAR_36[VAR_3 - 1] = FUNC_2(VAR_26);
 VAR_36[VAR_2 - 1] = FUNC_8(VAR_27);
 FUNC_22(&VAR_39, VAR_28);
 VAR_36[VAR_0 - 1] = FUNC_10(&VAR_39);
 FUNC_22(&VAR_40, VAR_29);
 VAR_36[VAR_1 - 1] = FUNC_10(&VAR_40);
 if (VAR_30)
  VAR_36[VAR_8 - 1] = FUNC_3(VAR_30);
 else
  VAR_37[VAR_8 - 1] = 1;

 VAR_35 = FUNC_19(VAR_34, VAR_36, VAR_37);


 FUNC_4(VAR_33, VAR_35);
 FUNC_0(FUNC_12(VAR_41));


 VAR_42.classId = VAR_12;
 VAR_42.objectId = VAR_41;
 VAR_42.objectSubId = 0;


 VAR_43.classId = VAR_18;
 VAR_43.objectId = VAR_23;
 VAR_43.objectSubId = 0;
 FUNC_24(&VAR_42, &VAR_43, VAR_13);


 FUNC_26(VAR_12, VAR_41, VAR_24);


 FUNC_25(&VAR_42, 0);


 FUNC_9(VAR_12, VAR_41, 0);

 FUNC_20(VAR_35);
 FUNC_27(VAR_33, VAR_20);

 return VAR_41;
}
