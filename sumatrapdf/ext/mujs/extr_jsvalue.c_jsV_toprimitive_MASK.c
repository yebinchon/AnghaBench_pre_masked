
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {char* litstr; TYPE_4__* object; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ js_Value ;
struct TYPE_17__ {scalar_t__ strict; } ;
typedef TYPE_3__ js_State ;
struct TYPE_18__ {scalar_t__ type; } ;
typedef TYPE_4__ js_Object ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,char*) ;

void FUNC_5(js_State *VAR_6, js_Value *VAR_7, int VAR_8)
{
 js_Object *VAR_9;

 if (VAR_7->type != VAR_5)
  return;

 VAR_9 = VAR_7->u.object;

 if (VAR_8 == VAR_1)
  VAR_8 = VAR_9->type == VAR_0 ? VAR_3 : VAR_2;

 if (VAR_8 == VAR_3) {
  if (FUNC_0(VAR_6, VAR_9) || FUNC_1(VAR_6, VAR_9)) {
   *VAR_7 = *FUNC_3(VAR_6, -1);
   FUNC_2(VAR_6, 1);
   return;
  }
 } else {
  if (FUNC_1(VAR_6, VAR_9) || FUNC_0(VAR_6, VAR_9)) {
   *VAR_7 = *FUNC_3(VAR_6, -1);
   FUNC_2(VAR_6, 1);
   return;
  }
 }

 if (VAR_6->strict)
  FUNC_4(VAR_6, "cannot convert object to primitive");

 VAR_7->type = VAR_4;
 VAR_7->u.litstr = "[object]";
 return;
}
