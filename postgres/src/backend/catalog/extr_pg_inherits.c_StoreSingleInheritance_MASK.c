
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nulls ;
typedef int int32 ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(Oid VAR_6, Oid VAR_7, int32 VAR_8)
{
 Datum VAR_9[VAR_4];
 bool VAR_10[VAR_4];
 HeapTuple VAR_11;
 Relation VAR_12;

 VAR_12 = FUNC_8(VAR_3, VAR_5);




 VAR_9[VAR_1 - 1] = FUNC_2(VAR_6);
 VAR_9[VAR_0 - 1] = FUNC_2(VAR_7);
 VAR_9[VAR_2 - 1] = FUNC_1(VAR_8);

 FUNC_6(VAR_10, 0, sizeof(VAR_10));

 VAR_11 = FUNC_4(FUNC_3(VAR_12), VAR_9, VAR_10);

 FUNC_0(VAR_12, VAR_11);

 FUNC_5(VAR_11);

 FUNC_7(VAR_12, VAR_5);
}
