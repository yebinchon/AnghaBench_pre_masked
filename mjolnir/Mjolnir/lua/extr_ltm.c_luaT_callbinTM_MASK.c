
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TValue ;
typedef int TMS ;
typedef int StkId ;


 int FUNC_0 (int *,int const*,int const*,int const*,int ,int) ;
 int * FUNC_1 (int *,int const*,int ) ;
 scalar_t__ FUNC_2 (int const*) ;

int FUNC_3 (lua_State *VAR_0, const TValue *VAR_1, const TValue *VAR_2,
                    StkId VAR_3, TMS VAR_4) {
  const TValue *VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4);
  if (FUNC_2(VAR_5))
    VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_4);
  if (FUNC_2(VAR_5)) return 0;
  FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2, VAR_3, 1);
  return 1;
}
