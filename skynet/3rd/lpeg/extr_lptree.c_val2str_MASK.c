
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char const* FUNC_0 (int *,int) ;
 char const* FUNC_1 (int *,char*,char const*) ;
 char* FUNC_2 (int *,int) ;

__attribute__((used)) static const char *FUNC_3 (lua_State *VAR_0, int VAR_1) {
  const char *VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (VAR_2 != ((void*)0))
    return FUNC_1(VAR_0, "%s", VAR_2);
  else
    return FUNC_1(VAR_0, "(a %s)", FUNC_0(VAR_0, VAR_1));
}
