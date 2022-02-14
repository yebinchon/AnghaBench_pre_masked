
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_5__ {int dval; scalar_t__ ival; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ PgBenchValue ;


 int FUNC_0 (double) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (double) ;
 double FUNC_3 (int ) ;
 int VAR_2 ;
 char* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_5(PgBenchValue *VAR_3, int64 *VAR_4)
{
 if (VAR_3->type == VAR_1)
 {
  *VAR_4 = VAR_3->u.ival;
  return 1;
 }
 else if (VAR_3->type == VAR_0)
 {
  double VAR_5 = FUNC_3(VAR_3->u.dval);

  if (FUNC_2(VAR_5) || !FUNC_0(VAR_5))
  {
   FUNC_1(VAR_2, "double to int overflow for %f\n", VAR_5);
   return 0;
  }
  *VAR_4 = (int64) VAR_5;
  return 1;
 }
 else
 {
  FUNC_1(VAR_2, "cannot coerce %s to int\n", FUNC_4(VAR_3));
  return 0;
 }
}
