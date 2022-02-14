
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sub_bitmaps {int num_parts; struct sub_bitmap* parts; } ;
struct sub_bitmap {int w; int h; } ;
struct part {TYPE_1__* imgs; } ;
struct mp_rect {int dummy; } ;
struct mp_image {int* stride; int num_planes; int h; int w; int ** planes; } ;
struct mp_draw_sub_cache {int dummy; } ;
struct TYPE_2__ {struct mp_image* a; struct mp_image* i; } ;


 int FUNC_0 (struct part*) ;
 int FUNC_1 (int *,int,void*,int,int *,int,int ,int ,int) ;
 int FUNC_2 (int *,int,int *,int,int,int ,int ,int) ;
 struct part* FUNC_3 (struct mp_draw_sub_cache*,struct sub_bitmaps*,struct mp_image*) ;
 int FUNC_4 (struct mp_rect,struct mp_image*,struct sub_bitmap*,struct mp_image*,int*,int*) ;
 int FUNC_5 (struct sub_bitmap*,struct mp_image*,struct mp_image**,struct mp_image**) ;
 void* FUNC_6 (struct part*,struct mp_image*) ;

__attribute__((used)) static void FUNC_7(struct mp_draw_sub_cache *VAR_0, struct mp_rect VAR_1,
                      struct mp_image *VAR_2, int VAR_3,
                      struct sub_bitmaps *VAR_4)
{
    struct part *VAR_5 = FUNC_3(VAR_0, VAR_4, VAR_2);
    FUNC_0(VAR_5);

    for (int VAR_6 = 0; VAR_6 < VAR_4->num_parts; ++VAR_6) {
        struct sub_bitmap *VAR_7 = &VAR_4->parts[VAR_6];

        if (VAR_7->w < 1 || VAR_7->h < 1)
            continue;

        struct mp_image VAR_8;
        int VAR_9, VAR_10;
        if (!FUNC_4(VAR_1, VAR_2, VAR_7, &VAR_8, &VAR_9, &VAR_10))
            continue;

        struct mp_image *VAR_11 = VAR_5->imgs[VAR_6].i;
        struct mp_image *VAR_12 = VAR_5->imgs[VAR_6].a;

        if (!(VAR_11 && VAR_12))
            FUNC_5(VAR_7, VAR_2, &VAR_11, &VAR_12);

        if (!(VAR_11 && VAR_12))
            continue;

        int VAR_13 = (VAR_3 + 7) / 8;
        uint8_t *VAR_14 = VAR_12->planes[0] + VAR_10 * VAR_12->stride[0] + VAR_9;
        for (int VAR_15 = 0; VAR_15 < (VAR_2->num_planes > 2 ? 3 : 1); VAR_15++) {
            void *VAR_16 = VAR_11->planes[VAR_15] + VAR_10 * VAR_11->stride[VAR_15] + VAR_9 * VAR_13;
            FUNC_1(VAR_8.planes[VAR_15], VAR_8.stride[VAR_15], VAR_16, VAR_11->stride[VAR_15],
                            VAR_14, VAR_12->stride[0], VAR_8.w, VAR_8.h, VAR_13);
        }
        if (VAR_2->num_planes >= 4) {
            FUNC_2(VAR_8.planes[3], VAR_8.stride[3], VAR_14,
                              VAR_12->stride[0], 255, VAR_8.w, VAR_8.h, VAR_13);
        }

        VAR_5->imgs[VAR_6].i = FUNC_6(VAR_5, VAR_11);
        VAR_5->imgs[VAR_6].a = FUNC_6(VAR_5, VAR_12);
    }
}
