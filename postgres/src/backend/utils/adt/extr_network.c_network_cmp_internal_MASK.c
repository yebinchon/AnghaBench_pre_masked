
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int inet ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int32
FUNC_6(inet *VAR_0, inet *VAR_1)
{
 if (FUNC_4(VAR_0) == FUNC_4(VAR_1))
 {
  int VAR_2;

  VAR_2 = FUNC_1(FUNC_2(VAR_0), FUNC_2(VAR_1),
      FUNC_0(FUNC_3(VAR_0), FUNC_3(VAR_1)));
  if (VAR_2 != 0)
   return VAR_2;
  VAR_2 = ((int) FUNC_3(VAR_0)) - ((int) FUNC_3(VAR_1));
  if (VAR_2 != 0)
   return VAR_2;
  return FUNC_1(FUNC_2(VAR_0), FUNC_2(VAR_1), FUNC_5(VAR_0));
 }

 return FUNC_4(VAR_0) - FUNC_4(VAR_1);
}
