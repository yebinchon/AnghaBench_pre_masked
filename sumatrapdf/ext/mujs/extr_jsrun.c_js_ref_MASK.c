
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ object; int boolean; } ;
struct TYPE_10__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ js_Value ;
struct TYPE_11__ {int nextref; } ;
typedef TYPE_3__ js_State ;






 char* FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char const*) ;
 int FUNC_2 (char*,char*,void*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int) ;

const char *FUNC_4(js_State *VAR_0)
{
 js_Value *VAR_1 = FUNC_3(VAR_0, -1);
 const char *VAR_2;
 char VAR_3[32];
 switch (VAR_1->type) {
 case 128: VAR_2 = "_Undefined"; break;
 case 130: VAR_2 = "_Null"; break;
 case 131:
  VAR_2 = VAR_1->u.boolean ? "_True" : "_False";
  break;
 case 129:
  FUNC_2(VAR_3, "%p", (void*)VAR_1->u.object);
  VAR_2 = FUNC_0(VAR_0, VAR_3);
  break;
 default:
  FUNC_2(VAR_3, "%d", VAR_0->nextref++);
  VAR_2 = FUNC_0(VAR_0, VAR_3);
  break;
 }
 FUNC_1(VAR_0, VAR_2);
 return VAR_2;
}
