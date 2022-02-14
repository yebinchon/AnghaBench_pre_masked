
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct obs_lua_script {int mutex; scalar_t__ first_callback; struct obs_lua_script* next_tick; struct obs_lua_script** p_prev_next_tick; int * script; } ;
struct TYPE_4__ {scalar_t__ next; } ;
struct lua_obs_callback {TYPE_1__ base; } ;
struct TYPE_5__ {int loaded; } ;
typedef TYPE_2__ obs_script_t ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct lua_obs_callback*) ;
 int VAR_0 ;
 int FUNC_6 (struct obs_lua_script*) ;

void FUNC_7(obs_script_t *VAR_1)
{
 struct obs_lua_script *VAR_2 = (struct obs_lua_script *)VAR_1;

 if (!VAR_1->loaded)
  return;

 lua_State *VAR_3 = VAR_2->script;




 FUNC_6(VAR_2);




 if (VAR_2->p_prev_next_tick) {
  FUNC_3(&VAR_0);

  struct obs_lua_script *VAR_4 = VAR_2->next_tick;
  if (VAR_4)
   VAR_4->p_prev_next_tick = VAR_2->p_prev_next_tick;
  *VAR_2->p_prev_next_tick = VAR_4;

  FUNC_4(&VAR_0);

  VAR_2->p_prev_next_tick = ((void*)0);
  VAR_2->next_tick = ((void*)0);
 }




 FUNC_3(&VAR_2->mutex);

 FUNC_1(VAR_3, "script_unload");
 FUNC_2(VAR_3, 0, 0, 0);




 struct lua_obs_callback *VAR_5 =
  (struct lua_obs_callback *)VAR_2->first_callback;
 while (VAR_5) {
  struct lua_obs_callback *VAR_6 =
   (struct lua_obs_callback *)VAR_5->base.next;
  FUNC_5(VAR_5);
  VAR_5 = VAR_6;
 }

 FUNC_4(&VAR_2->mutex);




 FUNC_0(VAR_3);
 VAR_1->loaded = 0;
}
