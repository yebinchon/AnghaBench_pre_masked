
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lua_obs_callback {int dummy; } ;
typedef int lua_State ;


 struct lua_obs_callback* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (struct lua_obs_callback*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_1)
{
 if (!FUNC_2(VAR_1, VAR_0))
  return 0;

 struct lua_obs_callback *VAR_2 = FUNC_0(VAR_1, 1);
 if (VAR_2) {
  FUNC_1(VAR_2);
 }
 return 0;
}
