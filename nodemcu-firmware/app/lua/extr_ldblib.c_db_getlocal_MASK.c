
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;


 int * FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_0) {
  int VAR_1;
  lua_State *VAR_2 = FUNC_0(VAR_0, &VAR_1);
  lua_Debug VAR_3;
  const char *VAR_4;
  if (!FUNC_4(VAR_2, FUNC_2(VAR_0, VAR_1+1), &VAR_3))
    return FUNC_1(VAR_0, VAR_1+1, "level out of range");
  VAR_4 = FUNC_3(VAR_2, &VAR_3, FUNC_2(VAR_0, VAR_1+2));
  if (VAR_4) {
    FUNC_8(VAR_2, VAR_0, 1);
    FUNC_6(VAR_0, VAR_4);
    FUNC_7(VAR_0, -2);
    return 2;
  }
  else {
    FUNC_5(VAR_0);
    return 1;
  }
}
