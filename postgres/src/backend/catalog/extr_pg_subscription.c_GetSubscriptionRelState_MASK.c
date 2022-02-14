
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 char VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int ,int*) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

char
FUNC_11(Oid VAR_8, Oid VAR_9, XLogRecPtr *VAR_10,
      bool VAR_11)
{
 Relation VAR_12;
 HeapTuple VAR_13;
 char VAR_14;
 bool VAR_15;
 Datum VAR_16;

 VAR_12 = FUNC_10(VAR_7, VAR_0);


 VAR_13 = FUNC_6(VAR_6,
        FUNC_4(VAR_9),
        FUNC_4(VAR_8));

 if (!FUNC_3(VAR_13))
 {
  if (VAR_11)
  {
   FUNC_9(VAR_12, VAR_0);
   *VAR_10 = VAR_4;
   return VAR_5;
  }

  FUNC_8(VAR_3, "subscription table %u in subscription %u does not exist",
    VAR_9, VAR_8);
 }


 VAR_16 = FUNC_7(VAR_6, VAR_13,
      VAR_2, &VAR_15);
 FUNC_0(!VAR_15);
 VAR_14 = FUNC_1(VAR_16);
 VAR_16 = FUNC_7(VAR_6, VAR_13,
      VAR_1, &VAR_15);
 if (VAR_15)
  *VAR_10 = VAR_4;
 else
  *VAR_10 = FUNC_2(VAR_16);


 FUNC_5(VAR_13);
 FUNC_9(VAR_12, VAR_0);

 return VAR_14;
}
