
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_surface {int resource; } ;
struct wlr_seat_pointer_request_set_cursor_event {int hotspot_y; int hotspot_x; int surface; TYPE_3__* seat_client; } ;
struct wl_listener {int dummy; } ;
struct wl_client {int dummy; } ;
struct sway_cursor {TYPE_4__* seat; } ;
struct TYPE_8__ {TYPE_2__* wlr_seat; } ;
struct TYPE_7__ {struct wl_client* client; } ;
struct TYPE_5__ {struct wlr_surface* focused_surface; } ;
struct TYPE_6__ {TYPE_1__ pointer_state; } ;


 int VAR_0 ;
 struct sway_cursor* VAR_1 ;
 int FUNC_0 (struct sway_cursor*,int ,int ,int ,struct wl_client*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,char*) ;
 struct sway_cursor* FUNC_3 (struct wl_listener*,int ,int ) ;
 struct wl_client* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct wl_listener *VAR_3,
  void *VAR_4) {
 struct sway_cursor *VAR_5 =
  FUNC_3(VAR_3, VAR_5, VAR_2);
 if (!FUNC_1(VAR_5->seat)) {
  return;
 }
 struct wlr_seat_pointer_request_set_cursor_event *VAR_6 = VAR_4;

 struct wl_client *VAR_7 = ((void*)0);
 struct wlr_surface *VAR_8 =
  VAR_5->seat->wlr_seat->pointer_state.focused_surface;
 if (VAR_8 != ((void*)0)) {
  VAR_7 = FUNC_4(VAR_8->resource);
 }


 if (VAR_7 == ((void*)0) ||
   VAR_6->seat_client->client != VAR_7) {
  FUNC_2(VAR_0, "denying request to set cursor from unfocused client");
  return;
 }

 FUNC_0(VAR_5, VAR_6->surface, VAR_6->hotspot_x,
   VAR_6->hotspot_y, VAR_7);
}
