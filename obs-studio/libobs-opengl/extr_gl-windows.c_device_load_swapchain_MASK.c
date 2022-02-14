
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* wi; } ;
typedef TYPE_4__ gs_swapchain_t ;
struct TYPE_12__ {TYPE_3__* plat; TYPE_4__* cur_swap; } ;
typedef TYPE_5__ gs_device_t ;
struct TYPE_8__ {scalar_t__ hdc; } ;
struct TYPE_10__ {int hrc; TYPE_1__ window; } ;
struct TYPE_9__ {scalar_t__ hdc; } ;
typedef scalar_t__ HDC ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(gs_device_t *VAR_1, gs_swapchain_t *VAR_2)
{
 HDC VAR_3 = VAR_1->plat->window.hdc;
 if (VAR_1->cur_swap == VAR_2)
  return;

 VAR_1->cur_swap = VAR_2;

 if (VAR_2)
  VAR_3 = VAR_2->wi->hdc;

 if (VAR_3) {
  if (!FUNC_1(VAR_3, VAR_1->plat->hrc))
   FUNC_0(VAR_0, "device_load_swapchain (GL) failed");
 }
}
