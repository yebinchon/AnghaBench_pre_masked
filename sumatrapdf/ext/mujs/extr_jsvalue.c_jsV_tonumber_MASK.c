
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {double boolean; double number; TYPE_1__* memstr; int litstr; int shrstr; } ;
struct TYPE_8__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ js_Value ;
typedef int js_State ;
struct TYPE_6__ {int p; } ;


 int VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;

double FUNC_2(js_State *VAR_2, js_Value *VAR_3)
{
 switch (VAR_3->type) {
 default:
 case 129: return FUNC_0(VAR_2, VAR_3->u.shrstr);
 case 128: return VAR_1;
 case 132: return 0;
 case 135: return VAR_3->u.boolean;
 case 131: return VAR_3->u.number;
 case 134: return FUNC_0(VAR_2, VAR_3->u.litstr);
 case 133: return FUNC_0(VAR_2, VAR_3->u.memstr->p);
 case 130:
  FUNC_1(VAR_2, VAR_3, VAR_0);
  return FUNC_2(VAR_2, VAR_3);
 }
}
