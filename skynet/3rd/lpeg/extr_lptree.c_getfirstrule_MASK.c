
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11 (lua_State *VAR_0, int VAR_1, int VAR_2) {
  FUNC_7(VAR_0, VAR_1, 1);
  if (FUNC_4(VAR_0, -1)) {
    FUNC_6(VAR_0, -1);
    FUNC_1(VAR_0, VAR_1);
  }
  else {
    FUNC_5(VAR_0, 1);
    FUNC_2(VAR_0, -2);
  }
  if (!FUNC_10(VAR_0, -1)) {
    if (FUNC_3(VAR_0, -1))
      FUNC_0(VAR_0, "grammar has no initial rule");
    else
      FUNC_0(VAR_0, "initial rule '%s' is not a pattern", FUNC_9(VAR_0, -2));
  }
  FUNC_6(VAR_0, -2);
  FUNC_5(VAR_0, 1);
  FUNC_8(VAR_0, VAR_2);
}
