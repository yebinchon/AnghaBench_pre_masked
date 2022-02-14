
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bval; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ PgBenchValue ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 char* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_2(PgBenchValue *VAR_2, bool *VAR_3)
{
 if (VAR_2->type == VAR_0)
 {
  *VAR_3 = VAR_2->u.bval;
  return 1;
 }
 else
 {
  FUNC_0(VAR_1, "cannot coerce %s to boolean\n", FUNC_1(VAR_2));
  *VAR_3 = 0;
  return 0;
 }
}
