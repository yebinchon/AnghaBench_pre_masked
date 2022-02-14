
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Number ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_2) {
  lua_Number VAR_3 = 0;
  FUNC_0(VAR_2, 1, VAR_1);
  FUNC_3(VAR_2);
  while (FUNC_1(VAR_2, 1)) {
    FUNC_2(VAR_2, 1);
    if (FUNC_6(VAR_2, -1) == VAR_0) {
      lua_Number VAR_4 = FUNC_5(VAR_2, -1);
      if (VAR_4 > VAR_3) VAR_3 = VAR_4;
    }
  }
  FUNC_4(VAR_2, VAR_3);
  return 1;
}
