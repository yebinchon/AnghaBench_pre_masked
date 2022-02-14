
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_lua_source {int definition_mutex; int * script; struct obs_lua_data* first_source; int id; } ;
struct obs_lua_script {int mutex; } ;
struct obs_lua_data {struct obs_lua_data* next; } ;


 int FUNC_0 (struct obs_lua_data*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct obs_lua_source*) ;

__attribute__((used)) static inline void FUNC_5(struct obs_lua_script *VAR_0,
         struct obs_lua_source *VAR_1)
{
 FUNC_2(&VAR_1->definition_mutex);
 FUNC_2(&VAR_0->mutex);

 FUNC_1(VAR_1->id, 0);

 struct obs_lua_data *VAR_2 = VAR_1->first_source;
 while (VAR_2) {
  FUNC_0(VAR_2);
  VAR_2 = VAR_2->next;
 }

 FUNC_4(VAR_1);
 VAR_1->script = ((void*)0);

 FUNC_3(&VAR_0->mutex);
 FUNC_3(&VAR_1->definition_mutex);
}
