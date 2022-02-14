
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ opfuncid; int opno; } ;
typedef TYPE_1__ OpExpr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1(OpExpr *VAR_1)
{
 if (VAR_1->opfuncid == VAR_0)
  VAR_1->opfuncid = FUNC_0(VAR_1->opno);
}
