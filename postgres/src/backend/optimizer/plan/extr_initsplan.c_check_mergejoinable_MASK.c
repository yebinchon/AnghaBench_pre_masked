
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int args; int opno; } ;
struct TYPE_4__ {int mergeopfamilies; scalar_t__ pseudoconstant; int * clause; } ;
typedef TYPE_1__ RestrictInfo ;
typedef TYPE_2__ OpExpr ;
typedef int Oid ;
typedef int Node ;
typedef int Expr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(RestrictInfo *VAR_0)
{
 Expr *VAR_1 = VAR_0->clause;
 Oid VAR_2;
 Node *VAR_3;

 if (VAR_0->pseudoconstant)
  return;
 if (!FUNC_3(VAR_1))
  return;
 if (FUNC_5(((OpExpr *) VAR_1)->args) != 2)
  return;

 VAR_2 = ((OpExpr *) VAR_1)->opno;
 VAR_3 = FUNC_4(((OpExpr *) VAR_1)->args);

 if (FUNC_6(VAR_2, FUNC_1(VAR_3)) &&
  !FUNC_0((Node *) VAR_1))
  VAR_0->mergeopfamilies = FUNC_2(VAR_2);






}
