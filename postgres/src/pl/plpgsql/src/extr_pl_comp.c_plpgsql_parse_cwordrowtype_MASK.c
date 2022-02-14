
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RangeVar ;
typedef int PLpgSQL_type ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;

PLpgSQL_type *
FUNC_10(List *VAR_3)
{
 Oid VAR_4;
 RangeVar *VAR_5;
 MemoryContext VAR_6;





 if (FUNC_4(VAR_3) != 2)
  return ((void*)0);


 VAR_6 = FUNC_0(VAR_2);


 VAR_5 = FUNC_6(FUNC_9(FUNC_3(VAR_3)),
        FUNC_9(FUNC_5(VAR_3)),
        -1);
 VAR_4 = FUNC_1(VAR_5, VAR_1, 0);

 FUNC_0(VAR_6);


 return FUNC_8(FUNC_2(VAR_4), -1, VAR_0,
          FUNC_7(VAR_3));
}
