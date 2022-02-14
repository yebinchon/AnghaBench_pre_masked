
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int * FUNC_3 (int) ;

ArrayType *
FUNC_4(ArrayType *VAR_0)
{
 ArrayType *VAR_1;
 int VAR_2 = FUNC_0(VAR_0);

 VAR_1 = FUNC_3(VAR_2);
 FUNC_2(FUNC_1(VAR_1), FUNC_1(VAR_0), VAR_2 * sizeof(int32));
 return VAR_1;
}
