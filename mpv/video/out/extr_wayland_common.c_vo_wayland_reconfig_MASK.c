
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl_output {int dummy; } ;
struct vo_win_geometry {int dummy; } ;
struct TYPE_3__ {int x1; int y1; scalar_t__ y0; scalar_t__ x0; } ;
struct vo_wayland_state {int scaling; int configured; float aspect_ratio; int display; int pending_vo_events; int surface; int xdg_toplevel; struct vo_wayland_output* current_output; TYPE_1__ geometry; scalar_t__ fullscreen; TYPE_1__ window_size; int maximized; } ;
struct mp_rect {int member_0; } ;
struct vo_wayland_output {int scale; struct mp_rect geometry; struct wl_output* output; } ;
struct vo {int dwidth; int dheight; TYPE_2__* opts; struct vo_wayland_state* wl; } ;
struct TYPE_4__ {int fsscreen_id; scalar_t__ fullscreen; int hidpi_window_scale; } ;


 int FUNC_0 (struct vo_wayland_state*,char*,int) ;
 int FUNC_1 (struct vo_wayland_state*,char*) ;
 int VAR_0 ;
 struct vo_wayland_output* FUNC_2 (struct vo_wayland_state*,int) ;
 int FUNC_3 (struct mp_rect) ;
 int FUNC_4 (struct mp_rect) ;
 scalar_t__ FUNC_5 (struct vo_wayland_state*) ;
 int FUNC_6 (struct vo*,struct vo_win_geometry*) ;
 int FUNC_7 (struct vo*,struct mp_rect*,struct vo_win_geometry*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,struct wl_output*) ;

int FUNC_12(struct vo *VAR_1)
{
    struct wl_output *VAR_2 = ((void*)0);
    struct mp_rect VAR_3 = { 0 };
    struct vo_wayland_state *VAR_4 = VAR_1->wl;

    FUNC_1(VAR_4, "Reconfiguring!\n");

    if (!VAR_4->current_output) {
        int VAR_5 = 0;
        if (VAR_1->opts->fullscreen && (VAR_1->opts->fsscreen_id >= 0))
            VAR_5 = VAR_1->opts->fsscreen_id;
        struct vo_wayland_output *VAR_6 = FUNC_2(VAR_4, VAR_5);
        if (!VAR_6) {
            FUNC_0(VAR_4, "Screen index %i not found/unavailable!\n", VAR_5);
        } else {
            VAR_2 = VAR_6->output;
            VAR_4->current_output = VAR_6;
            if (!VAR_1->opts->hidpi_window_scale)
                VAR_6->scale = 1;
            VAR_4->scaling = VAR_6->scale;
            VAR_3 = VAR_4->current_output->geometry;
        }
    }

    struct vo_win_geometry VAR_7;
    FUNC_7(VAR_1, &VAR_3, &VAR_7);
    FUNC_6(VAR_1, &VAR_7);

    if (!VAR_4->configured || !VAR_4->maximized) {
        VAR_4->geometry.x0 = 0;
        VAR_4->geometry.y0 = 0;
        VAR_4->geometry.x1 = VAR_1->dwidth / VAR_4->scaling;
        VAR_4->geometry.y1 = VAR_1->dheight / VAR_4->scaling;
        VAR_4->window_size = VAR_4->geometry;
    }

    VAR_4->aspect_ratio = VAR_1->dwidth / (float)VAR_1->dheight;

    if (VAR_1->opts->fullscreen) {

        if (VAR_4->fullscreen && VAR_4->current_output) {
            VAR_4->geometry.x0 = 0;
            VAR_4->geometry.y0 = 0;
            VAR_4->geometry.x1 = FUNC_4(VAR_4->current_output->geometry)/VAR_4->scaling;
            VAR_4->geometry.y1 = FUNC_3(VAR_4->current_output->geometry)/VAR_4->scaling;
        } else {
            if (VAR_1->opts->fsscreen_id < 0) {
                FUNC_11(VAR_4->xdg_toplevel, ((void*)0));
            } else {
                FUNC_11(VAR_4->xdg_toplevel, VAR_2);
            }
        }
    }

    FUNC_10(VAR_4->surface, VAR_4->scaling);
    FUNC_9(VAR_4->surface);
    VAR_4->pending_vo_events |= VAR_0;
    if (!VAR_4->configured) {
        if (FUNC_5(VAR_4))
            return 0;
        FUNC_8(VAR_4->display);
        VAR_4->configured = 1;
    }

    return 1;
}
