
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int * lua_Hook ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int *,int*) ;
 int * VAR_4 ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,int,char*) ;
 int FUNC_13 (int *,int *,int,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int *,int) ;
 int FUNC_17 (char const*,int) ;

__attribute__((used)) static int FUNC_18 (lua_State *VAR_5) {
  int VAR_6, VAR_7, VAR_8;
  lua_Hook VAR_9;
  lua_State *VAR_10 = FUNC_0(VAR_5, &VAR_6);
  if (FUNC_5(VAR_5, VAR_6+1)) {
    FUNC_15(VAR_5, VAR_6+1);
    VAR_9 = ((void*)0); VAR_7 = 0; VAR_8 = 0;
  }
  else {
    const char *VAR_11 = FUNC_1(VAR_5, VAR_6+2);
    FUNC_2(VAR_5, VAR_6+1, VAR_2);
    VAR_8 = (int)FUNC_3(VAR_5, VAR_6 + 3, 0);
    VAR_9 = VAR_4; VAR_7 = FUNC_17(VAR_11, VAR_8);
  }
  if (FUNC_9(VAR_5, VAR_1, &VAR_0) == VAR_3) {
    FUNC_4(VAR_5, 0, 2);
    FUNC_8(VAR_5, -1);
    FUNC_11(VAR_5, VAR_1, &VAR_0);
    FUNC_6(VAR_5, "k");
    FUNC_12(VAR_5, -2, "__mode");
    FUNC_8(VAR_5, -1);
    FUNC_14(VAR_5, -2);
  }
  FUNC_7(VAR_10); FUNC_16(VAR_10, VAR_5, 1);
  FUNC_8(VAR_5, VAR_6 + 1);
  FUNC_10(VAR_5, -3);
  FUNC_13(VAR_10, VAR_9, VAR_7, VAR_8);
  return 0;
}
