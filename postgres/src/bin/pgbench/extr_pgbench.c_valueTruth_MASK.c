
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bval; double dval; int ival; } ;
struct TYPE_5__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ PgBenchValue ;


 int FUNC_0 (int ) ;





__attribute__((used)) static bool
FUNC_1(PgBenchValue *VAR_0)
{
 switch (VAR_0->type)
 {
  case 128:
   return 0;
  case 131:
   return VAR_0->u.bval;
  case 129:
   return VAR_0->u.ival != 0;
  case 130:
   return VAR_0->u.dval != 0.0;
  default:

   FUNC_0(0);
   return 0;
 }
}
