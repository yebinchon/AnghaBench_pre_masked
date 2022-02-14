
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo_wayland_state {int surface; } ;
struct vo {int osd; int dheight; int dwidth; struct vo_wayland_state* wl; struct priv* priv; } ;
struct TYPE_6__ {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;
struct TYPE_4__ {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;
struct priv {int osd; int sws; TYPE_3__ dst; TYPE_1__ src; struct buffer* free_buffers; } ;
struct mp_rect {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;
struct TYPE_5__ {int align_y; int align_x; } ;
struct mp_image {scalar_t__ w; scalar_t__ h; int pts; TYPE_2__ fmt; } ;
struct buffer {int * buffer; struct mp_image mpi; struct buffer* next; } ;


 int FUNC_0 (int ,int) ;
 void* FUNC_1 (scalar_t__,int ) ;
 struct buffer* FUNC_2 (struct vo*,int ,int ) ;
 int FUNC_3 (struct mp_image*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct mp_image*,struct mp_rect) ;
 int FUNC_5 (int ,struct mp_image*,struct mp_image*) ;
 int FUNC_6 (int ,int ,int ,int ,struct mp_image*) ;
 int FUNC_7 (struct mp_image*) ;
 int FUNC_8 (int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct vo *VAR_0, struct mp_image *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    struct vo_wayland_state *VAR_3 = VAR_0->wl;
    struct buffer *VAR_4;

    VAR_4 = VAR_2->free_buffers;
    if (VAR_4) {
        VAR_2->free_buffers = VAR_4->next;
    } else {
        VAR_4 = FUNC_2(VAR_0, VAR_0->dwidth, VAR_0->dheight);
        if (!VAR_4) {
            FUNC_8(VAR_3->surface, ((void*)0), 0, 0);
            return;
        }
    }
    if (VAR_1) {
        struct mp_image VAR_5 = VAR_4->mpi;
        struct mp_rect VAR_6;
        struct mp_rect VAR_7;
        VAR_6.x0 = FUNC_1(VAR_2->src.x0, FUNC_0(VAR_1->fmt.align_x, 4));
        VAR_6.y0 = FUNC_1(VAR_2->src.y0, FUNC_0(VAR_1->fmt.align_y, 4));
        VAR_6.x1 = VAR_2->src.x1 - (VAR_2->src.x0 - VAR_6.x0);
        VAR_6.y1 = VAR_2->src.y1 - (VAR_2->src.y0 - VAR_6.y0);
        VAR_7.x0 = FUNC_1(VAR_2->dst.x0, FUNC_0(VAR_5.fmt.align_x, 4));
        VAR_7.y0 = FUNC_1(VAR_2->dst.y0, FUNC_0(VAR_5.fmt.align_y, 4));
        VAR_7.x1 = VAR_2->dst.x1 - (VAR_2->dst.x0 - VAR_7.x0);
        VAR_7.y1 = VAR_2->dst.y1 - (VAR_2->dst.y0 - VAR_7.y0);
        FUNC_4(VAR_1, VAR_6);
        FUNC_4(&VAR_5, VAR_7);
        FUNC_5(VAR_2->sws, &VAR_5, VAR_1);
        if (VAR_7.y0 > 0)
            FUNC_3(&VAR_4->mpi, 0, 0, VAR_4->mpi.w, VAR_7.y0);
        if (VAR_4->mpi.h > VAR_7.y1)
            FUNC_3(&VAR_4->mpi, 0, VAR_7.y1, VAR_4->mpi.w, VAR_4->mpi.h);
        if (VAR_7.x0 > 0)
            FUNC_3(&VAR_4->mpi, 0, VAR_7.y0, VAR_7.x0, VAR_7.y1);
        if (VAR_4->mpi.w > VAR_7.x1)
            FUNC_3(&VAR_4->mpi, VAR_7.x1, VAR_7.y0, VAR_4->mpi.w, VAR_7.y1);
        FUNC_6(VAR_0->osd, VAR_2->osd, VAR_1->pts, 0, &VAR_4->mpi);
    } else {
        FUNC_3(&VAR_4->mpi, 0, 0, VAR_4->mpi.w, VAR_4->mpi.h);
        FUNC_6(VAR_0->osd, VAR_2->osd, 0, 0, &VAR_4->mpi);
    }
    FUNC_7(VAR_1);
    FUNC_8(VAR_3->surface, VAR_4->buffer, 0, 0);
}
