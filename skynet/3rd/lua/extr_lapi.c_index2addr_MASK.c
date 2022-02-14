
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * top; TYPE_2__* ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_12__ {int l_registry; } ;
struct TYPE_11__ {int nupvalues; int * upvalue; } ;
struct TYPE_10__ {int * func; int * top; } ;
typedef int TValue ;
typedef TYPE_2__ CallInfo ;
typedef TYPE_3__ CClosure ;


 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,char*) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static TValue *FUNC_5 (lua_State *VAR_3, int VAR_4) {
  CallInfo *VAR_5 = VAR_3->ci;
  if (VAR_4 > 0) {
    TValue *VAR_6 = VAR_5->func + VAR_4;
    FUNC_1(VAR_3, VAR_4 <= VAR_5->top - (VAR_5->func + 1), "unacceptable index");
    if (VAR_6 >= VAR_3->top) return VAR_2;
    else return VAR_6;
  }
  else if (!FUNC_3(VAR_4)) {
    FUNC_1(VAR_3, VAR_4 != 0 && -VAR_4 <= VAR_3->top - (VAR_5->func + 1), "invalid index");
    return VAR_3->top + VAR_4;
  }
  else if (VAR_4 == VAR_0)
    return &FUNC_0(VAR_3)->l_registry;
  else {
    VAR_4 = VAR_0 - VAR_4;
    FUNC_1(VAR_3, VAR_4 <= VAR_1 + 1, "upvalue index too large");
    if (FUNC_4(VAR_5->func))
      return VAR_2;
    else {
      CClosure *VAR_7 = FUNC_2(VAR_5->func);
      return (VAR_4 <= VAR_7->nupvalues) ? &VAR_7->upvalue[VAR_4-1] : VAR_2;
    }
  }
}
