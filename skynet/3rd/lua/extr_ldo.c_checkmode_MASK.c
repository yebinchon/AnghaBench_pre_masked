
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,char const*,char const*) ;
 int * FUNC_2 (char const*,char const) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_1, const char *VAR_2, const char *VAR_3) {
  if (VAR_2 && FUNC_2(VAR_2, VAR_3[0]) == ((void*)0)) {
    FUNC_1(VAR_1,
       "attempt to load a %s chunk (mode is '%s')", VAR_3, VAR_2);
    FUNC_0(VAR_1, VAR_0);
  }
}
