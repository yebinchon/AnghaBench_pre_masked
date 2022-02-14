
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ PgBenchValue ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static char *
FUNC_1(PgBenchValue *VAR_5)
{
 if (VAR_5->type == VAR_3)
  return "none";
 else if (VAR_5->type == VAR_4)
  return "null";
 else if (VAR_5->type == VAR_2)
  return "int";
 else if (VAR_5->type == VAR_1)
  return "double";
 else if (VAR_5->type == VAR_0)
  return "boolean";
 else
 {

  FUNC_0(0);
  return ((void*)0);
 }
}
