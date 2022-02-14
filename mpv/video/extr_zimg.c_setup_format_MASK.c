
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_12__ {scalar_t__ width; scalar_t__ height; scalar_t__ color_family; int transfer_characteristics; int chroma_location; int color_primaries; int matrix_coefficients; int pixel_range; scalar_t__ depth; int pixel_type; void* subsample_h; void* subsample_w; TYPE_2__ active_region; } ;
typedef TYPE_5__ zimg_image_format ;
struct TYPE_10__ {scalar_t__ space; scalar_t__ levels; int primaries; int gamma; } ;
struct mp_image_params {scalar_t__ w; scalar_t__ h; int chroma_location; TYPE_3__ color; int imgfmt; } ;
struct mp_zimg_repack {int* z_planes; int zplanes; int zimgfmt; int repack; struct mp_image_params fmt; } ;
struct TYPE_11__ {scalar_t__ fast; } ;
struct mp_zimg_context {TYPE_4__ opts; } ;
struct mp_regular_imgfmt {int num_planes; scalar_t__ component_type; int component_size; int component_pad; int chroma_h; int chroma_w; TYPE_1__* planes; } ;
struct TYPE_8__ {int num_components; int* components; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 void* FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct mp_regular_imgfmt*,int ) ;
 int FUNC_4 (struct mp_image_params*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mp_zimg_repack*) ;
 int FUNC_11 (struct mp_zimg_repack*) ;
 int FUNC_12 (struct mp_zimg_repack*) ;
 int FUNC_13 (TYPE_5__*,int ) ;

__attribute__((used)) static bool FUNC_14(zimg_image_format *VAR_17, struct mp_zimg_repack *VAR_18,
                         struct mp_zimg_context *VAR_19)
{
    FUNC_13(VAR_17, VAR_5);

    struct mp_image_params VAR_20 = VAR_18->fmt;
    FUNC_4(&VAR_20);

    VAR_18->zimgfmt = VAR_20.imgfmt;

    if (!VAR_18->repack)
        FUNC_11(VAR_18);
    if (!VAR_18->repack)
        FUNC_10(VAR_18);
    if (!VAR_18->repack)
        FUNC_12(VAR_18);

    struct mp_regular_imgfmt VAR_21;
    if (!FUNC_3(&VAR_21, VAR_18->zimgfmt))
        return 0;


    if (VAR_21.num_planes > 3 || !FUNC_2(VAR_21.chroma_w) ||
        !FUNC_2(VAR_21.chroma_h))
        return 0;


    for (int VAR_22 = 0; VAR_22 < VAR_21.num_planes; VAR_22++) {
        if (VAR_21.planes[VAR_22].num_components != 1)
            return 0;
        int VAR_23 = VAR_21.planes[VAR_22].components[0];
        if (VAR_23 < 1 || VAR_23 > 3)
            return 0;


        VAR_18->z_planes[VAR_23 - 1] = VAR_22;
    }

    VAR_18->zplanes = VAR_21.num_planes;




    VAR_17->width = FUNC_1(VAR_20.w, VAR_21.chroma_w);
    VAR_17->height = FUNC_1(VAR_20.h, VAR_21.chroma_h);
    if (VAR_17->width != VAR_20.w)
        VAR_17->active_region.width = VAR_20.w;
    if (VAR_17->height != VAR_20.h)
        VAR_17->active_region.height = VAR_20.h;

    VAR_17->subsample_w = FUNC_5(VAR_21.chroma_w);
    VAR_17->subsample_h = FUNC_5(VAR_21.chroma_h);

    VAR_17->color_family = VAR_8;
    if (VAR_21.num_planes == 1) {
        VAR_17->color_family = VAR_6;
    } else if (VAR_20.color.space == VAR_3 || VAR_20.color.space == VAR_4) {
        VAR_17->color_family = VAR_7;
    }

    if (VAR_21.component_type == VAR_1 &&
        VAR_21.component_size == 1)
    {
        VAR_17->pixel_type = VAR_9;
    } else if (VAR_21.component_type == VAR_1 &&
               VAR_21.component_size == 2)
    {
        VAR_17->pixel_type = VAR_12;
    } else if (VAR_21.component_type == VAR_0 &&
               VAR_21.component_size == 2)
    {
        VAR_17->pixel_type = VAR_11;
    } else if (VAR_21.component_type == VAR_0 &&
               VAR_21.component_size == 4)
    {
        VAR_17->pixel_type = VAR_10;
    } else {
        return 0;
    }


    VAR_17->depth = VAR_21.component_size * 8 + FUNC_0(0, VAR_21.component_pad);

    VAR_17->pixel_range = VAR_20.color.levels == VAR_2 ?
                        VAR_13 : VAR_14;

    VAR_17->matrix_coefficients = FUNC_7(VAR_20.color.space);
    VAR_17->transfer_characteristics = FUNC_9(VAR_20.color.gamma);
    VAR_17->color_primaries = FUNC_8(VAR_20.color.primaries);
    VAR_17->chroma_location = FUNC_6(VAR_20.chroma_location);

    if (VAR_19 && VAR_19->opts.fast) {

        if (VAR_17->transfer_characteristics == VAR_16 &&
            VAR_17->color_family == VAR_7)
            VAR_17->transfer_characteristics = VAR_15;
    }

    return 1;
}
