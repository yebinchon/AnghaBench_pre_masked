
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vo_x11_state {int window; int display; scalar_t__ parent; } ;
struct vo {struct vo_x11_state* x11; struct mp_vo_opts* opts; } ;
struct TYPE_8__ {scalar_t__ xy_valid; } ;
struct mp_vo_opts {scalar_t__ screen_id; scalar_t__ keepaspect_window; scalar_t__ keepaspect; scalar_t__ force_window_position; TYPE_1__ geometry; } ;
struct mp_rect {int y0; int x0; } ;
struct TYPE_10__ {int y; int x; } ;
struct TYPE_9__ {int y; int x; } ;
struct TYPE_11__ {int flags; int min_width; int min_height; int win_gravity; int height; TYPE_3__ max_aspect; int width; TYPE_2__ min_aspect; scalar_t__ max_height; scalar_t__ max_width; int y; int x; } ;
typedef TYPE_4__ XSizeHints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mp_rect) ;
 int FUNC_1 (struct mp_rect) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(struct vo *VAR_6, struct mp_rect VAR_7, bool VAR_8)
{
    struct mp_vo_opts *VAR_9 = VAR_6->opts;
    struct vo_x11_state *VAR_10 = VAR_6->x11;

    if (!VAR_10->window || VAR_10->parent)
        return;

    bool VAR_11 = VAR_9->geometry.xy_valid ||
                     VAR_9->force_window_position ||
                     VAR_9->screen_id >= 0 ||
                     VAR_10->parent ||
                     VAR_8;

    XSizeHints *VAR_12 = FUNC_2();
    if (!VAR_12)
        return;

    VAR_12->flags |= VAR_4 | (VAR_11 ? VAR_3 : 0);
    VAR_12->x = VAR_7.x0;
    VAR_12->y = VAR_7.y0;
    VAR_12->width = FUNC_1(VAR_7);
    VAR_12->height = FUNC_0(VAR_7);
    VAR_12->max_width = 0;
    VAR_12->max_height = 0;

    if (VAR_9->keepaspect && VAR_9->keepaspect_window) {
        VAR_12->flags |= VAR_1;
        VAR_12->min_aspect.x = VAR_12->width;
        VAR_12->min_aspect.y = VAR_12->height;
        VAR_12->max_aspect.x = VAR_12->width;
        VAR_12->max_aspect.y = VAR_12->height;
    }


    VAR_12->flags |= VAR_2;
    VAR_12->min_width = VAR_12->min_height = 4;




    VAR_12->flags |= VAR_5;
    VAR_12->win_gravity = VAR_0;

    FUNC_4(VAR_10->display, VAR_10->window, VAR_12);
    FUNC_3(VAR_12);
}
