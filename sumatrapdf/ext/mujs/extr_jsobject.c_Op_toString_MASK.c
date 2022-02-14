
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_5__ {char* tag; } ;
struct TYPE_6__ {TYPE_1__ user; } ;
struct TYPE_7__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ js_Object ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 TYPE_3__* FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(js_State *VAR_0)
{
 if (FUNC_2(VAR_0, 0))
  FUNC_3(VAR_0, "[object Undefined]");
 else if (FUNC_1(VAR_0, 0))
  FUNC_3(VAR_0, "[object Null]");
 else {
  js_Object *VAR_1 = FUNC_4(VAR_0, 0);
  switch (VAR_1->type) {
  case 132: FUNC_3(VAR_0, "[object Object]"); break;
  case 142: FUNC_3(VAR_0, "[object Array]"); break;
  case 137: FUNC_3(VAR_0, "[object Function]"); break;
  case 130: FUNC_3(VAR_0, "[object Function]"); break;
  case 140: FUNC_3(VAR_0, "[object Function]"); break;
  case 138: FUNC_3(VAR_0, "[object Error]"); break;
  case 141: FUNC_3(VAR_0, "[object Boolean]"); break;
  case 133: FUNC_3(VAR_0, "[object Number]"); break;
  case 129: FUNC_3(VAR_0, "[object String]"); break;
  case 131: FUNC_3(VAR_0, "[object RegExp]"); break;
  case 139: FUNC_3(VAR_0, "[object Date]"); break;
  case 134: FUNC_3(VAR_0, "[object Math]"); break;
  case 135: FUNC_3(VAR_0, "[object JSON]"); break;
  case 143: FUNC_3(VAR_0, "[object Arguments]"); break;
  case 136: FUNC_3(VAR_0, "[Iterator]"); break;
  case 128:
   FUNC_3(VAR_0, "[object ");
   FUNC_3(VAR_0, VAR_1->u.user.tag);
   FUNC_0(VAR_0);
   FUNC_3(VAR_0, "]");
   FUNC_0(VAR_0);
   break;
  }
 }
}
