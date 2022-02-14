
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nny; } ;
typedef TYPE_1__ lua_State ;
typedef int StkId ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1 (lua_State *VAR_0, StkId VAR_1, int VAR_2) {
  VAR_0->nny++;
  FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_0->nny--;
}
