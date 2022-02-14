
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mrb_context {TYPE_1__* cibase; TYPE_1__* ci; } ;
typedef int mrb_state ;
struct TYPE_2__ {scalar_t__ acc; } ;
typedef TYPE_1__ mrb_callinfo ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_1, struct mrb_context *VAR_2)
{
  mrb_callinfo *VAR_3;

  for (VAR_3 = VAR_2->ci; VAR_3 >= VAR_2->cibase; VAR_3--) {
    if (VAR_3->acc < 0) {
      FUNC_0(VAR_1, VAR_0, "can't cross C function boundary");
    }
  }
}
