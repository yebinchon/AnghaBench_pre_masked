
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extra; int on_remove; } ;
struct lua_obs_callback {TYPE_1__ base; } ;
typedef scalar_t__ obs_hotkey_id ;
typedef int lua_State ;
typedef int lua_Integer ;


 scalar_t__ VAR_0 ;
 struct lua_obs_callback* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (char const*,char const*,int ,struct lua_obs_callback*) ;
 int VAR_2 ;
 int FUNC_6 (struct lua_obs_callback*) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_3)
{
 obs_hotkey_id VAR_4;

 const char *VAR_5 = FUNC_4(VAR_3, 1);
 if (!VAR_5)
  return 0;
 const char *VAR_6 = FUNC_4(VAR_3, 2);
 if (!VAR_6)
  return 0;
 if (!FUNC_2(VAR_3, 3))
  return 0;

 struct lua_obs_callback *VAR_7 = FUNC_0(VAR_3, 3);
 VAR_7->base.on_remove = VAR_2;
 VAR_4 = FUNC_5(VAR_5, VAR_6, VAR_1, VAR_7);
 FUNC_1(&VAR_7->base.extra, "id", VAR_4);
 FUNC_3(VAR_3, (lua_Integer)VAR_4);

 if (VAR_4 == VAR_0)
  FUNC_6(VAR_7);
 return 1;
}
