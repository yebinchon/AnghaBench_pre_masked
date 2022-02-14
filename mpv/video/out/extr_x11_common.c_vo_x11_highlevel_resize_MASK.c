
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
struct vo_x11_state {int size_changed_during_fs; int pos_changed_during_fs; struct mp_rect nofsrc; } ;
struct vo {struct vo_x11_state* x11; struct mp_vo_opts* opts; } ;
struct mp_vo_opts {int force_window_position; scalar_t__ fullscreen; } ;


 scalar_t__ FUNC_0 (struct mp_rect) ;
 scalar_t__ FUNC_1 (struct mp_rect) ;
 int FUNC_2 (struct vo*,int,int,struct mp_rect) ;
 int FUNC_3 (struct vo*,struct mp_rect,int) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0, struct mp_rect VAR_1)
{
    struct mp_vo_opts *VAR_2 = VAR_0->opts;
    struct vo_x11_state *VAR_3 = VAR_0->x11;

    bool VAR_4 = VAR_2->force_window_position;
    if (VAR_4) {
        VAR_3->nofsrc = VAR_1;
    } else {
        VAR_3->nofsrc.x1 = VAR_3->nofsrc.x0 + FUNC_1(VAR_1);
        VAR_3->nofsrc.y1 = VAR_3->nofsrc.y0 + FUNC_0(VAR_1);
    }

    if (VAR_2->fullscreen) {
        VAR_3->size_changed_during_fs = 1;
        VAR_3->pos_changed_during_fs = VAR_4;
        FUNC_3(VAR_0, VAR_1, 0);
    } else {
        FUNC_2(VAR_0, VAR_4, 1, VAR_1);
    }
}
