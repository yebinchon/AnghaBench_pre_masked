
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int mrb_state ;
struct TYPE_3__ {int slen; scalar_t__* syms; } ;
typedef TYPE_1__ mrb_irep ;
typedef scalar_t__ mrb_int ;


 int FUNC_0 (int *,scalar_t__,scalar_t__*) ;

__attribute__((used)) static size_t
FUNC_1(mrb_state *VAR_0, mrb_irep *VAR_1)
{
  size_t VAR_2 = 0;
  int VAR_3;
  mrb_int VAR_4;

  VAR_2 += sizeof(uint32_t);
  for (VAR_3 = 0; VAR_3 < VAR_1->slen; VAR_3++) {
    VAR_2 += sizeof(uint16_t);
    if (VAR_1->syms[VAR_3] != 0) {
      FUNC_0(VAR_0, VAR_1->syms[VAR_3], &VAR_4);
      VAR_2 += VAR_4 + 1;
    }
  }

  return VAR_2;
}
