
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relid; int * partition_qual; } ;
typedef int Relation ;
typedef TYPE_1__ RelOptInfo ;
typedef int Node ;
typedef int List ;
typedef int Expr ;


 int FUNC_0 (int *,int,int,int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(Relation VAR_0, RelOptInfo *VAR_1)
{
 List *VAR_2;

 if (VAR_1->partition_qual)
  return;
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
 {
  VAR_2 = (List *) FUNC_2((Expr *) VAR_2);
  if (VAR_1->relid != 1)
   FUNC_0((Node *) VAR_2, 1, VAR_1->relid, 0);
  VAR_1->partition_qual = VAR_2;
 }
}
