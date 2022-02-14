
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct RProc {int dummy; } ;
typedef int ptrdiff_t ;
typedef int mrb_value ;
struct TYPE_10__ {TYPE_2__* c; scalar_t__ exc; } ;
typedef TYPE_3__ mrb_state ;
struct TYPE_9__ {int * stack; TYPE_1__* cibase; TYPE_1__* ci; } ;
struct TYPE_8__ {scalar_t__ acc; scalar_t__ argc; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,struct RProc*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,struct RProc*,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1, struct RProc *VAR_2)
{

  VAR_0->c->ci->argc = 0;
  if (VAR_0->c->ci->acc < 0) {
    ptrdiff_t VAR_3 = VAR_0->c->ci - VAR_0->c->cibase;
    mrb_value VAR_4 = FUNC_4(VAR_0, VAR_2, VAR_1, 0);
    if (VAR_0->exc) {
      FUNC_0(VAR_0, FUNC_3(VAR_0->exc));
    }
    VAR_0->c->ci = VAR_0->c->cibase + VAR_3;
    return VAR_4;
  }

  VAR_0->c->stack[1] = FUNC_2();
  return FUNC_1(VAR_0, VAR_1, VAR_2);
}
