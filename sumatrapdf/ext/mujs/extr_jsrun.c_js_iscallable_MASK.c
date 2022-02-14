
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* object; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ js_Value ;
typedef int js_State ;
struct TYPE_5__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (int *,int) ;

int FUNC_1(js_State *VAR_4, int VAR_5)
{
 js_Value *VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6->type == VAR_3)
  return VAR_6->u.object->type == VAR_1 ||
   VAR_6->u.object->type == VAR_2 ||
   VAR_6->u.object->type == VAR_0;
 return 0;
}
