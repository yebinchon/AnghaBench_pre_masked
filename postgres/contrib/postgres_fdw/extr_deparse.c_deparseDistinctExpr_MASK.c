
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_7__ {int args; } ;
typedef int StringInfo ;
typedef TYPE_2__ DistinctExpr ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(DistinctExpr *VAR_0, deparse_expr_cxt *VAR_1)
{
 StringInfo VAR_2 = VAR_1->buf;

 FUNC_0(FUNC_5(VAR_0->args) == 2);

 FUNC_1(VAR_2, '(');
 FUNC_3(FUNC_4(VAR_0->args), VAR_1);
 FUNC_2(VAR_2, " IS DISTINCT FROM ");
 FUNC_3(FUNC_6(VAR_0->args), VAR_1);
 FUNC_1(VAR_2, ')');
}
