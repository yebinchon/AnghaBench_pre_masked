
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_6__ {TYPE_1__* c; } ;
typedef TYPE_2__ mrb_state ;
struct TYPE_7__ {scalar_t__ mid; } ;
typedef TYPE_3__ mrb_callinfo ;
struct TYPE_5__ {TYPE_3__* ci; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_callinfo *VAR_2 = VAR_0->c->ci;
  VAR_2--;
  if (VAR_2->mid)
    return FUNC_1(VAR_2->mid);
  else
    return FUNC_0();
}
