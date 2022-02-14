
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int inet ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(inet *VAR_0, inet *VAR_1, int VAR_2)
{
 if (FUNC_5(VAR_0) == FUNC_5(VAR_1))
 {
  int VAR_3;

  VAR_3 = FUNC_1(FUNC_3(VAR_0), FUNC_3(VAR_1),
      FUNC_0(FUNC_4(VAR_0), FUNC_4(VAR_1)));
  if (VAR_3 != 0)
   return VAR_3;

  return FUNC_2(VAR_0, VAR_1, VAR_2);
 }

 return FUNC_5(VAR_0) - FUNC_5(VAR_1);
}
