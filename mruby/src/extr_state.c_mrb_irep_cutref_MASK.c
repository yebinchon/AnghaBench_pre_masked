
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_4__ {int rlen; struct TYPE_4__** reps; } ;
typedef TYPE_1__ mrb_irep ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(mrb_state *VAR_0, mrb_irep *VAR_1)
{
  mrb_irep *VAR_2;
  int VAR_3;

  for (VAR_3=0; VAR_3<VAR_1->rlen; VAR_3++) {
    VAR_2 = VAR_1->reps[VAR_3];
    VAR_1->reps[VAR_3] = ((void*)0);
    if (VAR_2) FUNC_0(VAR_0, VAR_2);
  }
}
