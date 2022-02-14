
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* object; } ;
struct TYPE_7__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ js_Value ;
typedef int js_State ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int) ;

const char *FUNC_1(js_State *VAR_2, int VAR_3)
{
 js_Value *VAR_4 = FUNC_0(VAR_2, VAR_3);
 switch (VAR_4->type) {
 default:
 case 129: return "string";
 case 128: return "undefined";
 case 132: return "object";
 case 135: return "boolean";
 case 131: return "number";
 case 134: return "string";
 case 133: return "string";
 case 130:
  if (VAR_4->u.object->type == VAR_1 || VAR_4->u.object->type == VAR_0)
   return "function";
  return "object";
 }
}
