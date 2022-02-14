
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lua_Number ;
typedef int lua_Integer ;
typedef int TValue ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;

int FUNC_10 (const TValue *VAR_0, lua_Integer *VAR_1, int VAR_2) {
  TValue VAR_3;
 again:
  if (FUNC_7(VAR_0)) {
    lua_Number VAR_4 = FUNC_1(VAR_0);
    lua_Number VAR_5 = FUNC_3(VAR_4);
    if (VAR_4 != VAR_5) {
      if (VAR_2 == 0) return 0;
      else if (VAR_2 > 1)
        VAR_5 += 1;
    }
    return FUNC_5(VAR_5, VAR_1);
  }
  else if (FUNC_8(VAR_0)) {
    *VAR_1 = FUNC_2(VAR_0);
    return 1;
  }
  else if (FUNC_0(VAR_0) &&
            FUNC_4(FUNC_6(VAR_0), &VAR_3) == FUNC_9(VAR_0) + 1) {
    VAR_0 = &VAR_3;
    goto again;
  }
  return 0;
}
