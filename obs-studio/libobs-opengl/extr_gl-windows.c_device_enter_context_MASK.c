
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* plat; TYPE_3__* cur_swap; } ;
typedef TYPE_5__ gs_device_t ;
struct TYPE_7__ {int hdc; } ;
struct TYPE_10__ {int hrc; TYPE_1__ window; } ;
struct TYPE_9__ {TYPE_2__* wi; } ;
struct TYPE_8__ {int hdc; } ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(gs_device_t *VAR_1)
{
 HDC VAR_2 = VAR_1->plat->window.hdc;
 if (VAR_1->cur_swap)
  VAR_2 = VAR_1->cur_swap->wi->hdc;

 if (!FUNC_1(VAR_2, VAR_1->plat->hrc))
  FUNC_0(VAR_0, "device_enter_context (GL) failed");
}
