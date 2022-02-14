
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_10__ {char oprkind; } ;
struct TYPE_9__ {int args; int opno; } ;
typedef int StringInfo ;
typedef TYPE_2__ OpExpr ;
typedef int ListCell ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_operator ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_3__*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(OpExpr *VAR_2, deparse_expr_cxt *VAR_3)
{
 StringInfo VAR_4 = VAR_3->buf;
 HeapTuple VAR_5;
 Form_pg_operator VAR_6;
 char VAR_7;
 ListCell *VAR_8;


 VAR_5 = FUNC_5(VAR_1, FUNC_3(VAR_2->opno));
 if (!FUNC_2(VAR_5))
  FUNC_9(VAR_0, "cache lookup failed for operator %u", VAR_2->opno);
 VAR_6 = (Form_pg_operator) FUNC_1(VAR_5);
 VAR_7 = VAR_6->oprkind;


 FUNC_0((VAR_7 == 'r' && FUNC_12(VAR_2->args) == 1) ||
     (VAR_7 == 'l' && FUNC_12(VAR_2->args) == 1) ||
     (VAR_7 == 'b' && FUNC_12(VAR_2->args) == 2));


 FUNC_6(VAR_4, '(');


 if (VAR_7 == 'r' || VAR_7 == 'b')
 {
  VAR_8 = FUNC_11(VAR_2->args);
  FUNC_7(FUNC_10(VAR_8), VAR_3);
  FUNC_6(VAR_4, ' ');
 }


 FUNC_8(VAR_4, VAR_6);


 if (VAR_7 == 'l' || VAR_7 == 'b')
 {
  VAR_8 = FUNC_13(VAR_2->args);
  FUNC_6(VAR_4, ' ');
  FUNC_7(FUNC_10(VAR_8), VAR_3);
 }

 FUNC_6(VAR_4, ')');

 FUNC_4(VAR_5);
}
