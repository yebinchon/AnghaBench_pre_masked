
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct sub_bitmaps {int num_parts; struct sub_bitmap* parts; } ;
struct TYPE_4__ {int color; } ;
struct sub_bitmap {int stride; scalar_t__ bitmap; TYPE_2__ libass; } ;
struct mp_rect {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct mp_image {int num_planes; int h; int w; int * stride; int * planes; TYPE_1__ fmt; int params; } ;
struct mp_draw_sub_cache {int dummy; } ;
struct mp_csp_params {int input_bits; int texture_bits; int levels_out; } ;
struct mp_cmat {int dummy; } ;


 int VAR_0 ;
 struct mp_csp_params VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int *,int,int,int ,int ,int) ;
 int FUNC_1 (int ,int ,int *,int,int,int ,int ,int) ;
 int FUNC_2 (struct mp_rect,struct mp_image*,struct sub_bitmap*,struct mp_image*,int*,int*) ;
 int FUNC_3 (struct mp_csp_params*,int *) ;
 int FUNC_4 (struct mp_csp_params*,struct mp_cmat*) ;
 int FUNC_5 (struct mp_cmat*,struct mp_cmat*) ;
 int FUNC_6 (struct mp_cmat*,int,int*,int,int*) ;

__attribute__((used)) static void FUNC_7(struct mp_draw_sub_cache *VAR_3, struct mp_rect VAR_4,
                     struct mp_image *VAR_5, int VAR_6, struct sub_bitmaps *VAR_7)
{
    struct mp_csp_params VAR_8 = VAR_1;
    FUNC_3(&VAR_8, &VAR_5->params);
    VAR_8.levels_out = VAR_0;
    VAR_8.input_bits = VAR_6;
    VAR_8.texture_bits = (VAR_6 + 7) / 8 * 8;

    struct mp_cmat VAR_9, VAR_10;
    bool VAR_11 = VAR_5->fmt.flags & VAR_2;
    if (VAR_11) {
        FUNC_4(&VAR_8, &VAR_9);
        FUNC_5(&VAR_10, &VAR_9);
    }

    for (int VAR_12 = 0; VAR_12 < VAR_7->num_parts; ++VAR_12) {
        struct sub_bitmap *VAR_13 = &VAR_7->parts[VAR_12];

        struct mp_image VAR_14;
        int VAR_15, VAR_16;
        if (!FUNC_2(VAR_4, VAR_5, VAR_13, &VAR_14, &VAR_15, &VAR_16))
            continue;

        int VAR_17 = (VAR_13->libass.color >> 24) & 0xFF;
        int VAR_18 = (VAR_13->libass.color >> 16) & 0xFF;
        int VAR_19 = (VAR_13->libass.color >> 8) & 0xFF;
        int VAR_20 = 255 - (VAR_13->libass.color & 0xFF);
        int VAR_21[3];
        if (VAR_11) {
            int VAR_22[3] = {VAR_17, VAR_18, VAR_19};
            FUNC_6(&VAR_10, 8, VAR_22, VAR_8.texture_bits, VAR_21);
        } else {
            const int VAR_23 = (VAR_6 > 8) ? VAR_6 - 8 : 0;
            VAR_21[0] = VAR_18 << VAR_23;
            VAR_21[1] = VAR_19 << VAR_23;
            VAR_21[2] = VAR_17 << VAR_23;
        }

        int VAR_24 = (VAR_6 + 7) / 8;
        uint8_t *VAR_25 = (uint8_t *)VAR_13->bitmap + VAR_16 * VAR_13->stride + VAR_15;
        for (int VAR_26 = 0; VAR_26 < (VAR_5->num_planes > 2 ? 3 : 1); VAR_26++) {
            FUNC_0(VAR_14.planes[VAR_26], VAR_14.stride[VAR_26], VAR_21[VAR_26],
                              VAR_25, VAR_13->stride, VAR_20, VAR_14.w, VAR_14.h, VAR_24);
        }
        if (VAR_5->num_planes >= 4) {
            FUNC_1(VAR_14.planes[3], VAR_14.stride[3], VAR_25,
                              VAR_13->stride, VAR_20, VAR_14.w, VAR_14.h, VAR_24);
        }
    }
}
