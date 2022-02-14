
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_lua_source {scalar_t__ script; struct obs_lua_source* next; } ;
struct obs_lua_script {scalar_t__ script; } ;


 struct obs_lua_source* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct obs_lua_script*,struct obs_lua_source*) ;

void FUNC_3(struct obs_lua_script *VAR_2)
{
 FUNC_0(&VAR_1);

 struct obs_lua_source *VAR_3 = VAR_0;
 while (VAR_3) {
  if (VAR_3->script == VAR_2->script)
   FUNC_2(VAR_2, VAR_3);
  VAR_3 = VAR_3->next;
 }

 FUNC_1(&VAR_1);
}
