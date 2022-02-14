
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_10__ {int height; int width; } ;
typedef TYPE_4__ xcb_get_geometry_reply_t ;
typedef int xcb_connection_t ;
typedef int uint32_t ;
struct gs_swap_chain {TYPE_3__* wi; TYPE_2__* device; } ;
struct TYPE_9__ {int window; } ;
struct TYPE_8__ {TYPE_1__* plat; } ;
struct TYPE_7__ {int display; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *,int ) ;

extern void FUNC_3(const struct gs_swap_chain *VAR_0, uint32_t *VAR_1,
        uint32_t *VAR_2)
{
 xcb_connection_t *VAR_3 =
  FUNC_0(VAR_0->device->plat->display);
 xcb_window_t VAR_4 = VAR_0->wi->window;

 xcb_get_geometry_reply_t *VAR_5 =
  FUNC_2(VAR_3, VAR_4);
 if (VAR_5) {
  *VAR_1 = VAR_5->width;
  *VAR_2 = VAR_5->height;
 }

 FUNC_1(VAR_5);
}
