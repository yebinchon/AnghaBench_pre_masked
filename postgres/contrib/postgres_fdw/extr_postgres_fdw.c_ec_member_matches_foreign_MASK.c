
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * current; int already_used; } ;
typedef TYPE_1__ ec_member_foreign_arg ;
struct TYPE_5__ {int * em_expr; } ;
typedef int RelOptInfo ;
typedef int PlannerInfo ;
typedef int Expr ;
typedef TYPE_2__ EquivalenceMember ;
typedef int EquivalenceClass ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static bool
FUNC_2(PlannerInfo *VAR_0, RelOptInfo *VAR_1,
        EquivalenceClass *VAR_2, EquivalenceMember *VAR_3,
        void *VAR_4)
{
 ec_member_foreign_arg *VAR_5 = (ec_member_foreign_arg *) VAR_4;
 Expr *VAR_6 = VAR_3->em_expr;





 if (VAR_5->current != ((void*)0))
  return FUNC_0(VAR_6, VAR_5->current);




 if (FUNC_1(VAR_5->already_used, VAR_6))
  return 0;


 VAR_5->current = VAR_6;
 return 1;
}
