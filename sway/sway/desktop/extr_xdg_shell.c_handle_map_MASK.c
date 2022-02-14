
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_18__ {int new_popup; } ;
struct TYPE_13__ {scalar_t__ height; scalar_t__ width; } ;
struct wlr_xdg_surface {TYPE_8__* toplevel; TYPE_6__ events; TYPE_10__* surface; TYPE_1__ geometry; } ;
struct wl_listener {int dummy; } ;
struct TYPE_21__ {int notify; } ;
struct sway_view {struct wlr_xdg_surface* wlr_xdg_surface; int xdg_decoration; scalar_t__ natural_height; scalar_t__ natural_width; } ;
struct sway_xdg_shell_view {TYPE_9__ set_app_id; TYPE_9__ set_title; TYPE_9__ request_resize; TYPE_9__ request_move; TYPE_9__ request_fullscreen; TYPE_9__ new_popup; TYPE_9__ commit; struct sway_view view; } ;
struct sway_server_decoration {TYPE_3__* wlr_server_decoration; } ;
struct TYPE_19__ {int set_app_id; int set_title; int request_resize; int request_move; int request_fullscreen; } ;
struct TYPE_16__ {int fullscreen_output; int fullscreen; } ;
struct TYPE_20__ {TYPE_7__ events; TYPE_4__ client_pending; } ;
struct TYPE_17__ {int commit; } ;
struct TYPE_15__ {scalar_t__ mode; } ;
struct TYPE_14__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_12__ {TYPE_5__ events; TYPE_2__ current; } ;


 scalar_t__ VAR_0 ;
 struct sway_server_decoration* FUNC_0 (TYPE_10__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (struct sway_view*,TYPE_10__*,int ,int ,int) ;
 struct sway_xdg_shell_view* FUNC_3 (struct wl_listener*,int ,int ) ;
 int FUNC_4 (int *,TYPE_9__*) ;
 struct sway_xdg_shell_view* VAR_9 ;

__attribute__((used)) static void FUNC_5(struct wl_listener *VAR_10, void *VAR_11) {
 struct sway_xdg_shell_view *VAR_12 =
  FUNC_3(VAR_10, VAR_12, VAR_8);
 struct sway_view *VAR_13 = &VAR_12->view;
 struct wlr_xdg_surface *VAR_14 = VAR_13->wlr_xdg_surface;

 VAR_13->natural_width = VAR_13->wlr_xdg_surface->geometry.width;
 VAR_13->natural_height = VAR_13->wlr_xdg_surface->geometry.height;
 if (!VAR_13->natural_width && !VAR_13->natural_height) {
  VAR_13->natural_width = VAR_13->wlr_xdg_surface->surface->current.width;
  VAR_13->natural_height = VAR_13->wlr_xdg_surface->surface->current.height;
 }

 bool VAR_15 = 0;

 if (!VAR_13->xdg_decoration) {
  struct sway_server_decoration *VAR_16 =
    FUNC_0(VAR_14->surface);
  VAR_15 = !VAR_16 || VAR_16->wlr_server_decoration->mode ==
   VAR_0;

 }

 FUNC_2(VAR_13, VAR_13->wlr_xdg_surface->surface,
  VAR_14->toplevel->client_pending.fullscreen,
  VAR_14->toplevel->client_pending.fullscreen_output,
  VAR_15);

 FUNC_1();

 VAR_12->commit.notify = VAR_1;
 FUNC_4(&VAR_14->surface->events.commit,
  &VAR_12->commit);

 VAR_12->new_popup.notify = VAR_2;
 FUNC_4(&VAR_14->events.new_popup,
  &VAR_12->new_popup);

 VAR_12->request_fullscreen.notify = VAR_3;
 FUNC_4(&VAR_14->toplevel->events.request_fullscreen,
   &VAR_12->request_fullscreen);

 VAR_12->request_move.notify = VAR_4;
 FUNC_4(&VAR_14->toplevel->events.request_move,
   &VAR_12->request_move);

 VAR_12->request_resize.notify = VAR_5;
 FUNC_4(&VAR_14->toplevel->events.request_resize,
   &VAR_12->request_resize);

 VAR_12->set_title.notify = VAR_7;
 FUNC_4(&VAR_14->toplevel->events.set_title,
   &VAR_12->set_title);

 VAR_12->set_app_id.notify = VAR_6;
 FUNC_4(&VAR_14->toplevel->events.set_app_id,
   &VAR_12->set_app_id);
}
