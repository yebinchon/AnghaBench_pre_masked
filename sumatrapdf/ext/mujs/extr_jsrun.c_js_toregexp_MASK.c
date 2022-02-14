
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* object; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ u; } ;
typedef TYPE_4__ js_Value ;
typedef int js_State ;
typedef int js_Regexp ;
struct TYPE_6__ {int r; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 TYPE_4__* FUNC_1 (int *,int) ;

js_Regexp *FUNC_2(js_State *VAR_2, int VAR_3)
{
 js_Value *VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4->type == VAR_1 && VAR_4->u.object->type == VAR_0)
  return &VAR_4->u.object->u.r;
 FUNC_0(VAR_2, "not a regexp");
}
