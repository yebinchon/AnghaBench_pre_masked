
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1, int VAR_2) {
  if (VAR_2 && !FUNC_1(VAR_1, -1)) {
    const char *VAR_3 = FUNC_3(VAR_1, -1);
    if (VAR_3 == ((void*)0)) VAR_3 = "(error object is not a string)";
    FUNC_0(VAR_0, VAR_3);
    FUNC_2(VAR_1, 1);
  }
  return VAR_2;
}
