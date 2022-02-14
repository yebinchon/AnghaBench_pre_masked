
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* object; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ js_Value ;
typedef int js_State ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_3__ js_Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 TYPE_2__* FUNC_1 (int *,int) ;

__attribute__((used)) static js_Object *FUNC_2(js_State *VAR_5, int VAR_6)
{
 js_Value *VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7->type == VAR_4 || VAR_7->type == VAR_2)
  return ((void*)0);
 if (VAR_7->type == VAR_3)
  if (VAR_7->u.object->type == VAR_1 || VAR_7->u.object->type == VAR_0)
   return VAR_7->u.object;
 FUNC_0(VAR_5, "not a function");
}
