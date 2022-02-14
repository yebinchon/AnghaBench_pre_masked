
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {unsigned int x0; unsigned int y0; unsigned int x1; unsigned int y1; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_13__ {int prec; int bpp; int dx; int dy; unsigned int w; unsigned int h; scalar_t__ sgnd; } ;
typedef TYPE_3__ opj_image_cmptparm_t ;
struct TYPE_14__ {int subsampling_dx; int subsampling_dy; unsigned int image_offset_x0; unsigned int image_offset_y0; } ;
typedef TYPE_4__ opj_cparameters_t ;
typedef int opj_bool ;
struct TYPE_11__ {unsigned char* data; } ;
typedef int OPJ_COLOR_SPACE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (unsigned char*,int,int,int *) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 TYPE_2__* FUNC_4 (int,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_6 (int *,unsigned int*,unsigned int*,unsigned int*,int*) ;

opj_image_t* FUNC_7(const char *VAR_3, opj_cparameters_t *VAR_4)
{
    FILE *VAR_5;
    opj_image_t *VAR_6;
    unsigned int VAR_7, VAR_8, VAR_9;
    unsigned int VAR_10, VAR_11;
    int VAR_12 = 0;
    opj_image_cmptparm_t VAR_13[4];
    int VAR_14;
    OPJ_COLOR_SPACE VAR_15;
    opj_bool VAR_16 ;
    opj_bool VAR_17;
    int VAR_18, VAR_19;
    int VAR_20;

    VAR_5 = FUNC_0(VAR_3, "rb");
    if (!VAR_5) {
        FUNC_1(VAR_2, "Failed to open %s for reading !!\n", VAR_3);
        return 0;
    }

    if (!FUNC_6(VAR_5, &VAR_9, &VAR_7, &VAR_8,
                        &VAR_12)) {
        return ((void*)0);
    }


    if (!((VAR_9 == 24) || (VAR_9 == 32))) {
        return ((void*)0);
    }


    FUNC_3(&VAR_13[0], 0, 4 * sizeof(opj_image_cmptparm_t));

    VAR_16 = (VAR_9 == 8) ||
           (VAR_9 == 16);
    VAR_17 = (VAR_9 == 16) ||
                 (VAR_9 == 32);

    if (VAR_16) {
        VAR_15 = VAR_0;
        VAR_14 = VAR_17 ? 2 : 1;
    } else {
        VAR_14 = VAR_17 ? 4 : 3;
        VAR_15 = VAR_1;
    }

    VAR_18 = VAR_4->subsampling_dx;
    VAR_19 = VAR_4->subsampling_dy;

    for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++) {
        VAR_13[VAR_20].prec = 8;
        VAR_13[VAR_20].bpp = 8;
        VAR_13[VAR_20].sgnd = 0;
        VAR_13[VAR_20].dx = VAR_18;
        VAR_13[VAR_20].dy = VAR_19;
        VAR_13[VAR_20].w = VAR_7;
        VAR_13[VAR_20].h = VAR_8;
    }


    VAR_6 = FUNC_4(VAR_14, &VAR_13[0], VAR_15);

    if (!VAR_6) {
        return ((void*)0);
    }


    VAR_6->x0 = VAR_4->image_offset_x0;
    VAR_6->y0 = VAR_4->image_offset_y0;
    VAR_6->x1 = !VAR_6->x0 ? (VAR_7 - 1) * VAR_18 + 1 : VAR_6->x0 +
                (VAR_7 - 1) * VAR_18 + 1;
    VAR_6->y1 = !VAR_6->y0 ? (VAR_8 - 1) * VAR_19 + 1 : VAR_6->y0 +
                (VAR_8 - 1) * VAR_19 + 1;


    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
        int VAR_21;

        if (VAR_12) {
            VAR_21 = (VAR_8 - VAR_11 - 1) * VAR_7;
        } else {
            VAR_21 = VAR_11 * VAR_7;
        }

        if (VAR_14 == 3) {
            for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
                unsigned char VAR_22, VAR_23, VAR_24;

                if (!FUNC_2(&VAR_24, 1, 1, VAR_5)) {
                    FUNC_1(VAR_2,
                            "\nError: fread return a number of element different from the expected.\n");
                    FUNC_5(VAR_6);
                    return ((void*)0);
                }
                if (!FUNC_2(&VAR_23, 1, 1, VAR_5)) {
                    FUNC_1(VAR_2,
                            "\nError: fread return a number of element different from the expected.\n");
                    FUNC_5(VAR_6);
                    return ((void*)0);
                }
                if (!FUNC_2(&VAR_22, 1, 1, VAR_5)) {
                    FUNC_1(VAR_2,
                            "\nError: fread return a number of element different from the expected.\n");
                    FUNC_5(VAR_6);
                    return ((void*)0);
                }

                VAR_6->comps[0].data[VAR_21] = VAR_22;
                VAR_6->comps[1].data[VAR_21] = VAR_23;
                VAR_6->comps[2].data[VAR_21] = VAR_24;
                VAR_21++;
            }
        } else if (VAR_14 == 4) {
            for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
                unsigned char VAR_25, VAR_26, VAR_27, VAR_28;
                if (!FUNC_2(&VAR_27, 1, 1, VAR_5)) {
                    FUNC_1(VAR_2,
                            "\nError: fread return a number of element different from the expected.\n");
                    FUNC_5(VAR_6);
                    return ((void*)0);
                }
                if (!FUNC_2(&VAR_26, 1, 1, VAR_5)) {
                    FUNC_1(VAR_2,
                            "\nError: fread return a number of element different from the expected.\n");
                    FUNC_5(VAR_6);
                    return ((void*)0);
                }
                if (!FUNC_2(&VAR_25, 1, 1, VAR_5)) {
                    FUNC_1(VAR_2,
                            "\nError: fread return a number of element different from the expected.\n");
                    FUNC_5(VAR_6);
                    return ((void*)0);
                }
                if (!FUNC_2(&VAR_28, 1, 1, VAR_5)) {
                    FUNC_1(VAR_2,
                            "\nError: fread return a number of element different from the expected.\n");
                    FUNC_5(VAR_6);
                    return ((void*)0);
                }

                VAR_6->comps[0].data[VAR_21] = VAR_25;
                VAR_6->comps[1].data[VAR_21] = VAR_26;
                VAR_6->comps[2].data[VAR_21] = VAR_27;
                VAR_6->comps[3].data[VAR_21] = VAR_28;
                VAR_21++;
            }
        } else {
            FUNC_1(VAR_2, "Currently unsupported bit depth : %s\n", VAR_3);
        }
    }
    return VAR_6;
}
