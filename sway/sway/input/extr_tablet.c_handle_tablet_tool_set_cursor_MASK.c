
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wlr_tablet_v2_event_cursor {int hotspot_y; int hotspot_x; int surface; TYPE_4__* seat_client; } ;
struct wlr_surface {int resource; } ;
struct wl_listener {int dummy; } ;
struct wl_client {int dummy; } ;
struct sway_tablet_tool {TYPE_1__* seat; } ;
struct sway_cursor {TYPE_5__* seat; } ;
struct TYPE_10__ {TYPE_3__* wlr_seat; } ;
struct TYPE_9__ {struct wl_client* client; } ;
struct TYPE_7__ {struct wlr_surface* focused_surface; } ;
struct TYPE_8__ {TYPE_2__ pointer_state; } ;
struct TYPE_6__ {struct sway_cursor* cursor; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_cursor*,int ,int ,int ,struct wl_client*) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 struct sway_tablet_tool* VAR_2 ;
 struct sway_tablet_tool* FUNC_3 (struct wl_listener*,int ,int ) ;
 struct wl_client* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_tablet_tool *VAR_5 =
  FUNC_3(VAR_3, VAR_5, VAR_1);
 struct wlr_tablet_v2_event_cursor *VAR_6 = VAR_4;

 struct sway_cursor *VAR_7 = VAR_5->seat->cursor;
 if (!FUNC_1(VAR_7->seat)) {
  return;
 }

 struct wl_client *VAR_8 = ((void*)0);
 struct wlr_surface *VAR_9 =
  VAR_7->seat->wlr_seat->pointer_state.focused_surface;
 if (VAR_9 != ((void*)0)) {
  VAR_8 = FUNC_4(VAR_9->resource);
 }


 if (VAR_8 == ((void*)0) ||
   VAR_6->seat_client->client != VAR_8) {
  FUNC_2(VAR_0, "denying request to set cursor from unfocused client");
  return;
 }

 FUNC_0(VAR_7, VAR_6->surface, VAR_6->hotspot_x,
   VAR_6->hotspot_y, VAR_8);
}
