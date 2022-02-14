
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int TValue ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;

int FUNC_8 (const TValue *VAR_0, lua_Number *VAR_1) {
  TValue VAR_2;
  if (FUNC_6(VAR_0)) {
    *VAR_1 = FUNC_0(FUNC_2(VAR_0));
    return 1;
  }
  else if (FUNC_1(VAR_0) &&
            FUNC_3(FUNC_5(VAR_0), &VAR_2) == FUNC_7(VAR_0) + 1) {
    *VAR_1 = FUNC_4(&VAR_2);
    return 1;
  }
  else
    return 0;
}
