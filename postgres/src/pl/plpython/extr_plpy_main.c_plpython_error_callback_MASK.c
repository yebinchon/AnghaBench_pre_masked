
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ is_procedure; } ;
struct TYPE_3__ {TYPE_2__* curr_proc; } ;
typedef TYPE_1__ PLyExecutionContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 PLyExecutionContext *VAR_1 = (PLyExecutionContext *) VAR_0;

 if (VAR_1->curr_proc)
 {
  if (VAR_1->curr_proc->is_procedure)
   FUNC_1("PL/Python procedure \"%s\"",
        FUNC_0(VAR_1->curr_proc));
  else
   FUNC_1("PL/Python function \"%s\"",
        FUNC_0(VAR_1->curr_proc));
 }
}
