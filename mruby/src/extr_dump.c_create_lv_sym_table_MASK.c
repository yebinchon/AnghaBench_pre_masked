
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_state ;
struct TYPE_5__ {int nlocals; int rlen; struct TYPE_5__** reps; TYPE_1__* lv; } ;
typedef TYPE_2__ mrb_irep ;
struct TYPE_4__ {scalar_t__ name; } ;


 int FUNC_0 (scalar_t__*,int,scalar_t__ const) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_0, const mrb_irep *VAR_1, mrb_sym **VAR_2, uint32_t *VAR_3)
{
  int VAR_4;

  if (*VAR_2 == ((void*)0)) {
    *VAR_2 = (mrb_sym*)FUNC_1(VAR_0, sizeof(mrb_sym) * 1);
  }

  for (VAR_4 = 0; VAR_4 + 1 < VAR_1->nlocals; ++VAR_4) {
    mrb_sym const VAR_5 = VAR_1->lv[VAR_4].name;
    if (VAR_5 == 0) continue;
    if (FUNC_0(*VAR_2, *VAR_3, VAR_5) != -1) continue;

    ++(*VAR_3);
    *VAR_2 = (mrb_sym*)FUNC_2(VAR_0, *VAR_2, sizeof(mrb_sym) * (*VAR_3));
    (*VAR_2)[*VAR_3 - 1] = VAR_5;
  }

  for (VAR_4 = 0; VAR_4 < VAR_1->rlen; ++VAR_4) {
    FUNC_3(VAR_0, VAR_1->reps[VAR_4], VAR_2, VAR_3);
  }
}
