
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extra; } ;
struct lua_obs_callback {TYPE_1__ base; } ;
typedef int lua_State ;


 struct lua_obs_callback* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,struct lua_obs_callback*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int,int*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_3)
{
 VAR_2 *VAR_1;

 if (!FUNC_4(VAR_2, 1, &VAR_1))
  return 0;
 if (!FUNC_3(VAR_3, 2))
  return 0;

 struct lua_obs_callback *VAR_4 = FUNC_0(VAR_3, 2);
 FUNC_1(&VAR_4->base.extra, "handler", VAR_1);
 FUNC_2(VAR_0, VAR_4);
 return 0;
}
