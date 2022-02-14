
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TValue ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int const*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int const*,int const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int const*) ;

int FUNC_9 (lua_State *VAR_1, const TValue *VAR_2, const TValue *VAR_3) {
  int VAR_4;
  if (FUNC_8(VAR_2) != FUNC_8(VAR_3))
    return FUNC_2(VAR_1, VAR_2, VAR_3);
  else if (FUNC_6(VAR_2))
    return FUNC_3(FUNC_4(VAR_2), FUNC_4(VAR_3));
  else if (FUNC_7(VAR_2))
    return FUNC_1(FUNC_5(VAR_2), FUNC_5(VAR_3)) < 0;
  else if ((VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0)) != -1)
    return VAR_4;
  return FUNC_2(VAR_1, VAR_2, VAR_3);
}
