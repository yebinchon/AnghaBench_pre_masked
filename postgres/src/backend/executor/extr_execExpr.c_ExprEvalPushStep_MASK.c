
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int steps_alloc; int steps_len; int * steps; } ;
typedef TYPE_1__ ExprState ;
typedef int ExprEvalStep ;


 int FUNC_0 (int *,int const*,int) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int *,int) ;

void
FUNC_3(ExprState *VAR_0, const ExprEvalStep *VAR_1)
{
 if (VAR_0->steps_alloc == 0)
 {
  VAR_0->steps_alloc = 16;
  VAR_0->steps = FUNC_1(sizeof(ExprEvalStep) * VAR_0->steps_alloc);
 }
 else if (VAR_0->steps_alloc == VAR_0->steps_len)
 {
  VAR_0->steps_alloc *= 2;
  VAR_0->steps = FUNC_2(VAR_0->steps,
        sizeof(ExprEvalStep) * VAR_0->steps_alloc);
 }

 FUNC_0(&VAR_0->steps[VAR_0->steps_len++], VAR_1, sizeof(ExprEvalStep));
}
