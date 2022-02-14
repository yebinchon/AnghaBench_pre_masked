
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lua_obs_callback {int dummy; } ;
typedef int lua_State ;


 struct lua_obs_callback* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int,int*) ;
 int VAR_0 ;
 int FUNC_3 (int,int ,struct lua_obs_callback*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_3)
{
 VAR_1 *VAR_2;

 if (!FUNC_2(VAR_1, 1, &VAR_2))
  return 0;
 if (!FUNC_1(VAR_3, 2))
  return 0;

 struct lua_obs_callback *VAR_4 = FUNC_0(VAR_3, 2);
 FUNC_3(VAR_2, VAR_0, VAR_4);
 return 0;
}
