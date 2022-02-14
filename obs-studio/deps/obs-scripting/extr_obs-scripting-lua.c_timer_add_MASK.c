
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct lua_obs_timer {unsigned long long interval; int last_ts; } ;
struct lua_obs_callback {int dummy; } ;
typedef int lua_State ;


 struct lua_obs_callback* FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ,struct lua_obs_callback*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 struct lua_obs_timer* FUNC_3 (struct lua_obs_callback*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1)
{
 if (!FUNC_2(VAR_1, 1))
  return 0;
 int VAR_2 = (int)FUNC_4(VAR_1, 2);
 if (!VAR_2)
  return 0;

 struct lua_obs_callback *VAR_3 = FUNC_0(
  VAR_1, 1, sizeof(struct lua_obs_timer));
 struct lua_obs_timer *VAR_4 = FUNC_3(VAR_3);

 VAR_4->interval = (uint64_t)VAR_2 * 1000000ULL;
 VAR_4->last_ts = FUNC_5();

 FUNC_1(VAR_0, VAR_3);
 return 0;
}
