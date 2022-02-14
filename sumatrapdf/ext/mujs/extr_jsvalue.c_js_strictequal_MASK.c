
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ number; scalar_t__ boolean; scalar_t__ object; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ js_Value ;
typedef int js_State ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(js_State *VAR_5)
{
 js_Value *VAR_6 = FUNC_2(VAR_5, -2);
 js_Value *VAR_7 = FUNC_2(VAR_5, -1);

 if (FUNC_0(VAR_6) && FUNC_0(VAR_7))
  return !FUNC_3(FUNC_1(VAR_6), FUNC_1(VAR_7));

 if (VAR_6->type != VAR_7->type) return 0;
 if (VAR_6->type == VAR_4) return 1;
 if (VAR_6->type == VAR_1) return 1;
 if (VAR_6->type == VAR_2) return VAR_6->u.number == VAR_7->u.number;
 if (VAR_6->type == VAR_0) return VAR_6->u.boolean == VAR_7->u.boolean;
 if (VAR_6->type == VAR_3) return VAR_6->u.object == VAR_7->u.object;
 return 0;
}
