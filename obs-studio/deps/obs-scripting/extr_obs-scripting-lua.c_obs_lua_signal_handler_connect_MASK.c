
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
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int ,struct lua_obs_callback*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int,int,int*) ;
 char* FUNC_6 (int *,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_3)
{
 VAR_2 *VAR_1;
 const char *VAR_4;

 if (!FUNC_5(VAR_2, 1, &VAR_1))
  return 0;
 VAR_4 = FUNC_6(VAR_3, 2);
 if (!VAR_4)
  return 0;
 if (!FUNC_4(VAR_3, 3))
  return 0;

 struct lua_obs_callback *VAR_5 = FUNC_0(VAR_3, 3);
 FUNC_1(&VAR_5->base.extra, "handler", VAR_1);
 FUNC_2(&VAR_5->base.extra, "signal", VAR_4);
 FUNC_3(VAR_0, VAR_5);
 return 0;
}
