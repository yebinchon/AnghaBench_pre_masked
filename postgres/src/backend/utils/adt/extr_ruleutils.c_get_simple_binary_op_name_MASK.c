
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opno; int * args; } ;
typedef TYPE_1__ OpExpr ;
typedef int Node ;
typedef int List ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static const char *
FUNC_6(OpExpr *VAR_0)
{
 List *VAR_1 = VAR_0->args;

 if (FUNC_3(VAR_1) == 2)
 {

  Node *VAR_2 = (Node *) FUNC_2(VAR_1);
  Node *VAR_3 = (Node *) FUNC_4(VAR_1);
  const char *VAR_4;

  VAR_4 = FUNC_1(VAR_0->opno, FUNC_0(VAR_2), FUNC_0(VAR_3));
  if (FUNC_5(VAR_4) == 1)
   return VAR_4;
 }
 return ((void*)0);
}
