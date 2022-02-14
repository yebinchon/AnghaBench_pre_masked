
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ per_tuple; scalar_t__ startup; } ;
struct TYPE_5__ {TYPE_2__ total; int * root; } ;
typedef TYPE_1__ cost_qual_eval_context ;
typedef TYPE_2__ QualCost ;
typedef int PlannerInfo ;
typedef int Node ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(QualCost *VAR_0, Node *VAR_1, PlannerInfo *VAR_2)
{
 cost_qual_eval_context VAR_3;

 VAR_3.root = VAR_2;
 VAR_3.total.startup = 0;
 VAR_3.total.per_tuple = 0;

 FUNC_0(VAR_1, &VAR_3);

 *VAR_0 = VAR_3.total;
}
