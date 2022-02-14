
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ method; } ;
struct xvctx {int vo_gc; int xv_colorkey; TYPE_1__ xv_ck_info; } ;
struct vo_x11_state {int window; int display; } ;
struct vo {struct vo_x11_state* x11; struct xvctx* priv; } ;
struct mp_rect {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_2, const struct mp_rect *VAR_3)
{
    struct xvctx *VAR_4 = VAR_2->priv;
    struct vo_x11_state *VAR_5 = VAR_2->x11;
    if (VAR_4->xv_ck_info.method == VAR_1 ||
        VAR_4->xv_ck_info.method == VAR_0)
    {
        if (!VAR_4->vo_gc)
            return;

        FUNC_1(VAR_5->display, VAR_4->vo_gc, VAR_4->xv_colorkey);
        FUNC_0(VAR_5->display, VAR_5->window, VAR_4->vo_gc, VAR_3->x0, VAR_3->y0,
                       VAR_3->x1 - VAR_3->x0, VAR_3->y1 - VAR_3->y0);
    }
}
