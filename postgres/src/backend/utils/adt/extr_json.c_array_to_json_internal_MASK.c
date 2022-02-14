
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int StringInfo ;
typedef int Oid ;
typedef int JsonTypeCategory ;
typedef int Datum ;
typedef int ArrayType ;


 int* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int*) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int,int*,int*,int*,int*,int ,int ,int) ;
 int FUNC_7 (int *,int ,int ,int,char,int**,int**,int*) ;
 int FUNC_8 (int ,int *,int*,char*) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int*) ;

__attribute__((used)) static void
FUNC_11(Datum VAR_0, StringInfo VAR_1, bool VAR_2)
{
 ArrayType *VAR_3 = FUNC_4(VAR_0);
 Oid VAR_4 = FUNC_1(VAR_3);
 int *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 Datum *VAR_9;
 bool *VAR_10;
 int16 VAR_11;
 bool VAR_12;
 char VAR_13;
 JsonTypeCategory VAR_14;
 Oid VAR_15;

 VAR_6 = FUNC_2(VAR_3);
 VAR_5 = FUNC_0(VAR_3);
 VAR_7 = FUNC_3(VAR_6, VAR_5);

 if (VAR_7 <= 0)
 {
  FUNC_5(VAR_1, "[]");
  return;
 }

 FUNC_8(VAR_4,
       &VAR_11, &VAR_12, &VAR_13);

 FUNC_9(VAR_4,
       &VAR_14, &VAR_15);

 FUNC_7(VAR_3, VAR_4, VAR_11, VAR_12,
       VAR_13, &VAR_9, &VAR_10,
       &VAR_7);

 FUNC_6(VAR_1, 0, VAR_6, VAR_5, VAR_9, VAR_10, &VAR_8, VAR_14,
       VAR_15, VAR_2);

 FUNC_10(VAR_9);
 FUNC_10(VAR_10);
}
