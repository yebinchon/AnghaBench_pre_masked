
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_17__ {int top; TYPE_5__* ci; } ;
typedef TYPE_4__ lua_State ;
struct TYPE_14__ {int base; } ;
struct TYPE_15__ {TYPE_1__ l; } ;
struct TYPE_18__ {int func; TYPE_3__* next; TYPE_2__ u; } ;
struct TYPE_16__ {int func; } ;
struct TYPE_13__ {int p; } ;
typedef int StkId ;
typedef TYPE_5__ CallInfo ;


 TYPE_11__* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 char const* FUNC_2 (TYPE_5__*,int,int*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 char* FUNC_4 (int ,int,int ) ;

__attribute__((used)) static const char *FUNC_5 (lua_State *VAR_0, CallInfo *VAR_1, int VAR_2,
                              StkId *VAR_3) {
  const char *VAR_4 = ((void*)0);
  StkId VAR_5;
  if (FUNC_3(VAR_1)) {
    if (VAR_2 < 0)
      return FUNC_2(VAR_1, -VAR_2, VAR_3);
    else {
      VAR_5 = VAR_1->u.l.base;
      VAR_4 = FUNC_4(FUNC_0(VAR_1)->p, VAR_2, FUNC_1(VAR_1));
    }
  }
  else
    VAR_5 = VAR_1->func + 1;
  if (VAR_4 == ((void*)0)) {
    StkId VAR_6 = (VAR_1 == VAR_0->ci) ? VAR_0->top : VAR_1->next->func;
    if (VAR_6 - VAR_5 >= VAR_2 && VAR_2 > 0)
      VAR_4 = "(*temporary)";
    else
      return ((void*)0);
  }
  *VAR_3 = VAR_5 + (VAR_2 - 1);
  return VAR_4;
}
