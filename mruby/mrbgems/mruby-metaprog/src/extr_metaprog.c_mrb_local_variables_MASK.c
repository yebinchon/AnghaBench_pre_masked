
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_6__* irep; } ;
struct RProc {int c; struct RProc* upper; TYPE_3__ body; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
struct TYPE_17__ {TYPE_2__* c; } ;
typedef TYPE_5__ mrb_state ;
struct TYPE_18__ {size_t nlocals; TYPE_4__* lv; } ;
typedef TYPE_6__ mrb_irep ;
struct TYPE_16__ {int name; } ;
struct TYPE_14__ {TYPE_1__* ci; } ;
struct TYPE_13__ {struct RProc* proc; } ;


 scalar_t__ FUNC_0 (struct RProc*) ;
 int FUNC_1 (struct RProc*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ) ;
 char* FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RProc *VAR_2;
  mrb_irep *VAR_3;
  mrb_value VAR_4;
  size_t VAR_5;

  VAR_2 = VAR_0->c->ci[-1].proc;

  if (FUNC_0(VAR_2)) {
    return FUNC_2(VAR_0);
  }
  VAR_4 = FUNC_4(VAR_0);
  while (VAR_2) {
    if (FUNC_0(VAR_2)) break;
    VAR_3 = VAR_2->body.irep;
    if (!VAR_3->lv) break;
    for (VAR_5 = 0; VAR_5 + 1 < VAR_3->nlocals; ++VAR_5) {
      if (VAR_3->lv[VAR_5].name) {
        mrb_sym VAR_6 = VAR_3->lv[VAR_5].name;
        const char *VAR_7 = FUNC_6(VAR_0, VAR_6);
        switch (VAR_7[0]) {
        case '*': case '&':
          break;
        default:
          FUNC_5(VAR_0, VAR_4, FUNC_7(VAR_6), FUNC_8());
          break;
        }
      }
    }
    if (!FUNC_1(VAR_2)) break;
    VAR_2 = VAR_2->upper;

    if (!VAR_2->c) break;
  }

  return FUNC_3(VAR_0, VAR_4);
}
