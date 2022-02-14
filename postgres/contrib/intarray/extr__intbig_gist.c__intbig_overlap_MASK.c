
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int GISTTYPE ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6(GISTTYPE *VAR_0, ArrayType *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 int32 *VAR_3 = FUNC_1(VAR_1);

 FUNC_2(VAR_1);

 while (VAR_2--)
 {
  if (FUNC_3(FUNC_4(VAR_0), FUNC_5(*VAR_3)))
   return 1;
  VAR_3++;
 }

 return 0;
}
