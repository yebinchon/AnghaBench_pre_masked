
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_lua_script {int first_callback; } ;
struct lua_obs_callback {int * script; int reg_idx; } ;
typedef int obs_script_t ;
typedef int lua_State ;


 int VAR_0 ;
 struct lua_obs_callback* FUNC_0 (int *,int *,int) ;
 struct obs_lua_script* VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline struct lua_obs_callback *
FUNC_3(lua_State *VAR_2, int VAR_3, size_t VAR_4)
{
 struct obs_lua_script *VAR_5 = VAR_1;
 struct lua_obs_callback *VAR_6 =
  FUNC_0(&VAR_5->first_callback, (obs_script_t *)VAR_5,
        sizeof(*VAR_6) + VAR_4);

 FUNC_2(VAR_2, VAR_3);
 VAR_6->reg_idx = FUNC_1(VAR_2, VAR_0);
 VAR_6->script = VAR_2;
 return VAR_6;
}
