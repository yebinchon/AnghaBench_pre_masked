
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct vo {int osd; struct priv* priv; } ;
struct TYPE_6__ {int y0; int y1; int x0; int x1; } ;
struct mp_rect {void* y0; void* x0; } ;
struct priv {int depth; struct mp_image* last_input; TYPE_3__* cur_frame; int osd; int cur_frame_cropped; int sws; TYPE_2__ dst; struct mp_rect src; scalar_t__ active; } ;
struct TYPE_5__ {int align_y; int align_x; } ;
struct mp_image {int pts; TYPE_1__ fmt; } ;
struct framebuffer {int stride; scalar_t__ map; } ;
typedef struct mp_image mp_image_t ;
struct TYPE_7__ {int w; int h; int* stride; scalar_t__* planes; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,int,int,int) ;
 int FUNC_3 (struct mp_image*,struct mp_rect) ;
 int FUNC_4 (int ,int ,struct mp_image*) ;
 int FUNC_5 (int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_6 (struct mp_image*) ;

__attribute__((used)) static void FUNC_7(struct vo *VAR_1, mp_image_t *VAR_2, struct framebuffer *VAR_3)
{
    struct priv *VAR_4 = VAR_1->priv;

    if (VAR_4->active && VAR_3 != ((void*)0)) {
        if (VAR_2) {
            struct mp_image VAR_5 = *VAR_2;
            struct mp_rect VAR_6 = VAR_4->src;
            VAR_6.x0 = FUNC_0(VAR_6.x0, VAR_2->fmt.align_x);
            VAR_6.y0 = FUNC_0(VAR_6.y0, VAR_2->fmt.align_y);
            FUNC_3(&VAR_5, VAR_6);

            FUNC_2(VAR_4->cur_frame, 0, 0, VAR_4->cur_frame->w, VAR_4->dst.y0);
            FUNC_2(VAR_4->cur_frame, 0, VAR_4->dst.y1, VAR_4->cur_frame->w, VAR_4->cur_frame->h);
            FUNC_2(VAR_4->cur_frame, 0, VAR_4->dst.y0, VAR_4->dst.x0, VAR_4->dst.y1);
            FUNC_2(VAR_4->cur_frame, VAR_4->dst.x1, VAR_4->dst.y0, VAR_4->cur_frame->w, VAR_4->dst.y1);

            FUNC_4(VAR_4->sws, VAR_4->cur_frame_cropped, &VAR_5);
            FUNC_5(VAR_1->osd, VAR_4->osd, VAR_5.pts, 0, VAR_4->cur_frame);
        } else {
            FUNC_2(VAR_4->cur_frame, 0, 0, VAR_4->cur_frame->w, VAR_4->cur_frame->h);
            FUNC_5(VAR_1->osd, VAR_4->osd, 0, 0, VAR_4->cur_frame);
        }

        if (VAR_4->depth == 30) {

            const int VAR_7 = VAR_4->cur_frame->w;
            const int VAR_8 = VAR_4->cur_frame->h;

            const int VAR_9 = VAR_4->cur_frame->stride[0]/sizeof(uint16_t) - VAR_7;
            const int VAR_10 = VAR_4->cur_frame->stride[1]/sizeof(uint16_t) - VAR_7;
            const int VAR_11 = VAR_4->cur_frame->stride[2]/sizeof(uint16_t) - VAR_7;
            const int VAR_12 = VAR_3->stride/sizeof(uint32_t) - VAR_7;

            uint16_t *VAR_13 = (uint16_t*)VAR_4->cur_frame->planes[0];
            uint16_t *VAR_14 = (uint16_t*)VAR_4->cur_frame->planes[1];
            uint16_t *VAR_15 = (uint16_t*)VAR_4->cur_frame->planes[2];
            uint32_t *VAR_16 = (uint32_t*)VAR_3->map;
            for (unsigned VAR_17 = 0; VAR_17 < VAR_8; ++VAR_17) {
                for (unsigned VAR_18 = 0; VAR_18 < VAR_7; ++VAR_18) {
                    *VAR_16++ = (*VAR_15++ << 20) | (*VAR_13++ << 10) | (*VAR_14++);
                }
                VAR_13 += VAR_9;
                VAR_14 += VAR_10;
                VAR_15 += VAR_11;
                VAR_16 += VAR_12;
            }
        } else {
            FUNC_1(VAR_3->map, VAR_4->cur_frame->planes[0],
                       VAR_4->cur_frame->w * VAR_0, VAR_4->cur_frame->h,
                       VAR_3->stride,
                       VAR_4->cur_frame->stride[0]);
        }
    }

    if (VAR_2 != VAR_4->last_input) {
        FUNC_6(VAR_4->last_input);
        VAR_4->last_input = VAR_2;
    }
}
