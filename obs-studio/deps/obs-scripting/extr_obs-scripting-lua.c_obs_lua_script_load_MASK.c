
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int loaded; } ;
struct obs_lua_script {TYPE_1__ base; } ;
typedef int obs_script_t ;


 int FUNC_0 (struct obs_lua_script*) ;
 int FUNC_1 (int *,int *) ;

bool FUNC_2(obs_script_t *VAR_0)
{
 struct obs_lua_script *VAR_1 = (struct obs_lua_script *)VAR_0;
 if (!VAR_1->base.loaded) {
  VAR_1->base.loaded = FUNC_0(VAR_1);
  if (VAR_1->base.loaded)
   FUNC_1(VAR_0, ((void*)0));
 }

 return VAR_1->base.loaded;
}
