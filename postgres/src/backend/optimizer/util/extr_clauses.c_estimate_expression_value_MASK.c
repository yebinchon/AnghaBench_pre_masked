
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int estimate; int * case_val; int active_fns; int * root; int boundParams; } ;
typedef TYPE_2__ eval_const_expressions_context ;
struct TYPE_8__ {TYPE_1__* glob; } ;
struct TYPE_6__ {int boundParams; } ;
typedef TYPE_3__ PlannerInfo ;
typedef int Node ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_2__*) ;

Node *
FUNC_1(PlannerInfo *VAR_1, Node *VAR_2)
{
 eval_const_expressions_context VAR_3;

 VAR_3.boundParams = VAR_1->glob->boundParams;

 VAR_3.root = ((void*)0);
 VAR_3.active_fns = VAR_0;
 VAR_3.case_val = ((void*)0);
 VAR_3.estimate = 1;
 return FUNC_0(VAR_2, &VAR_3);
}
