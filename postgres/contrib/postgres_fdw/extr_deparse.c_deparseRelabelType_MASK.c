
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_7__ {scalar_t__ relabelformat; int resulttypmod; int resulttype; int arg; } ;
typedef TYPE_2__ RelabelType ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(RelabelType *VAR_1, deparse_expr_cxt *VAR_2)
{
 FUNC_1(VAR_1->arg, VAR_2);
 if (VAR_1->relabelformat != VAR_0)
  FUNC_0(VAR_2->buf, "::%s",
       FUNC_2(VAR_1->resulttype,
             VAR_1->resulttypmod));
}
