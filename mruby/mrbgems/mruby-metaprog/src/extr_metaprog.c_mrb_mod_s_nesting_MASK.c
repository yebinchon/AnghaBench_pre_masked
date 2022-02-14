
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct RProc {struct RProc* upper; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
struct TYPE_9__ {TYPE_2__* c; } ;
typedef TYPE_3__ mrb_state ;
struct TYPE_8__ {TYPE_1__* ci; } ;
struct TYPE_7__ {struct RProc* proc; } ;


 int FUNC_0 (struct RProc*) ;
 scalar_t__ FUNC_1 (struct RProc*) ;
 struct RClass* FUNC_2 (struct RProc*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct RClass*) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RProc *VAR_2;
  mrb_value VAR_3;
  struct RClass *VAR_4 = ((void*)0);

  VAR_3 = FUNC_3(VAR_0);
  VAR_2 = VAR_0->c->ci[-1].proc;
  FUNC_5(!FUNC_0(VAR_2));
  while (VAR_2) {
    if (FUNC_1(VAR_2)) {
      struct RClass *VAR_5 = FUNC_2(VAR_2);

      if (VAR_5 != VAR_4) {
        VAR_4 = VAR_5;
        FUNC_4(VAR_0, VAR_3, FUNC_6(VAR_4));
      }
    }
    VAR_2 = VAR_2->upper;
  }
  return VAR_3;
}
