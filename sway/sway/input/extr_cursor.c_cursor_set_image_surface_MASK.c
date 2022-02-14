
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct wl_client {int dummy; } ;
struct sway_cursor {int cursor; scalar_t__ hidden; struct wl_client* image_client; void* hotspot_y; void* hotspot_x; struct wlr_surface* image_surface; int * image; TYPE_2__* seat; } ;
typedef void* int32_t ;
struct TYPE_4__ {TYPE_1__* wlr_seat; } ;
struct TYPE_3__ {int capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wlr_surface*,void*,void*) ;

void FUNC_1(struct sway_cursor *VAR_1,
  struct wlr_surface *VAR_2, int32_t VAR_3, int32_t VAR_4,
  struct wl_client *VAR_5) {
 if (!(VAR_1->seat->wlr_seat->capabilities & VAR_0)) {
  return;
 }

 VAR_1->image = ((void*)0);
 VAR_1->image_surface = VAR_2;
 VAR_1->hotspot_x = VAR_3;
 VAR_1->hotspot_y = VAR_4;
 VAR_1->image_client = VAR_5;

 if (VAR_1->hidden) {
  return;
 }

 FUNC_0(VAR_1->cursor, VAR_2, VAR_3, VAR_4);
}
