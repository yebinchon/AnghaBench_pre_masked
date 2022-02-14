
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ removed; } ;
struct lua_obs_callback {TYPE_1__ base; int * script; } ;
typedef int lua_State ;
typedef int lua_Number ;


 int FUNC_0 (void (*) (void*,float),int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (void (*) (void*,float),struct lua_obs_callback*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_0, float VAR_1)
{
 struct lua_obs_callback *VAR_2 = VAR_0;
 lua_State *VAR_3 = VAR_2->script;

 if (VAR_2->base.removed) {
  FUNC_3(FUNC_5, VAR_2);
  return;
 }

 FUNC_1();

 FUNC_2(VAR_3, (lua_Number)VAR_1);
 FUNC_0(FUNC_5, 1, 0);

 FUNC_4();
}
