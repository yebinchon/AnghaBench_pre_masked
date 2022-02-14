
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ removed; } ;
struct lua_obs_callback {TYPE_1__ base; } ;
typedef int obs_hotkey_t ;
typedef int * obs_hotkey_id ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct lua_obs_callback*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void *VAR_2, obs_hotkey_id VAR_3, obs_hotkey_t *VAR_4,
       bool VAR_5)
{
 struct lua_obs_callback *VAR_6 = VAR_2;

 if (VAR_6->base.removed)
  return;

 if (VAR_5)
  FUNC_1(VAR_0, VAR_6);
 else
  FUNC_1(VAR_1, VAR_6);

 FUNC_0(VAR_4);
 FUNC_0(VAR_3);
}
