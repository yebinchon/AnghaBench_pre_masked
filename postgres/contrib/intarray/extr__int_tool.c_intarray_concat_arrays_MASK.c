
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int * FUNC_4 (int) ;

ArrayType *
FUNC_5(ArrayType *VAR_0, ArrayType *VAR_1)
{
 ArrayType *VAR_2;
 int32 VAR_3 = FUNC_0(VAR_0);
 int32 VAR_4 = FUNC_0(VAR_1);

 FUNC_2(VAR_0);
 FUNC_2(VAR_1);
 VAR_2 = FUNC_4(VAR_3 + VAR_4);
 if (VAR_3)
  FUNC_3(FUNC_1(VAR_2), FUNC_1(VAR_0), VAR_3 * sizeof(int32));
 if (VAR_4)
  FUNC_3(FUNC_1(VAR_2) + VAR_3, FUNC_1(VAR_1), VAR_4 * sizeof(int32));
 return VAR_2;
}
