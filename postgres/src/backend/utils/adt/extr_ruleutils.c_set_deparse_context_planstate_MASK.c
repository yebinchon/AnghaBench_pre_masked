
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ancestors; } ;
typedef TYPE_1__ deparse_namespace ;
typedef int PlanState ;
typedef int Node ;
typedef int List ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

List *
FUNC_4(List *VAR_0,
         Node *VAR_1, List *VAR_2)
{
 deparse_namespace *VAR_3;


 FUNC_0(FUNC_2(VAR_0) == 1);
 VAR_3 = (deparse_namespace *) FUNC_1(VAR_0);


 FUNC_3(VAR_3, (PlanState *) VAR_1);
 VAR_3->ancestors = VAR_2;

 return VAR_0;
}
