
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * partexprs; } ;
struct TYPE_5__ {scalar_t__ clause; } ;
typedef TYPE_1__ RestrictInfo ;
typedef TYPE_2__ RelOptInfo ;
typedef int Node ;
typedef int Expr ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(RestrictInfo *VAR_0,
         RelOptInfo *VAR_1, int VAR_2)
{
 Node *VAR_3 = (Node *) VAR_0->clause;
 Node *VAR_4 = (Node *) FUNC_3(VAR_1->partexprs[VAR_2]);


 if (FUNC_0(VAR_4, VAR_3))
  return 1;

 else if (FUNC_2(VAR_3))
 {
  Node *VAR_5 = (Node *) FUNC_1((Expr *) VAR_3);

  if (FUNC_0(VAR_4, VAR_5))
   return 1;
 }

 return 0;
}
