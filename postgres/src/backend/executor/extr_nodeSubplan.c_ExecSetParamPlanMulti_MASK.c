
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ecxt_param_exec_vals; } ;
struct TYPE_5__ {int * execPlan; } ;
typedef TYPE_1__ ParamExecData ;
typedef TYPE_2__ ExprContext ;
typedef int Bitmapset ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int const*,int) ;

void
FUNC_3(const Bitmapset *VAR_0, ExprContext *VAR_1)
{
 int VAR_2;

 VAR_2 = -1;
 while ((VAR_2 = FUNC_2(VAR_0, VAR_2)) >= 0)
 {
  ParamExecData *VAR_3 = &(VAR_1->ecxt_param_exec_vals[VAR_2]);

  if (VAR_3->execPlan != ((void*)0))
  {

   FUNC_1(VAR_3->execPlan, VAR_1);

   FUNC_0(VAR_3->execPlan == ((void*)0));
  }
 }
}
