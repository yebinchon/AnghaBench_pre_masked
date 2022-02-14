
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvctx {int f_gc; } ;
struct vo_x11_state {int display; } ;
struct vo {int dwidth; int dheight; struct xvctx* priv; struct vo_x11_state* x11; } ;
struct mp_rect {int y0; int y1; int x0; int x1; } ;
typedef int GC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vo*,int ,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0, const struct mp_rect *VAR_1)
{
    struct vo_x11_state *VAR_2 = VAR_0->x11;
    struct xvctx *VAR_3 = VAR_0->priv;
    GC VAR_4 = VAR_3->f_gc;

    int VAR_5 = VAR_0->dwidth;
    int VAR_6 = VAR_0->dheight;

    FUNC_1(VAR_0, VAR_4, 0, 0, VAR_5, VAR_1->y0);
    FUNC_1(VAR_0, VAR_4, 0, VAR_1->y1, VAR_5, VAR_6);
    FUNC_1(VAR_0, VAR_4, 0, VAR_1->y0, VAR_1->x0, VAR_1->y1);
    FUNC_1(VAR_0, VAR_4, VAR_1->x1, VAR_1->y0, VAR_5, VAR_1->y1);

    FUNC_0(VAR_2->display);
}
