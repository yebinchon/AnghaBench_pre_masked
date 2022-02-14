
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* es_param_exec_vals; } ;
struct TYPE_4__ {int * execPlan; int isnull; int value; } ;
typedef TYPE_1__ ParamExecData ;
typedef TYPE_2__ EState ;


 int FUNC_0 (char**,int *) ;
 int FUNC_1 (int*,char*,int) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, EState *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2, VAR_0, sizeof(int));
 VAR_0 += sizeof(int);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  ParamExecData *VAR_5;


  FUNC_1(&VAR_4, VAR_0, sizeof(int));
  VAR_0 += sizeof(int);
  VAR_5 = &(VAR_1->es_param_exec_vals[VAR_4]);


  VAR_5->value = FUNC_0(&VAR_0, &VAR_5->isnull);
  VAR_5->execPlan = ((void*)0);
 }
}
