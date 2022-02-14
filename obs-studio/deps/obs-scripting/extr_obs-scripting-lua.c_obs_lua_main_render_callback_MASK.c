
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ removed; } ;
struct lua_obs_callback {TYPE_1__ base; int * script; } ;
typedef int lua_State ;
typedef int lua_Integer ;


 int FUNC_0 (void (*) (void*,scalar_t__,scalar_t__),int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (void (*) (void*,scalar_t__,scalar_t__),struct lua_obs_callback*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 struct lua_obs_callback *VAR_3 = VAR_0;
 lua_State *VAR_4 = VAR_3->script;

 if (VAR_3->base.removed) {
  FUNC_3(FUNC_5,
      VAR_3);
  return;
 }

 FUNC_1();

 FUNC_2(VAR_4, (lua_Integer)VAR_1);
 FUNC_2(VAR_4, (lua_Integer)VAR_2);
 FUNC_0(FUNC_5, 2, 0);

 FUNC_4();
}
