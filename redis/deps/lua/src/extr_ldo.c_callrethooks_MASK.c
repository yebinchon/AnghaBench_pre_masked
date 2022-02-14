
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_7__ {int hookmask; TYPE_5__* ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_8__ {int tailcalls; } ;
typedef int StkId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static StkId FUNC_4 (lua_State *VAR_3, StkId VAR_4) {
  ptrdiff_t VAR_5 = FUNC_3(VAR_3, VAR_4);
  FUNC_1(VAR_3, VAR_0, -1);
  if (FUNC_0(VAR_3->ci)) {
    while ((VAR_3->hookmask & VAR_2) && VAR_3->ci->tailcalls--)
      FUNC_1(VAR_3, VAR_1, -1);
  }
  return FUNC_2(VAR_3, VAR_5);
}
