
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nCcalls; } ;
typedef TYPE_1__ lua_State ;
typedef int StkId ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (lua_State *VAR_1, StkId VAR_2, int VAR_3) {
  if (++VAR_1->nCcalls >= VAR_0)
    FUNC_2(VAR_1);
  if (!FUNC_0(VAR_1, VAR_2, VAR_3))
    FUNC_1(VAR_1);
  VAR_1->nCcalls--;
}
