
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct sub_bitmaps {int num_parts; struct sub_bitmap* parts; TYPE_1__* packed; int format; int change_id; } ;
struct TYPE_4__ {int color; } ;
struct sub_bitmap {scalar_t__ w; scalar_t__ h; scalar_t__ x; scalar_t__ y; int dw; scalar_t__ dh; int stride; int src_y; int src_x; TYPE_2__ libass; int * bitmap; } ;
struct mp_rect {scalar_t__ x1; scalar_t__ x0; scalar_t__ y1; scalar_t__ y0; } ;
struct mp_ass_packer {struct sub_bitmap* rgba_imgs; } ;
struct TYPE_3__ {int* stride; scalar_t__* planes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int,int *,int,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int *,int ,int,scalar_t__,int) ;
 int FUNC_2 (struct sub_bitmaps*,struct mp_rect*,int) ;
 int FUNC_3 (struct mp_ass_packer*,struct sub_bitmaps*,int ) ;

__attribute__((used)) static bool FUNC_4(struct mp_ass_packer *VAR_3, struct sub_bitmaps *VAR_4)
{
    struct mp_rect VAR_5[VAR_1];
    int VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_1);

    struct sub_bitmaps VAR_7 = {
        .change_id = VAR_4->change_id,
        .format = VAR_2,
        .parts = VAR_3->rgba_imgs,
        .num_parts = VAR_6,
    };

    for (int VAR_8 = 0; VAR_8 < VAR_7.num_parts; VAR_8++) {
        VAR_7.parts[VAR_8].w = VAR_5[VAR_8].x1 - VAR_5[VAR_8].x0;
        VAR_7.parts[VAR_8].h = VAR_5[VAR_8].y1 - VAR_5[VAR_8].y0;
    }

    if (!FUNC_3(VAR_3, &VAR_7, VAR_0))
        return 0;

    for (int VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
        struct mp_rect VAR_10 = VAR_5[VAR_9];
        struct sub_bitmap *VAR_11 = &VAR_7.parts[VAR_9];

        VAR_11->x = VAR_10.x0;
        VAR_11->y = VAR_10.y0;
        VAR_11->w = VAR_11->dw = VAR_10.x1 - VAR_10.x0;
        VAR_11->h = VAR_11->dh = VAR_10.y1 - VAR_10.y0;
        VAR_11->stride = VAR_7.packed->stride[0];
        VAR_11->bitmap = (uint8_t *)VAR_7.packed->planes[0] +
                    VAR_11->stride * VAR_11->src_y + VAR_11->src_x * 4;

        FUNC_1(VAR_11->bitmap, 0, VAR_11->w * 4, VAR_11->h, VAR_11->stride);

        for (int VAR_12 = 0; VAR_12 < VAR_4->num_parts; VAR_12++) {
            struct sub_bitmap *VAR_13 = &VAR_4->parts[VAR_12];



            if (VAR_13->x > VAR_10.x1 || VAR_13->x + VAR_13->w < VAR_10.x0 ||
                VAR_13->y > VAR_10.y1 || VAR_13->y + VAR_13->h < VAR_10.y0)
                continue;

            FUNC_0(VAR_13->bitmap, VAR_13->w, VAR_13->h, VAR_13->stride,
                          VAR_11->bitmap, VAR_11->stride,
                          VAR_13->x - VAR_10.x0, VAR_13->y - VAR_10.y0,
                          VAR_13->libass.color);
        }
    }

    *VAR_4 = VAR_7;
    return 1;
}
