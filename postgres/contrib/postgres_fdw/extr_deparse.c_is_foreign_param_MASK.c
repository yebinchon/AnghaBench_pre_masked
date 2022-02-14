
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int varlevelsup; int varno; } ;
typedef TYPE_2__ Var ;
struct TYPE_10__ {TYPE_1__* outerrel; } ;
struct TYPE_9__ {int relids; scalar_t__ fdw_private; } ;
struct TYPE_7__ {int relids; } ;
typedef int Relids ;
typedef TYPE_3__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_4__ PgFdwRelationInfo ;
typedef int Expr ;


 int FUNC_0 (TYPE_3__*) ;


 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

bool
FUNC_3(PlannerInfo *VAR_0,
     RelOptInfo *VAR_1,
     Expr *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return 0;

 switch (FUNC_2(VAR_2))
 {
  case 128:
   {

    Var *VAR_3 = (Var *) VAR_2;
    PgFdwRelationInfo *VAR_4 = (PgFdwRelationInfo *) (VAR_1->fdw_private);
    Relids VAR_5;

    if (FUNC_0(VAR_1))
     VAR_5 = VAR_4->outerrel->relids;
    else
     VAR_5 = VAR_1->relids;

    if (FUNC_1(VAR_3->varno, VAR_5) && VAR_3->varlevelsup == 0)
     return 0;
    else
     return 1;
    break;
   }
  case 129:

   return 1;
  default:
   break;
 }
 return 0;
}
