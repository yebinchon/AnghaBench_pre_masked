
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * subst_nodes; int * root; } ;
typedef TYPE_1__ convert_testexpr_context ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int List ;


 int * FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static Node *
FUNC_1(PlannerInfo *VAR_0,
     Node *VAR_1,
     List *VAR_2)
{
 convert_testexpr_context VAR_3;

 VAR_3.root = VAR_0;
 VAR_3.subst_nodes = VAR_2;
 return FUNC_0(VAR_1, &VAR_3);
}
