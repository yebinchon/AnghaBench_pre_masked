
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_3) {
  int VAR_4 = FUNC_6(VAR_3, 2);
  FUNC_1(VAR_3, 1, VAR_2);
  FUNC_0(VAR_3, VAR_4 == VAR_0 || VAR_4 == VAR_2 || VAR_4 == VAR_1, 2,
                    "nil or table expected");
  if (FUNC_3(VAR_3, 1, "__metatable"))
    FUNC_2(VAR_3, "cannot change a protected metatable");
  FUNC_5(VAR_3, 2);
  FUNC_4(VAR_3, 1);
  return 1;
}
