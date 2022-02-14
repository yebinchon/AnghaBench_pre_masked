
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stacksize; } ;
typedef TYPE_1__ lua_State ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1 (lua_State *VAR_0, int VAR_1) {
  if (VAR_1 <= VAR_0->stacksize)
    FUNC_0(VAR_0, 2*VAR_0->stacksize);
  else
    FUNC_0(VAR_0, VAR_0->stacksize + VAR_1);
}
