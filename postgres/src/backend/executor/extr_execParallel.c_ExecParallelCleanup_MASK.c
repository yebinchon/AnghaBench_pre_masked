
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pcxt; int * area; int param_exec; scalar_t__ jit_instrumentation; int planstate; scalar_t__ instrumentation; } ;
typedef TYPE_1__ ParallelExecutorInfo ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(ParallelExecutorInfo *VAR_1)
{

 if (VAR_1->instrumentation)
  FUNC_2(VAR_1->planstate,
           VAR_1->instrumentation);


 if (VAR_1->jit_instrumentation)
  FUNC_3(VAR_1->planstate,
              VAR_1->jit_instrumentation);


 if (FUNC_1(VAR_1->param_exec))
 {
  FUNC_5(VAR_1->area, VAR_1->param_exec);
  VAR_1->param_exec = VAR_0;
 }
 if (VAR_1->area != ((void*)0))
 {
  FUNC_4(VAR_1->area);
  VAR_1->area = ((void*)0);
 }
 if (VAR_1->pcxt != ((void*)0))
 {
  FUNC_0(VAR_1->pcxt);
  VAR_1->pcxt = ((void*)0);
 }
 FUNC_6(VAR_1);
}
