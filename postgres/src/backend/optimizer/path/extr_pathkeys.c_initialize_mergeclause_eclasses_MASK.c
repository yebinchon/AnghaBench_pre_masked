
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int inputcollid; int opno; } ;
struct TYPE_4__ {int mergeopfamilies; int nullable_relids; int * right_ec; int * left_ec; int * clause; } ;
typedef TYPE_1__ RestrictInfo ;
typedef int PlannerInfo ;
typedef TYPE_2__ OpExpr ;
typedef int Oid ;
typedef int Expr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (int *,int *,int ,int ,int ,int ,int ,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;

void
FUNC_5(PlannerInfo *VAR_1, RestrictInfo *VAR_2)
{
 Expr *VAR_3 = VAR_2->clause;
 Oid VAR_4,
    VAR_5;


 FUNC_0(VAR_2->mergeopfamilies != VAR_0);

 FUNC_0(VAR_2->left_ec == ((void*)0));
 FUNC_0(VAR_2->right_ec == ((void*)0));


 FUNC_4(((OpExpr *) VAR_3)->opno, &VAR_4, &VAR_5);


 VAR_2->left_ec =
  FUNC_1(VAR_1,
         (Expr *) FUNC_2(VAR_3),
         VAR_2->nullable_relids,
         VAR_2->mergeopfamilies,
         VAR_4,
         ((OpExpr *) VAR_3)->inputcollid,
         0,
         ((void*)0),
         1);
 VAR_2->right_ec =
  FUNC_1(VAR_1,
         (Expr *) FUNC_3(VAR_3),
         VAR_2->nullable_relids,
         VAR_2->mergeopfamilies,
         VAR_5,
         ((OpExpr *) VAR_3)->inputcollid,
         0,
         ((void*)0),
         1);
}
