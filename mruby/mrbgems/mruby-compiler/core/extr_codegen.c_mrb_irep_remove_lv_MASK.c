
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_3__ {int rlen; struct TYPE_3__** reps; int * lv; } ;
typedef TYPE_1__ mrb_irep ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(mrb_state *VAR_0, mrb_irep *VAR_1)
{
  int VAR_2;

  if (VAR_1->lv) {
    FUNC_0(VAR_0, VAR_1->lv);
    VAR_1->lv = ((void*)0);
  }

  for (VAR_2 = 0; VAR_2 < VAR_1->rlen; ++VAR_2) {
    FUNC_1(VAR_0, VAR_1->reps[VAR_2]);
  }
}
