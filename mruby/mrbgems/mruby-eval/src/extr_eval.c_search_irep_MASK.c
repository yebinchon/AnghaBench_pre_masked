
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rlen; struct TYPE_5__** reps; } ;
typedef TYPE_1__ mrb_irep ;



__attribute__((used)) static mrb_irep*
FUNC_0(mrb_irep *VAR_0, int VAR_1, int VAR_2, mrb_irep *VAR_3)
{
  int VAR_4;

  for (VAR_4=0; VAR_4<VAR_0->rlen; VAR_4++) {
    mrb_irep* VAR_5 = VAR_0->reps[VAR_4];

    if (VAR_5 == VAR_3) return VAR_0;
    VAR_5 = FUNC_0(VAR_5, VAR_1-1, VAR_2, VAR_3);
    if (VAR_5) {
      if (VAR_1 == VAR_2) return VAR_0;
      return VAR_5;
    }
  }
  return ((void*)0);
}
