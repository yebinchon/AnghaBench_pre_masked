
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int*,int) ;
 int * FUNC_4 (int) ;

ArrayType *
FUNC_5(ArrayType *VAR_0, int32 VAR_1)
{
 ArrayType *VAR_2;
 int32 *VAR_3;
 int32 VAR_4;

 FUNC_2(VAR_0);
 VAR_4 = FUNC_0(VAR_0);
 VAR_2 = FUNC_4(VAR_4 + 1);
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_4 > 0)
  FUNC_3(VAR_3, FUNC_1(VAR_0), VAR_4 * sizeof(int32));
 VAR_3[VAR_4] = VAR_1;
 return VAR_2;
}
