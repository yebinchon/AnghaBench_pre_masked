
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int mrb_state ;
struct TYPE_4__ {scalar_t__ nlocals; int lv; } ;
typedef TYPE_1__ mrb_irep ;


 int FUNC_0 (int *,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_0, mrb_irep *VAR_1, uint16_t VAR_2)
{
  if (!VAR_1->lv || VAR_2 >= VAR_1->nlocals || VAR_2 == 0) {
    FUNC_1("\n");
    return;
  }
  FUNC_1("\t;");
  FUNC_0(VAR_0, VAR_1, VAR_2);
  FUNC_1("\n");
}
