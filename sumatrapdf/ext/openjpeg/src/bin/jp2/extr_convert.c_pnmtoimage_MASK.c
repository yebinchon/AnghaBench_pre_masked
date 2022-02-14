
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pnm_header {int height; int width; int format; int depth; int maxval; scalar_t__ bw; scalar_t__ rgba; scalar_t__ rgb; scalar_t__ graya; scalar_t__ gray; void* h; void* w; void* dy; void* dx; scalar_t__ sgnd; void* bpp; void* prec; int ok; } ;
struct TYPE_9__ {TYPE_1__* comps; void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_2__ opj_image_t ;
typedef struct pnm_header opj_image_cmptparm_t ;
struct TYPE_10__ {int subsampling_dx; int subsampling_dy; scalar_t__ image_offset_y0; scalar_t__ image_offset_x0; } ;
typedef TYPE_3__ opj_cparameters_t ;
struct TYPE_8__ {int* data; } ;
typedef void* OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int OPJ_COLOR_SPACE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (unsigned char*,int,int,int *) ;
 int FUNC_4 (int *,char*,unsigned int*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct pnm_header*,int ,size_t) ;
 TYPE_2__* FUNC_8 (void*,struct pnm_header*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,struct pnm_header*) ;
 int VAR_3 ;

opj_image_t* FUNC_11(const char *VAR_4, opj_cparameters_t *VAR_5)
{
    int VAR_6 = VAR_5->subsampling_dx;
    int VAR_7 = VAR_5->subsampling_dy;

    FILE *VAR_8 = ((void*)0);
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    OPJ_COLOR_SPACE VAR_16;
    opj_image_cmptparm_t VAR_17[4];
    opj_image_t * VAR_18 = ((void*)0);
    struct pnm_header VAR_19;

    if ((VAR_8 = FUNC_1(VAR_4, "rb")) == ((void*)0)) {
        FUNC_2(VAR_3, "pnmtoimage:Failed to open %s for reading!\n", VAR_4);
        return ((void*)0);
    }
    FUNC_7(&VAR_19, 0, sizeof(struct pnm_header));

    FUNC_10(VAR_8, &VAR_19);

    if (!VAR_19.ok) {
        FUNC_0(VAR_8);
        return ((void*)0);
    }


    if (VAR_19.height != 0 &&
            VAR_19.width > VAR_0 / VAR_19.height) {
        FUNC_2(VAR_3, "pnmtoimage:Image %dx%d too big!\n",
                VAR_19.width, VAR_19.height);
        FUNC_0(VAR_8);
        return ((void*)0);
    }

    VAR_15 = VAR_19.format;

    switch (VAR_15) {
    case 1:
    case 4:
        VAR_11 = 1;
        break;

    case 2:
    case 5:
        VAR_11 = 1;
        break;

    case 3:
    case 6:
        VAR_11 = 3;
        break;

    case 7:
        VAR_11 = VAR_19.depth;
        break;

    default:
        FUNC_0(VAR_8);
        return ((void*)0);
    }
    if (VAR_11 < 3) {
        VAR_16 = VAR_1;
    } else {
        VAR_16 = VAR_2;
    }

    VAR_14 = FUNC_6(VAR_19.maxval);

    if (VAR_14 < 8) {
        VAR_14 = 8;
    }

    VAR_12 = VAR_19.width;
    VAR_13 = VAR_19.height;
    VAR_6 = VAR_5->subsampling_dx;
    VAR_7 = VAR_5->subsampling_dy;

    FUNC_7(&VAR_17[0], 0, (size_t)VAR_11 * sizeof(opj_image_cmptparm_t));

    for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
        VAR_17[VAR_9].prec = (OPJ_UINT32)VAR_14;
        VAR_17[VAR_9].bpp = (OPJ_UINT32)VAR_14;
        VAR_17[VAR_9].sgnd = 0;
        VAR_17[VAR_9].dx = (OPJ_UINT32)VAR_6;
        VAR_17[VAR_9].dy = (OPJ_UINT32)VAR_7;
        VAR_17[VAR_9].w = (OPJ_UINT32)VAR_12;
        VAR_17[VAR_9].h = (OPJ_UINT32)VAR_13;
    }
    VAR_18 = FUNC_8((OPJ_UINT32)VAR_11, &VAR_17[0], VAR_16);

    if (!VAR_18) {
        FUNC_0(VAR_8);
        return ((void*)0);
    }


    VAR_18->x0 = (OPJ_UINT32)VAR_5->image_offset_x0;
    VAR_18->y0 = (OPJ_UINT32)VAR_5->image_offset_y0;
    VAR_18->x1 = (OPJ_UINT32)(VAR_5->image_offset_x0 + (VAR_12 - 1) * VAR_6
                             + 1);
    VAR_18->y1 = (OPJ_UINT32)(VAR_5->image_offset_y0 + (VAR_13 - 1) * VAR_7
                             + 1);

    if ((VAR_15 == 2) || (VAR_15 == 3)) {
        unsigned int VAR_20;

        for (VAR_9 = 0; VAR_9 < VAR_12 * VAR_13; VAR_9++) {
            for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
                VAR_20 = 0;
                if (FUNC_4(VAR_8, "%u", &VAR_20) != 1) {
                    FUNC_2(VAR_3,
                            "\nWARNING: fscanf return a number of element different from the expected.\n");
                }

                VAR_18->comps[VAR_10].data[VAR_9] = (OPJ_INT32)(VAR_20 * 255) / VAR_19.maxval;
            }
        }
    } else if ((VAR_15 == 5)
               || (VAR_15 == 6)
               || ((VAR_15 == 7)
                   && (VAR_19.gray || VAR_19.graya
                       || VAR_19.rgb || VAR_19.rgba))) {
        unsigned char VAR_21, VAR_22, VAR_23;

        VAR_23 = (VAR_14 < 9);

        for (VAR_9 = 0; VAR_9 < VAR_12 * VAR_13; VAR_9++) {
            for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
                if (!FUNC_3(&VAR_21, 1, 1, VAR_8)) {
                    FUNC_2(VAR_3,
                            "\nError: fread return a number of element different from the expected.\n");
                    FUNC_9(VAR_18);
                    FUNC_0(VAR_8);
                    return ((void*)0);
                }
                if (VAR_23) {
                    VAR_18->comps[VAR_10].data[VAR_9] = VAR_21;
                } else {
                    if (!FUNC_3(&VAR_22, 1, 1, VAR_8)) {
                        FUNC_2(VAR_3,
                                "\nError: fread return a number of element different from the expected.\n");
                    }

                    VAR_18->comps[VAR_10].data[VAR_9] = ((VAR_21 << 8) | VAR_22);
                }
            }
        }
    } else if (VAR_15 == 1) {
        for (VAR_9 = 0; VAR_9 < VAR_12 * VAR_13; VAR_9++) {
            unsigned int VAR_24;

            if (FUNC_4(VAR_8, "%u", &VAR_24) != 1) {
                FUNC_2(VAR_3,
                        "\nWARNING: fscanf return a number of element different from the expected.\n");
            }

            VAR_18->comps[0].data[VAR_9] = (VAR_24 ? 0 : 255);
        }
    } else if (VAR_15 == 4) {
        int VAR_25, VAR_26, VAR_27;
        unsigned char VAR_28;

        VAR_9 = 0;
        for (VAR_26 = 0; VAR_26 < VAR_13; ++VAR_26) {
            VAR_27 = -1;
            VAR_28 = 0;

            for (VAR_25 = 0; VAR_25 < VAR_12; ++VAR_25) {
                if (VAR_27 == -1) {
                    VAR_27 = 7;
                    VAR_28 = (unsigned char)FUNC_5(VAR_8);
                }
                VAR_18->comps[0].data[VAR_9] = (((VAR_28 >> VAR_27) & 1) ? 0 : 255);
                --VAR_27;
                ++VAR_9;
            }
        }
    } else if ((VAR_15 == 7 && VAR_19.bw)) {
        unsigned char VAR_29;

        for (VAR_9 = 0; VAR_9 < VAR_12 * VAR_13; ++VAR_9) {
            if (!FUNC_3(&VAR_29, 1, 1, VAR_8)) {
                FUNC_2(VAR_3,
                        "\nError: fread return a number of element different from the expected.\n");
            }
            VAR_18->comps[0].data[VAR_9] = (VAR_29 & 1) ? 0 : 255;
        }
    }
    FUNC_0(VAR_8);

    return VAR_18;
}
