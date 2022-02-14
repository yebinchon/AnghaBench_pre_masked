
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int mrb_sym ;
typedef int mrb_state ;
struct TYPE_5__ {int rlen; struct TYPE_5__** reps; } ;
typedef TYPE_1__ mrb_irep ;


 size_t FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int *,TYPE_1__*,int *,int const*,int ) ;

__attribute__((used)) static size_t
FUNC_3(mrb_state *VAR_0, mrb_irep *VAR_1, uint8_t *VAR_2, mrb_sym const* VAR_3, uint16_t VAR_4)
{
  size_t VAR_5, VAR_6;
  int VAR_7;

  VAR_5 = VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  VAR_2 += VAR_6;
  for (VAR_7 = 0; VAR_7 < VAR_1->rlen; VAR_7++) {
    VAR_6 = FUNC_3(VAR_0, VAR_1->reps[VAR_7], VAR_2, VAR_3, VAR_4);
    VAR_2 += VAR_6;
    VAR_5 += VAR_6;
  }

  FUNC_1(VAR_5 == FUNC_0(VAR_0, VAR_1));
  return VAR_5;
}
