
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int *,char const*,int) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3 (lua_State *VAR_0) {
 const char *VAR_1 = FUNC_2(VAR_0, 1);
 if (VAR_1)
  FUNC_0(VAR_0, VAR_0, VAR_1, 1);
 else {
  FUNC_1(VAR_0, "(no error message)");
 }
 return 1;
}
