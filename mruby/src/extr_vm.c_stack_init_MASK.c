
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mrb_context {int * stack; TYPE_2__* ci; TYPE_2__* cibase; TYPE_2__* ciend; int * stbase; int * stend; } ;
typedef int mrb_value ;
struct TYPE_5__ {int object_class; struct mrb_context* c; } ;
typedef TYPE_1__ mrb_state ;
struct TYPE_6__ {int * stackent; int target_class; } ;
typedef TYPE_2__ mrb_callinfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_2)
{
  struct mrb_context *VAR_3 = VAR_2->c;


  VAR_3->stbase = (mrb_value *)FUNC_0(VAR_2, VAR_1, sizeof(mrb_value));
  VAR_3->stend = VAR_3->stbase + VAR_1;
  VAR_3->stack = VAR_3->stbase;


  VAR_3->cibase = (mrb_callinfo *)FUNC_0(VAR_2, VAR_0, sizeof(mrb_callinfo));
  VAR_3->ciend = VAR_3->cibase + VAR_0;
  VAR_3->ci = VAR_3->cibase;
  VAR_3->ci->target_class = VAR_2->object_class;
  VAR_3->ci->stackent = VAR_3->stack;
}
