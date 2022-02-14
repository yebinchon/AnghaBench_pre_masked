
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; scalar_t__ y1; } ;
struct vo_x11_state {scalar_t__ fs; int wm_type; int pos_changed_during_fs; int size_changed_during_fs; int display; int window; struct mp_rect screenrc; struct mp_rect nofsrc; struct mp_rect winrc; scalar_t__ parent; } ;
struct vo {struct vo_x11_state* x11; struct mp_vo_opts* opts; } ;
struct mp_vo_opts {scalar_t__ fullscreen; scalar_t__ ontop; scalar_t__ border; } ;


 int FUNC_0 (struct vo_x11_state*,char*) ;
 int FUNC_1 (struct mp_rect) ;
 int FUNC_2 (struct mp_rect) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (struct vo*,int) ;
 int FUNC_7 (struct vo*,int,int,struct mp_rect) ;
 int FUNC_8 (struct vo*,int) ;
 int FUNC_9 (struct vo*,struct mp_rect,int) ;
 int FUNC_10 (struct vo*) ;
 int FUNC_11 (struct vo*) ;
 int FUNC_12 (struct vo*) ;
 int FUNC_13 (struct vo_x11_state*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct vo *VAR_1)
{
    struct mp_vo_opts *VAR_2 = VAR_1->opts;
    struct vo_x11_state *VAR_3 = VAR_1->x11;

    if (VAR_2->fullscreen == VAR_3->fs)
        return;
    VAR_3->fs = VAR_2->fullscreen;
    if (VAR_3->parent || !VAR_3->window)
        return;


    if (VAR_3->fs) {
        FUNC_11(VAR_1);
        VAR_3->nofsrc = VAR_3->winrc;
    }

    struct mp_rect VAR_4 = VAR_3->nofsrc;

    if (VAR_3->wm_type & VAR_0) {
        FUNC_13(VAR_3, "_NET_WM_STATE_FULLSCREEN", VAR_3->fs);
        if (!VAR_3->fs && (VAR_3->pos_changed_during_fs ||
                         VAR_3->size_changed_during_fs))
        {
            if (VAR_3->screenrc.x0 == VAR_4.x0 && VAR_3->screenrc.x1 == VAR_4.x1 &&
                VAR_3->screenrc.y0 == VAR_4.y0 && VAR_3->screenrc.y1 == VAR_4.y1)
            {

                FUNC_0(VAR_3, "avoiding triggering old-style fullscreen\n");
                VAR_4.x1 -= 1;
                VAR_4.y1 -= 1;
            }
            FUNC_7(VAR_1, VAR_3->pos_changed_during_fs,
                                   VAR_3->size_changed_during_fs, VAR_4);
        }
    } else {
        if (VAR_3->fs) {
            FUNC_12(VAR_1);
            VAR_4 = VAR_3->screenrc;
        }

        FUNC_6(VAR_1, VAR_2->border && !VAR_3->fs);
        FUNC_9(VAR_1, VAR_4, 1);

        FUNC_4(VAR_3->display, VAR_3->window, VAR_4.x0, VAR_4.y0,
                          FUNC_2(VAR_4), FUNC_1(VAR_4));

        FUNC_8(VAR_1, VAR_3->fs || VAR_2->ontop);

        FUNC_5(VAR_3->display, VAR_3->window);
        FUNC_3(VAR_3->display);
    }

    VAR_3->size_changed_during_fs = 0;
    VAR_3->pos_changed_during_fs = 0;

    FUNC_10(VAR_1);
}
