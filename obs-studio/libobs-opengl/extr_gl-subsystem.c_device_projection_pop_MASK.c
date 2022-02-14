
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct matrix4 {int dummy; } ;
struct TYPE_6__ {int num; } ;
struct TYPE_5__ {TYPE_3__ proj_stack; struct matrix4 cur_proj; } ;
typedef TYPE_1__ gs_device_t ;


 struct matrix4* FUNC_0 (TYPE_3__) ;
 int FUNC_1 (TYPE_3__) ;

void FUNC_2(gs_device_t *VAR_0)
{
 struct matrix4 *VAR_1;
 if (!VAR_0->proj_stack.num)
  return;

 VAR_1 = FUNC_0(VAR_0->proj_stack);
 VAR_0->cur_proj = *VAR_1;
 FUNC_1(VAR_0->proj_stack);
}
