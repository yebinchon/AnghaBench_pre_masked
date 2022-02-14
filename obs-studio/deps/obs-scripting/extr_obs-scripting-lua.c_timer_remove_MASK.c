
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lua_obs_callback {int dummy; } ;
typedef int lua_State ;


 struct lua_obs_callback* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct lua_obs_callback*) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0)
{
 if (!FUNC_1(VAR_0, 1))
  return 0;

 struct lua_obs_callback *VAR_1 = FUNC_0(VAR_0, 1);
 if (VAR_1)
  FUNC_2(VAR_1);
 return 0;
}
