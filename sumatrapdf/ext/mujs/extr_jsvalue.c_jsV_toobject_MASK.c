
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * object; TYPE_1__* memstr; int litstr; int number; int boolean; int shrstr; } ;
struct TYPE_7__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ js_Value ;
typedef int js_State ;
typedef int js_Object ;
struct TYPE_5__ {int p; } ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;

js_Object *FUNC_4(js_State *VAR_0, js_Value *VAR_1)
{
 switch (VAR_1->type) {
 default:
 case 129: return FUNC_2(VAR_0, VAR_1->u.shrstr);
 case 128: FUNC_3(VAR_0, "cannot convert undefined to object");
 case 132: FUNC_3(VAR_0, "cannot convert null to object");
 case 135: return FUNC_0(VAR_0, VAR_1->u.boolean);
 case 131: return FUNC_1(VAR_0, VAR_1->u.number);
 case 134: return FUNC_2(VAR_0, VAR_1->u.litstr);
 case 133: return FUNC_2(VAR_0, VAR_1->u.memstr->p);
 case 130: return VAR_1->u.object;
 }
}
