
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ estimate; } ;
typedef TYPE_1__ eval_const_expressions_context ;
typedef int Oid ;


 char VAR_0 ;
 char VAR_1 ;
 char FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(Oid VAR_2, eval_const_expressions_context *VAR_3)
{
 char VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == VAR_0)
  return 1;
 if (VAR_3->estimate && VAR_4 == VAR_1)
  return 1;
 return 0;
}
