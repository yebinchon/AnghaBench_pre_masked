
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mrb_context {int status; scalar_t__ fib; } ;
struct RBasic {int dummy; } ;
struct TYPE_4__ {struct mrb_context* c; } ;
typedef TYPE_1__ mrb_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct RBasic*) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_1, struct mrb_context *VAR_2)
{
  if (VAR_1->c->fib) {
    FUNC_0(VAR_1, (struct RBasic*)VAR_1->c->fib);
  }
  VAR_2->status = VAR_0;
  VAR_1->c = VAR_2;
}
