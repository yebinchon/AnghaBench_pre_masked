
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expr; } ;
typedef TYPE_1__ TargetEntry ;
typedef int SortGroupClause ;
typedef int Node ;
typedef int List ;


 TYPE_1__* FUNC_0 (int *,int *) ;

Node *
FUNC_1(SortGroupClause *VAR_0, List *VAR_1)
{
 TargetEntry *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return (Node *) VAR_2->expr;
}
