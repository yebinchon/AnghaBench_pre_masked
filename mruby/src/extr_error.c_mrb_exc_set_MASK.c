
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct RBasic {int dummy; } ;
typedef int mrb_value ;
struct TYPE_6__ {int arena_idx; int out_of_memory; struct RBasic** arena; } ;
struct TYPE_7__ {scalar_t__ exc; TYPE_1__ gc; } ;
typedef TYPE_2__ mrb_state ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1)
{
  if (FUNC_3(VAR_1)) {
    VAR_0->exc = 0;
  }
  else {
    VAR_0->exc = FUNC_4(VAR_1);
    if (VAR_0->gc.arena_idx > 0 &&
        (struct RBasic*)VAR_0->exc == VAR_0->gc.arena[VAR_0->gc.arena_idx-1]) {
      VAR_0->gc.arena_idx--;
    }
    if (!VAR_0->gc.out_of_memory && !FUNC_1(VAR_0->exc)) {
      FUNC_0(VAR_0, VAR_0->exc);
      FUNC_2(VAR_0, VAR_1);
    }
  }
}
