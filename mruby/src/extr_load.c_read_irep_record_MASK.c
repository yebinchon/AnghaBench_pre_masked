
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mrb_state ;
struct TYPE_4__ {int rlen; struct TYPE_4__** reps; } ;
typedef TYPE_1__ mrb_irep ;


 TYPE_1__* FUNC_0 (int *,int const*,size_t*,int ) ;

__attribute__((used)) static mrb_irep*
FUNC_1(mrb_state *VAR_0, const uint8_t *VAR_1, size_t *VAR_2, uint8_t VAR_3)
{
  mrb_irep *VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  int VAR_5;

  if (VAR_4 == ((void*)0)) {
    return ((void*)0);
  }

  VAR_1 += *VAR_2;
  for (VAR_5=0; VAR_5<VAR_4->rlen; VAR_5++) {
    size_t VAR_6;

    VAR_4->reps[VAR_5] = FUNC_1(VAR_0, VAR_1, &VAR_6, VAR_3);
    if (VAR_4->reps[VAR_5] == ((void*)0)) {
      return ((void*)0);
    }
    VAR_1 += VAR_6;
    *VAR_2 += VAR_6;
  }
  return VAR_4;
}
