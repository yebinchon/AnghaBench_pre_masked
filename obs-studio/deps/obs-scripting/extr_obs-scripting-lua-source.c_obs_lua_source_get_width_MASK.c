
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct obs_lua_source {int definition_mutex; int script; } ;
struct obs_lua_data {struct obs_lua_source* ls; } ;


 scalar_t__ FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static uint32_t FUNC_9(void *VAR_1)
{
 struct obs_lua_data *VAR_2 = VAR_1;
 struct obs_lua_source *VAR_3 = VAR_2->ls;
 uint32_t VAR_4 = 0;

 FUNC_6(&VAR_3->definition_mutex);
 if (!VAR_3->script)
  goto fail;
 if (!FUNC_1(VAR_0))
  goto fail;

 FUNC_2();

 FUNC_4();
 if (FUNC_0(VAR_0, 1, 1)) {
  VAR_4 = (uint32_t)FUNC_5(VAR_3->script, -1);
  FUNC_3(1);
 }

 FUNC_8();

fail:
 FUNC_7(&VAR_3->definition_mutex);
 return VAR_4;
}
