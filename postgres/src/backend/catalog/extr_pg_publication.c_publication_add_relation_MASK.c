
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int values ;
typedef int nulls ;
struct TYPE_3__ {int name; } ;
typedef int Relation ;
typedef TYPE_1__ Publication ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,int ) ;
 int FUNC_14 (int ,int*,int*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int*,int,int) ;
 int FUNC_17 (int *,int *,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;

ObjectAddress
FUNC_20(Oid VAR_14, Relation VAR_15,
       bool VAR_16)
{
 Relation VAR_17;
 HeapTuple VAR_18;
 Datum VAR_19[VAR_7];
 bool VAR_20[VAR_7];
 Oid VAR_21 = FUNC_8(VAR_15);
 Oid VAR_22;
 Publication *VAR_23 = FUNC_3(VAR_14);
 ObjectAddress VAR_24,
    VAR_25;

 VAR_17 = FUNC_19(VAR_10, VAR_13);






 if (FUNC_9(VAR_8, FUNC_5(VAR_21),
         FUNC_5(VAR_14)))
 {
  FUNC_18(VAR_17, VAR_13);

  if (VAR_16)
   return VAR_6;

  FUNC_11(VAR_5,
    (FUNC_12(VAR_4),
     FUNC_13("relation \"%s\" is already member of publication \"%s\"",
      FUNC_7(VAR_15), VAR_23->name)));
 }

 FUNC_10(VAR_15);


 FUNC_16(VAR_19, 0, sizeof(VAR_19));
 FUNC_16(VAR_20, 0, sizeof(VAR_20));

 VAR_22 = FUNC_2(VAR_17, VAR_9,
         VAR_0);
 VAR_19[VAR_0 - 1] = FUNC_5(VAR_22);
 VAR_19[VAR_1 - 1] =
  FUNC_5(VAR_14);
 VAR_19[VAR_2 - 1] =
  FUNC_5(VAR_21);

 VAR_18 = FUNC_14(FUNC_6(VAR_17), VAR_19, VAR_20);


 FUNC_1(VAR_17, VAR_18);
 FUNC_15(VAR_18);

 FUNC_4(VAR_24, VAR_10, VAR_22);


 FUNC_4(VAR_25, VAR_11, VAR_14);
 FUNC_17(&VAR_24, &VAR_25, VAR_3);


 FUNC_4(VAR_25, VAR_12, VAR_21);
 FUNC_17(&VAR_24, &VAR_25, VAR_3);


 FUNC_18(VAR_17, VAR_13);


 FUNC_0(VAR_15);

 return VAR_24;
}
