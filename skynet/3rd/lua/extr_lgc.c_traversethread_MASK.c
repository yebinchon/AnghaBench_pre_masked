
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int stacksize; int nci; struct TYPE_8__* twups; int * openupval; int * stack; int * top; } ;
typedef TYPE_1__ lua_State ;
typedef int lu_mem ;
struct TYPE_9__ {scalar_t__ gcstate; scalar_t__ gckind; TYPE_1__* twups; } ;
typedef TYPE_2__ global_State ;
typedef int TValue ;
typedef int * StkId ;
typedef int CallInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static lu_mem FUNC_5 (global_State *VAR_2, lua_State *VAR_3) {
  StkId VAR_4 = VAR_3->stack;
  if (VAR_4 == ((void*)0))
    return 1;
  FUNC_2(VAR_2->gcstate == VAR_0 ||
             VAR_3->openupval == ((void*)0) || FUNC_0(VAR_3));
  for (; VAR_4 < VAR_3->top; VAR_4++)
    FUNC_3(VAR_2, VAR_4);
  if (VAR_2->gcstate == VAR_0) {
    StkId VAR_5 = VAR_3->stack + VAR_3->stacksize;
    for (; VAR_4 < VAR_5; VAR_4++)
      FUNC_4(VAR_4);

    if (!FUNC_0(VAR_3) && VAR_3->openupval != ((void*)0)) {
      VAR_3->twups = VAR_2->twups;
      VAR_2->twups = VAR_3;
    }
  }
  else if (VAR_2->gckind != VAR_1)
    FUNC_1(VAR_3);
  return (sizeof(lua_State) + sizeof(TValue) * VAR_3->stacksize +
          sizeof(CallInfo) * VAR_3->nci);
}
