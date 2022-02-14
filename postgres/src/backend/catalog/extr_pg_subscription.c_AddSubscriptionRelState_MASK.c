
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int nulls ;
typedef scalar_t__ XLogRecPtr ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int FUNC_9 (int ,int*,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int*,int,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

void
FUNC_14(Oid VAR_13, Oid VAR_14, char VAR_15,
      XLogRecPtr VAR_16)
{
 Relation VAR_17;
 HeapTuple VAR_18;
 bool VAR_19[VAR_7];
 Datum VAR_20[VAR_7];

 FUNC_4(VAR_12, VAR_13, 0, VAR_0);

 VAR_17 = FUNC_13(VAR_11, VAR_9);


 VAR_18 = FUNC_7(VAR_10,
         FUNC_5(VAR_14),
         FUNC_5(VAR_13));
 if (FUNC_2(VAR_18))
  FUNC_8(VAR_5, "subscription table %u in subscription %u already exists",
    VAR_14, VAR_13);


 FUNC_11(VAR_20, 0, sizeof(VAR_20));
 FUNC_11(VAR_19, 0, sizeof(VAR_19));
 VAR_20[VAR_2 - 1] = FUNC_5(VAR_13);
 VAR_20[VAR_1 - 1] = FUNC_5(VAR_14);
 VAR_20[VAR_4 - 1] = FUNC_1(VAR_15);
 if (VAR_16 != VAR_6)
  VAR_20[VAR_3 - 1] = FUNC_3(VAR_16);
 else
  VAR_19[VAR_3 - 1] = 1;

 VAR_18 = FUNC_9(FUNC_6(VAR_17), VAR_20, VAR_19);


 FUNC_0(VAR_17, VAR_18);

 FUNC_10(VAR_18);


 FUNC_12(VAR_17, VAR_8);
}
