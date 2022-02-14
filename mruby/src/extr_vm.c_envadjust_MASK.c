
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct REnv {int * stack; } ;
typedef int ptrdiff_t ;
typedef int mrb_value ;
struct TYPE_6__ {TYPE_1__* c; } ;
typedef TYPE_2__ mrb_state ;
struct TYPE_7__ {int * stackent; scalar_t__ proc; struct REnv* env; } ;
typedef TYPE_3__ mrb_callinfo ;
struct TYPE_5__ {TYPE_3__* ci; TYPE_3__* cibase; } ;


 scalar_t__ FUNC_0 (struct REnv*) ;
 struct REnv* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_3(mrb_state *VAR_0, mrb_value *VAR_1, mrb_value *VAR_2, size_t VAR_3)
{
  mrb_callinfo *VAR_4 = VAR_0->c->cibase;

  if (VAR_2 == VAR_1) return;
  while (VAR_4 <= VAR_0->c->ci) {
    struct REnv *VAR_5 = VAR_4->env;
    mrb_value *VAR_6;

    if (VAR_5 && FUNC_0(VAR_5) &&
        (VAR_6 = VAR_5->stack) && VAR_1 <= VAR_6 && VAR_6 < VAR_1+VAR_3) {
      ptrdiff_t VAR_7 = VAR_5->stack - VAR_1;

      VAR_5->stack = VAR_2 + VAR_7;
    }

    if (VAR_4->proc && FUNC_2(VAR_4->proc) && VAR_4->env != FUNC_1(VAR_4->proc)) {
      VAR_5 = FUNC_1(VAR_4->proc);

      if (VAR_5 && FUNC_0(VAR_5) &&
          (VAR_6 = VAR_5->stack) && VAR_1 <= VAR_6 && VAR_6 < VAR_1+VAR_3) {
        ptrdiff_t VAR_8 = VAR_5->stack - VAR_1;

        VAR_5->stack = VAR_2 + VAR_8;
      }
    }

    VAR_4->stackent = VAR_2 + (VAR_4->stackent - VAR_1);
    VAR_4++;
  }
}
