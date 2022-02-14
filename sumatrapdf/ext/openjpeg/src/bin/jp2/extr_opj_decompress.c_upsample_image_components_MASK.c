
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t numcomps; size_t x0; size_t y0; size_t x1; size_t y1; TYPE_2__* comps; int color_space; } ;
typedef TYPE_1__ opj_image_t ;
struct TYPE_11__ {unsigned int factor; unsigned int dx; unsigned int dy; size_t w; size_t h; int x0; int y0; scalar_t__* data; int resno_decoded; int alpha; int sgnd; int prec; int bpp; } ;
typedef TYPE_2__ opj_image_comp_t ;
struct TYPE_12__ {size_t x0; size_t y0; int dx; int dy; size_t w; size_t h; int sgnd; int prec; int bpp; } ;
typedef TYPE_3__ opj_image_cmptparm_t ;
typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,unsigned int,int) ;
 TYPE_1__* FUNC_5 (size_t,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static opj_image_t* FUNC_7(opj_image_t* VAR_3)
{
    opj_image_t* VAR_4 = ((void*)0);
    opj_image_cmptparm_t* VAR_5 = ((void*)0);
    OPJ_BOOL VAR_6 = VAR_0;
    OPJ_UINT32 VAR_7;

    for (VAR_7 = 0U; VAR_7 < VAR_3->numcomps; ++VAR_7) {
        if (VAR_3->comps[VAR_7].factor > 0U) {
            FUNC_0(VAR_2,
                    "ERROR -> opj_decompress: -upsample not supported with reduction\n");
            FUNC_6(VAR_3);
            return ((void*)0);
        }
        if ((VAR_3->comps[VAR_7].dx > 1U) || (VAR_3->comps[VAR_7].dy > 1U)) {
            VAR_6 = VAR_1;
            break;
        }
    }
    if (!VAR_6) {
        return VAR_3;
    }

    VAR_5 = (opj_image_cmptparm_t*)FUNC_2(VAR_3->numcomps * sizeof(
                           opj_image_cmptparm_t));
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_2,
                "ERROR -> opj_decompress: failed to allocate memory for upsampled components!\n");
        FUNC_6(VAR_3);
        return ((void*)0);
    }

    for (VAR_7 = 0U; VAR_7 < VAR_3->numcomps; ++VAR_7) {
        opj_image_cmptparm_t* VAR_8 = &(VAR_5[VAR_7]);
        opj_image_comp_t* VAR_9 = &(VAR_3->comps[VAR_7]);

        VAR_8->bpp = VAR_9->bpp;
        VAR_8->prec = VAR_9->prec;
        VAR_8->sgnd = VAR_9->sgnd;
        VAR_8->x0 = VAR_3->x0;
        VAR_8->y0 = VAR_3->y0;
        VAR_8->dx = 1;
        VAR_8->dy = 1;
        VAR_8->w =
            VAR_9->w;
        VAR_8->h =
            VAR_9->h;

        if (VAR_9->dx > 1U) {
            VAR_8->w = VAR_3->x1 - VAR_3->x0;
        }

        if (VAR_9->dy > 1U) {
            VAR_8->h = VAR_3->y1 - VAR_3->y0;
        }
    }

    VAR_4 = FUNC_5(VAR_3->numcomps, VAR_5,
                                   VAR_3->color_space);
    FUNC_1(VAR_5);
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_2,
                "ERROR -> opj_decompress: failed to allocate memory for upsampled components!\n");
        FUNC_6(VAR_3);
        return ((void*)0);
    }

    VAR_4->x0 = VAR_3->x0;
    VAR_4->x1 = VAR_3->x1;
    VAR_4->y0 = VAR_3->y0;
    VAR_4->y1 = VAR_3->y1;

    for (VAR_7 = 0U; VAR_7 < VAR_3->numcomps; ++VAR_7) {
        opj_image_comp_t* VAR_10 = &(VAR_4->comps[VAR_7]);
        opj_image_comp_t* VAR_11 = &(VAR_3->comps[VAR_7]);

        VAR_10->factor = VAR_11->factor;
        VAR_10->alpha = VAR_11->alpha;
        VAR_10->resno_decoded = VAR_11->resno_decoded;

        if ((VAR_11->dx > 1U) || (VAR_11->dy > 1U)) {
            const OPJ_INT32* VAR_12 = VAR_11->data;
            OPJ_INT32* VAR_13 = VAR_10->data;
            OPJ_UINT32 VAR_14;
            OPJ_UINT32 VAR_15, VAR_16;


            VAR_15 = VAR_11->dx * VAR_11->x0 - VAR_3->x0;
            VAR_16 = VAR_11->dy * VAR_11->y0 - VAR_3->y0;
            if ((VAR_15 >= VAR_11->dx) || (VAR_16 >= VAR_11->dy)) {
                FUNC_0(VAR_2,
                        "ERROR -> opj_decompress: Invalid image/component parameters found when upsampling\n");
                FUNC_6(VAR_3);
                FUNC_6(VAR_4);
                return ((void*)0);
            }

            for (VAR_14 = 0U; VAR_14 < VAR_16; ++VAR_14) {
                FUNC_4(VAR_13, 0U, VAR_10->w * sizeof(OPJ_INT32));
                VAR_13 += VAR_10->w;
            }

            if (VAR_10->h > (VAR_11->dy -
                                1U)) {
                for (; VAR_14 < VAR_10->h - (VAR_11->dy - 1U); VAR_14 += VAR_11->dy) {
                    OPJ_UINT32 VAR_17, VAR_18;
                    OPJ_UINT32 VAR_19;

                    VAR_19 = 0U;
                    for (VAR_17 = 0U; VAR_17 < VAR_15; ++VAR_17) {
                        VAR_13[VAR_17] = 0;
                    }
                    if (VAR_10->w > (VAR_11->dx -
                                        1U)) {
                        for (; VAR_17 < VAR_10->w - (VAR_11->dx - 1U); VAR_17 += VAR_11->dx, ++VAR_19) {
                            OPJ_UINT32 VAR_20;
                            for (VAR_20 = 0U; VAR_20 < VAR_11->dx; ++VAR_20) {
                                VAR_13[VAR_17 + VAR_20] = VAR_12[VAR_19];
                            }
                        }
                    }
                    for (; VAR_17 < VAR_10->w; ++VAR_17) {
                        VAR_13[VAR_17] = VAR_12[VAR_19];
                    }
                    VAR_13 += VAR_10->w;

                    for (VAR_18 = 1U; VAR_18 < VAR_11->dy; ++VAR_18) {
                        FUNC_3(VAR_13, VAR_13 - VAR_10->w, VAR_10->w * sizeof(OPJ_INT32));
                        VAR_13 += VAR_10->w;
                    }
                    VAR_12 += VAR_11->w;
                }
            }
            if (VAR_14 < VAR_10->h) {
                OPJ_UINT32 VAR_21;
                OPJ_UINT32 VAR_22;

                VAR_22 = 0U;
                for (VAR_21 = 0U; VAR_21 < VAR_15; ++VAR_21) {
                    VAR_13[VAR_21] = 0;
                }
                if (VAR_10->w > (VAR_11->dx -
                                    1U)) {
                    for (; VAR_21 < VAR_10->w - (VAR_11->dx - 1U); VAR_21 += VAR_11->dx, ++VAR_22) {
                        OPJ_UINT32 VAR_23;
                        for (VAR_23 = 0U; VAR_23 < VAR_11->dx; ++VAR_23) {
                            VAR_13[VAR_21 + VAR_23] = VAR_12[VAR_22];
                        }
                    }
                }
                for (; VAR_21 < VAR_10->w; ++VAR_21) {
                    VAR_13[VAR_21] = VAR_12[VAR_22];
                }
                VAR_13 += VAR_10->w;
                ++VAR_14;
                for (; VAR_14 < VAR_10->h; ++VAR_14) {
                    FUNC_3(VAR_13, VAR_13 - VAR_10->w, VAR_10->w * sizeof(OPJ_INT32));
                    VAR_13 += VAR_10->w;
                }
            }
        } else {
            FUNC_3(VAR_10->data, VAR_11->data,
                   VAR_11->w * VAR_11->h * sizeof(OPJ_INT32));
        }
    }
    FUNC_6(VAR_3);
    return VAR_4;
}
