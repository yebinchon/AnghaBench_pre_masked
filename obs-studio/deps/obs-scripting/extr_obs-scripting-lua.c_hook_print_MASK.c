
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_lua_script {int base; } ;
typedef int lua_State ;


 struct obs_lua_script* VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_1)
{
 struct obs_lua_script *VAR_2 = VAR_0;
 const char *VAR_3 = FUNC_0(VAR_1, 1);
 if (!VAR_3)
  return 0;

 FUNC_1(&VAR_2->base, "%s", VAR_3);
 return 0;
}
