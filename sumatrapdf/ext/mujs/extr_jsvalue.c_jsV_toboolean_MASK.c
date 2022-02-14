
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int boolean; TYPE_1__* memstr; int * litstr; int number; int * shrstr; } ;
struct TYPE_7__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ js_Value ;
typedef int js_State ;
struct TYPE_5__ {int * p; } ;
 int FUNC_0 (int ) ;

int FUNC_1(js_State *VAR_0, js_Value *VAR_1)
{
 switch (VAR_1->type) {
 default:
 case 129: return VAR_1->u.shrstr[0] != 0;
 case 128: return 0;
 case 132: return 0;
 case 135: return VAR_1->u.boolean;
 case 131: return VAR_1->u.number != 0 && !FUNC_0(VAR_1->u.number);
 case 134: return VAR_1->u.litstr[0] != 0;
 case 133: return VAR_1->u.memstr->p[0] != 0;
 case 130: return 1;
 }
}
