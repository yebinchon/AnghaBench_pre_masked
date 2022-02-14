
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* wi; } ;
typedef TYPE_3__ gs_swapchain_t ;
struct TYPE_10__ {TYPE_2__* plat; TYPE_3__* cur_swap; } ;
typedef TYPE_4__ gs_device_t ;
typedef int XID ;
struct TYPE_8__ {int pbuffer; int context; int * display; } ;
struct TYPE_7__ {int window; } ;
typedef int GLXPbuffer ;
typedef int GLXContext ;
typedef int Display ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int ,int ) ;

extern void FUNC_2(gs_device_t *VAR_1, gs_swapchain_t *VAR_2)
{
 if (VAR_1->cur_swap == VAR_2)
  return;

 Display *VAR_3 = VAR_1->plat->display;
 GLXContext VAR_4 = VAR_1->plat->context;

 VAR_1->cur_swap = VAR_2;

 if (VAR_2) {
  XID VAR_5 = VAR_2->wi->window;
  if (!FUNC_1(VAR_3, VAR_5, VAR_5, VAR_4)) {
   FUNC_0(VAR_0, "Failed to make context current.");
  }
 } else {
  GLXPbuffer VAR_6 = VAR_1->plat->pbuffer;
  if (!FUNC_1(VAR_3, VAR_6, VAR_6, VAR_4)) {
   FUNC_0(VAR_0, "Failed to make context current.");
  }
 }
}
