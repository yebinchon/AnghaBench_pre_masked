
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* cdr; } ;
typedef TYPE_1__ node ;
typedef scalar_t__ mrb_sym ;
struct TYPE_6__ {TYPE_1__* lv; } ;
typedef TYPE_2__ codegen_scope ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(codegen_scope *VAR_0, mrb_sym VAR_1)
{
  node *VAR_2 = VAR_0->lv;
  int VAR_3 = 1;

  while (VAR_2) {
    if (FUNC_0(VAR_2) == VAR_1) return VAR_3;
    VAR_3++;
    VAR_2 = VAR_2->cdr;
  }
  return 0;
}
