
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {int x1; int x0; int y1; int y0; } ;
struct xvctx {int vo_gc; int xv_port; scalar_t__ Shmem_Flag; struct mp_rect dst_rect; struct mp_rect src_rect; } ;
struct vo_x11_state {int window; int display; int ShmCompletionWaitCount; } ;
struct vo {struct vo_x11_state* x11; struct xvctx* priv; } ;
typedef int XvImage ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int,int,int,int,int,int,int,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct vo *VAR_1, XvImage *VAR_2)
{
    struct xvctx *VAR_3 = VAR_1->priv;
    struct vo_x11_state *VAR_4 = VAR_1->x11;
    struct mp_rect *VAR_5 = &VAR_3->src_rect;
    struct mp_rect *VAR_6 = &VAR_3->dst_rect;
    int VAR_7 = VAR_6->x1 - VAR_6->x0, VAR_8 = VAR_6->y1 - VAR_6->y0;
    int VAR_9 = VAR_5->x1 - VAR_5->x0, VAR_10 = VAR_5->y1 - VAR_5->y0;

    if (VAR_3->Shmem_Flag) {
        FUNC_1(VAR_4->display, VAR_3->xv_port, VAR_4->window, VAR_3->vo_gc, VAR_2,
                      VAR_5->x0, VAR_5->y0, VAR_9, VAR_10,
                      VAR_6->x0, VAR_6->y0, VAR_7, VAR_8,
                      VAR_0);
        VAR_4->ShmCompletionWaitCount++;
    } else {
        FUNC_0(VAR_4->display, VAR_3->xv_port, VAR_4->window, VAR_3->vo_gc, VAR_2,
                   VAR_5->x0, VAR_5->y0, VAR_9, VAR_10,
                   VAR_6->x0, VAR_6->y0, VAR_7, VAR_8);
    }
}
