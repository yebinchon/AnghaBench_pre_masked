
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ExprState {TYPE_2__* parent; } ;
struct TYPE_6__ {int (* compile_expr ) (struct ExprState*) ;} ;
struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_4__ {int es_jit_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct ExprState*) ;

bool
FUNC_2(struct ExprState *VAR_3)
{
 if (!VAR_3->parent)
  return 0;


 if (!(VAR_3->parent->state->es_jit_flags & VAR_1))
  return 0;


 if (!(VAR_3->parent->state->es_jit_flags & VAR_0))
  return 0;


 if (FUNC_0())
  return VAR_2.compile_expr(VAR_3);

 return 0;
}
