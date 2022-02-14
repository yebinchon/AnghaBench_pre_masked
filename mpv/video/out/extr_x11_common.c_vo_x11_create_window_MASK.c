
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vo_x11_state {scalar_t__ window; scalar_t__ colormap; int mouse_cursor_set; int mouse_cursor_visible; scalar_t__ parent; scalar_t__ xim; scalar_t__ xic; int display; scalar_t__ rootwin; int screen; } ;
struct vo {struct vo_x11_state* x11; } ;
struct mp_rect {int y0; int x0; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_1__ XWindowAttributes ;
struct TYPE_9__ {int visual; int depth; } ;
typedef TYPE_2__ XVisualInfo ;
struct TYPE_10__ {scalar_t__ colormap; int border_pixel; } ;
typedef TYPE_3__ XSetWindowAttributes ;
typedef scalar_t__ Window ;
typedef int Atom ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mp_rect) ;
 int FUNC_1 (struct mp_rect) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct vo_x11_state*,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int,int ,scalar_t__,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,unsigned long,TYPE_3__*) ;
 int FUNC_6 (int ,scalar_t__,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,int ,int ,int ,TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int ,scalar_t__,int *,int) ;
 int VAR_12 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct vo*) ;
 int FUNC_11 (struct vo*) ;
 int FUNC_12 (struct vo*,int ,char*) ;
 int FUNC_13 (struct vo_x11_state*) ;
 int FUNC_14 (struct vo*) ;
 int FUNC_15 (struct vo*) ;
 int FUNC_16 (struct vo_x11_state*,int ) ;

__attribute__((used)) static void FUNC_17(struct vo *VAR_13, XVisualInfo *VAR_14,
                                 struct mp_rect VAR_15)
{
    struct vo_x11_state *VAR_16 = VAR_13->x11;

    FUNC_9(VAR_16->window == VAR_4);
    FUNC_9(!VAR_16->xic);

    XVisualInfo VAR_17;
    if (!VAR_14) {
        VAR_14 = &VAR_17;
        XWindowAttributes VAR_18;
        FUNC_6(VAR_16->display, VAR_16->rootwin, &VAR_18);
        FUNC_7(VAR_16->display, VAR_16->screen, VAR_18.depth, VAR_5, VAR_14);
    }

    if (VAR_16->colormap == VAR_4) {
        VAR_16->colormap = FUNC_3(VAR_16->display, VAR_16->rootwin,
                                        VAR_14->visual, VAR_0);
    }

    unsigned long VAR_19 = VAR_1 | VAR_2;
    XSetWindowAttributes VAR_20 = {
        .border_pixel = 0,
        .colormap = VAR_16->colormap,
    };

    Window VAR_21 = VAR_16->parent;
    if (!VAR_21)
        VAR_21 = VAR_16->rootwin;

    VAR_16->window =
        FUNC_5(VAR_16->display, VAR_21, VAR_15.x0, VAR_15.y0, FUNC_1(VAR_15), FUNC_0(VAR_15), 0,
                      VAR_14->depth, VAR_3, VAR_14->visual, VAR_19, &VAR_20);
    Atom VAR_22[1] = {FUNC_2(VAR_16, VAR_6)};
    FUNC_8(VAR_16->display, VAR_16->window, VAR_22, 1);

    VAR_16->mouse_cursor_set = 0;
    VAR_16->mouse_cursor_visible = 1;
    FUNC_10(VAR_13);

    if (VAR_16->xim) {
        VAR_16->xic = FUNC_4(VAR_16->xim,
                             VAR_11, VAR_7 | VAR_8,
                             VAR_9, VAR_16->window,
                             VAR_10, VAR_16->window,
                             ((void*)0));
    }

    if (!VAR_16->parent) {
        FUNC_14(VAR_13);
        FUNC_13(VAR_16);
        FUNC_15(VAR_13);
        FUNC_11(VAR_13);
        FUNC_12(VAR_13, FUNC_2(VAR_16, VAR_12), "dark");
    }
    FUNC_16(VAR_16, 0);
}
