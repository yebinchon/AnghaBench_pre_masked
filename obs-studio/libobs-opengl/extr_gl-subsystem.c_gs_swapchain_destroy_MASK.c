
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int wi; TYPE_4__* device; } ;
typedef TYPE_1__ gs_swapchain_t ;
struct TYPE_7__ {TYPE_1__* cur_swap; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(gs_swapchain_t *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->device->cur_swap == VAR_0)
  FUNC_1(VAR_0->device, ((void*)0));

 FUNC_2(VAR_0);

 FUNC_3(VAR_0->wi);
 FUNC_0(VAR_0);
}
