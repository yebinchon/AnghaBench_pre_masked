
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_lua_source {int definition_mutex; int script; } ;
struct obs_lua_data {struct obs_lua_data** p_prev_next; struct obs_lua_data* next; struct obs_lua_source* ls; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct obs_lua_data*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_1)
{
 struct obs_lua_data *VAR_2 = VAR_1;
 struct obs_lua_source *VAR_3 = VAR_2->ls;
 struct obs_lua_data *VAR_4;

 FUNC_4(&VAR_3->definition_mutex);
 if (!VAR_3->script)
  goto fail;
 if (!FUNC_2(VAR_0))
  goto fail;

 FUNC_3();
 FUNC_1(VAR_2);
 FUNC_6();

fail:
 VAR_4 = VAR_2->next;
 *VAR_2->p_prev_next = VAR_4;
 if (VAR_4)
  VAR_4->p_prev_next = VAR_2->p_prev_next;

 FUNC_0(VAR_1);
 FUNC_5(&VAR_3->definition_mutex);
}
