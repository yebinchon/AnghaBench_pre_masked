
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_lua_script {scalar_t__ first_callback; } ;
struct TYPE_2__ {scalar_t__ next; } ;
struct lua_obs_callback {TYPE_1__ base; int reg_idx; } ;
typedef int lua_State ;


 int VAR_0 ;
 struct obs_lua_script* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static inline struct lua_obs_callback *
FUNC_3(lua_State *VAR_2, struct lua_obs_callback *VAR_3,
      int VAR_4)
{
 struct obs_lua_script *VAR_5 = VAR_1;

 VAR_3 = VAR_3 ? (struct lua_obs_callback *)VAR_3->base.next
  : (struct lua_obs_callback *)VAR_5->first_callback;

 while (VAR_3) {
  FUNC_2(VAR_2, VAR_0, VAR_3->reg_idx);
  bool VAR_6 = FUNC_1(VAR_2, -1, VAR_4);
  FUNC_0(VAR_2, 1);

  if (VAR_6)
   break;

  VAR_3 = (struct lua_obs_callback *)VAR_3->base.next;
 }

 return VAR_3;
}
