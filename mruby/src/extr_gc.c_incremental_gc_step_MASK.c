
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_4__ {int step_ratio; scalar_t__ state; scalar_t__ live; scalar_t__ threshold; } ;
typedef TYPE_1__ mrb_gc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,size_t) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_2, mrb_gc *VAR_3)
{
  size_t VAR_4 = 0, VAR_5 = 0;
  VAR_4 = (VAR_0/100) * VAR_3->step_ratio;
  while (VAR_5 < VAR_4) {
    VAR_5 += FUNC_0(VAR_2, VAR_3, VAR_4);
    if (VAR_3->state == VAR_1)
      break;
  }

  VAR_3->threshold = VAR_3->live + VAR_0;
}
