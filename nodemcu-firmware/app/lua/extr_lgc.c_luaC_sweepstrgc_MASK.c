
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {scalar_t__ gcstate; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;

int FUNC_2 (lua_State *VAR_1) {
  global_State *VAR_2 = FUNC_0(VAR_1);
  if (VAR_2->gcstate == VAR_0) {
    FUNC_1(VAR_2, VAR_1);
    return (VAR_2->gcstate == VAR_0) ? 1 : 0;
  }
  return 0;
}
