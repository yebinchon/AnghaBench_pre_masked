
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_7__ {int args; scalar_t__ useOr; int opno; } ;
typedef int StringInfo ;
typedef TYPE_2__ ScalarArrayOpExpr ;
typedef int HeapTuple ;
typedef scalar_t__ Form_pg_operator ;
typedef int Expr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int ,char) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,char*,int ) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(ScalarArrayOpExpr *VAR_2, deparse_expr_cxt *VAR_3)
{
 StringInfo VAR_4 = VAR_3->buf;
 HeapTuple VAR_5;
 Form_pg_operator VAR_6;
 Expr *VAR_7;
 Expr *VAR_8;


 VAR_5 = FUNC_5(VAR_1, FUNC_3(VAR_2->opno));
 if (!FUNC_2(VAR_5))
  FUNC_10(VAR_0, "cache lookup failed for operator %u", VAR_2->opno);
 VAR_6 = (Form_pg_operator) FUNC_1(VAR_5);


 FUNC_0(FUNC_12(VAR_2->args) == 2);


 FUNC_7(VAR_4, '(');


 VAR_7 = FUNC_11(VAR_2->args);
 FUNC_8(VAR_7, VAR_3);
 FUNC_7(VAR_4, ' ');


 FUNC_9(VAR_4, VAR_6);
 FUNC_6(VAR_4, " %s (", VAR_2->useOr ? "ANY" : "ALL");


 VAR_8 = FUNC_13(VAR_2->args);
 FUNC_8(VAR_8, VAR_3);

 FUNC_7(VAR_4, ')');


 FUNC_7(VAR_4, ')');

 FUNC_4(VAR_5);
}
