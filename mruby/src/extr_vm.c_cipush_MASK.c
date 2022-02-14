
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mrb_context {int eidx; TYPE_2__* ci; TYPE_2__* cibase; TYPE_2__* ciend; } ;
typedef int ptrdiff_t ;
struct TYPE_7__ {struct mrb_context* c; } ;
typedef TYPE_1__ mrb_state ;
struct TYPE_8__ {int ridx; int epos; int member_0; } ;
typedef TYPE_2__ mrb_callinfo ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static inline mrb_callinfo*
FUNC_1(mrb_state *VAR_0)
{
  struct mrb_context *VAR_1 = VAR_0->c;
  static const mrb_callinfo VAR_2 = { 0 };
  mrb_callinfo *VAR_3 = VAR_1->ci;

  int VAR_4 = VAR_3->ridx;

  if (VAR_3 + 1 == VAR_1->ciend) {
    ptrdiff_t VAR_5 = VAR_3 - VAR_1->cibase;

    VAR_1->cibase = (mrb_callinfo *)FUNC_0(VAR_0, VAR_1->cibase, sizeof(mrb_callinfo)*VAR_5*2);
    VAR_1->ci = VAR_1->cibase + VAR_5;
    VAR_1->ciend = VAR_1->cibase + VAR_5 * 2;
  }
  VAR_3 = ++VAR_1->ci;
  *VAR_3 = VAR_2;
  VAR_3->epos = VAR_0->c->eidx;
  VAR_3->ridx = VAR_4;

  return VAR_3;
}
