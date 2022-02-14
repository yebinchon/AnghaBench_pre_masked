
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef int mrb_state ;
struct TYPE_4__ {scalar_t__ rlen; scalar_t__ nregs; scalar_t__ nlocals; } ;
typedef TYPE_1__ mrb_irep ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static ptrdiff_t
FUNC_3(mrb_state *VAR_0, mrb_irep *VAR_1, uint8_t *VAR_2)
{
  uint8_t *VAR_3 = VAR_2;

  VAR_3 += FUNC_2((uint32_t)FUNC_0(VAR_0, VAR_1), VAR_3);
  VAR_3 += FUNC_1((uint16_t)VAR_1->nlocals, VAR_3);
  VAR_3 += FUNC_1((uint16_t)VAR_1->nregs, VAR_3);
  VAR_3 += FUNC_1((uint16_t)VAR_1->rlen, VAR_3);

  return VAR_3 - VAR_2;
}
