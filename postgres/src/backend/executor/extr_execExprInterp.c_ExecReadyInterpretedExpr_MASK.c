
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_7__ {TYPE_1__ casetest; } ;
struct TYPE_9__ {scalar_t__ opcode; TYPE_2__ d; } ;
struct TYPE_8__ {int steps_len; int flags; void* evalfunc_private; TYPE_4__* steps; int evalfunc; } ;
typedef TYPE_3__ ExprState ;
typedef TYPE_4__ ExprEvalStep ;
typedef scalar_t__ ExprEvalOp ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;

void
FUNC_3(ExprState *VAR_31)
{

 FUNC_2();


 FUNC_0(VAR_31->steps_len >= 1);
 FUNC_0(VAR_31->steps[VAR_31->steps_len - 1].opcode == VAR_5);






 if (VAR_31->flags & VAR_14)
  return;







 VAR_31->evalfunc = VAR_16;


 FUNC_0((VAR_31->flags & VAR_13) == 0);






 VAR_31->flags |= VAR_14;






 if (VAR_31->steps_len == 3)
 {
  ExprEvalOp VAR_32 = VAR_31->steps[0].opcode;
  ExprEvalOp VAR_33 = VAR_31->steps[1].opcode;

  if (VAR_32 == VAR_7 &&
   VAR_33 == VAR_8)
  {
   VAR_31->evalfunc_private = (void *) VAR_25;
   return;
  }
  else if (VAR_32 == VAR_9 &&
     VAR_33 == VAR_10)
  {
   VAR_31->evalfunc_private = (void *) VAR_27;
   return;
  }
  else if (VAR_32 == VAR_11 &&
     VAR_33 == VAR_12)
  {
   VAR_31->evalfunc_private = (void *) VAR_29;
   return;
  }
  else if (VAR_32 == VAR_7 &&
     VAR_33 == VAR_0)
  {
   VAR_31->evalfunc_private = (void *) VAR_18;
   return;
  }
  else if (VAR_32 == VAR_9 &&
     VAR_33 == VAR_1)
  {
   VAR_31->evalfunc_private = (void *) VAR_20;
   return;
  }
  else if (VAR_32 == VAR_11 &&
     VAR_33 == VAR_2)
  {
   VAR_31->evalfunc_private = (void *) VAR_22;
   return;
  }
  else if (VAR_32 == VAR_3 &&
     VAR_33 == VAR_6 &&
     VAR_31->steps[0].d.casetest.value)
  {
   VAR_31->evalfunc_private = (void *) VAR_17;
   return;
  }
 }
 else if (VAR_31->steps_len == 2)
 {
  ExprEvalOp VAR_34 = VAR_31->steps[0].opcode;

  if (VAR_34 == VAR_4)
  {
   VAR_31->evalfunc_private = (void *) VAR_24;
   return;
  }
  else if (VAR_34 == VAR_8)
  {
   VAR_31->evalfunc_private = (void *) VAR_26;
   return;
  }
  else if (VAR_34 == VAR_10)
  {
   VAR_31->evalfunc_private = (void *) VAR_28;
   return;
  }
  else if (VAR_34 == VAR_12)
  {
   VAR_31->evalfunc_private = (void *) VAR_30;
   return;
  }
  else if (VAR_34 == VAR_0)
  {
   VAR_31->evalfunc_private = (void *) VAR_19;
   return;
  }
  else if (VAR_34 == VAR_1)
  {
   VAR_31->evalfunc_private = (void *) VAR_21;
   return;
  }
  else if (VAR_34 == VAR_2)
  {
   VAR_31->evalfunc_private = (void *) VAR_23;
   return;
  }
 }
 VAR_31->evalfunc_private = (void *) VAR_15;
}
