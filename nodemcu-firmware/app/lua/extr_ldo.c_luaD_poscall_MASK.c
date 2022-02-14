
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hookmask; scalar_t__ top; int savedpc; int base; int ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_7__ {scalar_t__ func; int nresults; int savedpc; int base; } ;
typedef scalar_t__ StkId ;
typedef TYPE_2__ CallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

int FUNC_3 (lua_State *VAR_2, StkId VAR_3) {
  StkId VAR_4;
  int VAR_5, VAR_6;
  CallInfo *VAR_7;
  if (VAR_2->hookmask & VAR_0)
    VAR_3 = FUNC_0(VAR_2, VAR_3);
  VAR_7 = VAR_2->ci--;
  VAR_4 = VAR_7->func;
  VAR_5 = VAR_7->nresults;
  VAR_2->base = (VAR_7 - 1)->base;
  VAR_2->savedpc = (VAR_7 - 1)->savedpc;

  for (VAR_6 = VAR_5; VAR_6 != 0 && VAR_3 < VAR_2->top; VAR_6--)
    FUNC_2(VAR_2, VAR_4++, VAR_3++);
  while (VAR_6-- > 0)
    FUNC_1(VAR_4++);
  VAR_2->top = VAR_4;
  return (VAR_5 - VAR_1);
}
