
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_7__* object; TYPE_2__* memstr; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_3__ js_Value ;
struct TYPE_11__ {int top; TYPE_3__* stack; } ;
typedef TYPE_4__ js_State ;
struct TYPE_12__ {int gcmark; } ;
struct TYPE_9__ {int gcmark; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int,TYPE_7__*) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_2, int VAR_3)
{
 js_Value *VAR_4 = VAR_2->stack;
 int VAR_5 = VAR_2->top;
 while (VAR_5--) {
  if (VAR_4->type == VAR_0 && VAR_4->u.memstr->gcmark != VAR_3)
   VAR_4->u.memstr->gcmark = VAR_3;
  if (VAR_4->type == VAR_1 && VAR_4->u.object->gcmark != VAR_3)
   FUNC_0(VAR_2, VAR_3, VAR_4->u.object);
  ++VAR_4;
 }
}
