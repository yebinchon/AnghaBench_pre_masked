
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kind; int name; int args; } ;
typedef TYPE_1__ VariableSetStmt ;


 char* FUNC_0 (int ,int *,int) ;


 char* FUNC_1 (int ,int ) ;

char *
FUNC_2(VariableSetStmt *VAR_0)
{
 switch (VAR_0->kind)
 {
  case 128:
   return FUNC_1(VAR_0->name, VAR_0->args);
  case 129:
   return FUNC_0(VAR_0->name, ((void*)0), 0);
  default:
   return ((void*)0);
 }
}
