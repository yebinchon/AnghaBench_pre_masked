
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int ArrayType ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(ArrayType *VAR_1, Oid VAR_2)
{
 int VAR_3;
 Oid *VAR_4 = (Oid *) FUNC_0(VAR_1);


 if (VAR_4[0] == VAR_0)
  return 1;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1)[0]; VAR_3++)
 {
  if (FUNC_2(VAR_2, VAR_4[VAR_3]))
   return 1;
 }

 return 0;
}
