
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_state ;
struct TYPE_5__ {int nlocals; TYPE_1__* lv; } ;
typedef TYPE_2__ mrb_irep ;
struct TYPE_4__ {scalar_t__ name; } ;


 TYPE_2__* FUNC_0 (int *,int) ;

__attribute__((used)) static uint16_t
FUNC_1(mrb_state *VAR_0, mrb_sym VAR_1, int VAR_2)
{
  mrb_irep *VAR_3;
  int VAR_4;
  int VAR_5;

  for (VAR_4 = 0; (VAR_3 = FUNC_0(VAR_0, VAR_4)); VAR_4++) {
    if (VAR_3->lv == ((void*)0)) {
      continue;
    }
    for (VAR_5 = 0; VAR_5 < VAR_3->nlocals - 1; VAR_5++) {
      if (VAR_1 == VAR_3->lv[VAR_5].name) {
        return (VAR_5+1)<<8 | (VAR_4+VAR_2);
      }
    }
  }

  return 0;
}
