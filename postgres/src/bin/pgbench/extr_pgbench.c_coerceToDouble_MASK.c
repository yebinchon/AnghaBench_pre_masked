
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double dval; scalar_t__ ival; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ PgBenchValue ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 char* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_2(PgBenchValue *VAR_3, double *VAR_4)
{
 if (VAR_3->type == VAR_0)
 {
  *VAR_4 = VAR_3->u.dval;
  return 1;
 }
 else if (VAR_3->type == VAR_1)
 {
  *VAR_4 = (double) VAR_3->u.ival;
  return 1;
 }
 else
 {
  FUNC_0(VAR_2, "cannot coerce %s to double\n", FUNC_1(VAR_3));
  return 0;
 }
}
