
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_lua_source {int definition_mutex; int script; } ;
struct obs_lua_data {struct obs_lua_source* ls; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,double) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(void *VAR_1, float VAR_2)
{
 struct obs_lua_data *VAR_3 = VAR_1;
 struct obs_lua_source *VAR_4 = VAR_3->ls;

 FUNC_5(&VAR_4->definition_mutex);
 if (!VAR_4->script)
  goto fail;
 if (!FUNC_1(VAR_0))
  goto fail;

 FUNC_2();

 FUNC_3();
 FUNC_4(VAR_4->script, (double)VAR_2);
 FUNC_0(VAR_0, 2, 0);

 FUNC_7();

fail:
 FUNC_6(&VAR_4->definition_mutex);
}
