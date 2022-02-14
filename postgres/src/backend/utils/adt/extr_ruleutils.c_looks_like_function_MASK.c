
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int funcformat; } ;
typedef int Node ;
typedef TYPE_1__ FuncExpr ;


 int VAR_0 ;






 int FUNC_0 (int *) ;

__attribute__((used)) static bool
FUNC_1(Node *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return 0;
 switch (FUNC_0(VAR_1))
 {
  case 132:

   return (((FuncExpr *) VAR_1)->funcformat == VAR_0);
  case 130:
  case 133:
  case 131:
  case 129:
  case 128:

   return 1;
  default:
   break;
 }
 return 0;
}
