
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int buf; TYPE_3__* root; } ;
typedef TYPE_2__ deparse_expr_cxt ;
struct TYPE_8__ {TYPE_1__* parse; } ;
struct TYPE_6__ {scalar_t__ limitOffset; scalar_t__ limitCount; } ;
typedef int StringInfo ;
typedef TYPE_3__ PlannerInfo ;
typedef int Expr ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(deparse_expr_cxt *VAR_0)
{
 PlannerInfo *VAR_1 = VAR_0->root;
 StringInfo VAR_2 = VAR_0->buf;
 int VAR_3;


 VAR_3 = FUNC_3();

 if (VAR_1->parse->limitCount)
 {
  FUNC_0(VAR_2, " LIMIT ");
  FUNC_1((Expr *) VAR_1->parse->limitCount, VAR_0);
 }
 if (VAR_1->parse->limitOffset)
 {
  FUNC_0(VAR_2, " OFFSET ");
  FUNC_1((Expr *) VAR_1->parse->limitOffset, VAR_0);
 }

 FUNC_2(VAR_3);
}
