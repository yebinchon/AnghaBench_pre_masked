
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ removed; } ;
struct lua_obs_callback {TYPE_1__ base; int * script; } ;
typedef int lua_State ;


 int FUNC_0 (void (*) (void*,int),int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_0, bool VAR_1)
{
 struct lua_obs_callback *VAR_2 = VAR_0;
 lua_State *VAR_3 = VAR_2->script;

 if (VAR_2->base.removed)
  return;

 FUNC_1();

 FUNC_2(VAR_3, VAR_1);
 FUNC_0(FUNC_4, 1, 0);

 FUNC_3();
}
