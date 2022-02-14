
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_4__ {scalar_t__ refcnt; } ;
typedef TYPE_1__ mrb_irep ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(mrb_state *VAR_0, mrb_irep *VAR_1)
{
  VAR_1->refcnt--;
  if (VAR_1->refcnt == 0) {
    FUNC_0(VAR_0, VAR_1);
  }
}
