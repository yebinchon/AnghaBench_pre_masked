
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float8 ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,char*,char const*,int) ;

__attribute__((used)) static float8 *
FUNC_6(ArrayType *VAR_2, const char *VAR_3, int VAR_4)
{





 if (FUNC_4(VAR_2) != 1 ||
  FUNC_1(VAR_2)[0] != VAR_4 ||
  FUNC_3(VAR_2) ||
  FUNC_2(VAR_2) != VAR_1)
  FUNC_5(VAR_0, "%s: expected %d-element float8 array", VAR_3, VAR_4);
 return (float8 *) FUNC_0(VAR_2);
}
