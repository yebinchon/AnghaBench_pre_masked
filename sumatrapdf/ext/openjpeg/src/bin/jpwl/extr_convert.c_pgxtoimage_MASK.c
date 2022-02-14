
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int x0; int y0; int x1; int y1; TYPE_2__* comps; } ;
typedef TYPE_1__ opj_image_t ;
struct TYPE_11__ {unsigned char* data; int prec; scalar_t__ bpp; int sgnd; } ;
typedef TYPE_2__ opj_image_comp_t ;
struct TYPE_12__ {int x0; int y0; int w; int h; int sgnd; int prec; int bpp; int dx; int dy; } ;
typedef TYPE_3__ opj_image_cmptparm_t ;
struct TYPE_13__ {int image_offset_x0; int image_offset_y0; int subsampling_dx; int subsampling_dy; } ;
typedef TYPE_4__ opj_cparameters_t ;
typedef int OPJ_COLOR_SPACE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,char*,char*,char*,char*,char*,int*,char*,int*,char*,int*) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 TYPE_1__* FUNC_8 (int,TYPE_3__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int VAR_2 ;

opj_image_t* FUNC_12(const char *VAR_3, opj_cparameters_t *VAR_4)
{
    FILE *VAR_5 = ((void*)0);
    int VAR_6, VAR_7, VAR_8;
    int VAR_9, VAR_10, VAR_11;
    OPJ_COLOR_SPACE VAR_12;
    opj_image_cmptparm_t VAR_13;
    opj_image_t * VAR_14 = ((void*)0);
    int VAR_15, VAR_16, VAR_17, VAR_18;

    char VAR_19, VAR_20, VAR_21;
    char VAR_22[32];

    char VAR_23[32];
    int VAR_24;
    opj_image_comp_t *VAR_25 = ((void*)0);

    VAR_10 = 1;
    VAR_12 = VAR_0;

    FUNC_7(&VAR_13, 0, sizeof(opj_image_cmptparm_t));

    VAR_11 = 0;

    VAR_5 = FUNC_2(VAR_3, "rb");
    if (!VAR_5) {
        FUNC_3(VAR_2, "Failed to open %s for reading !\n", VAR_3);
        return ((void*)0);
    }

    FUNC_5(VAR_5, 0, VAR_1);
    if (FUNC_4(VAR_5, "PG%[ \t]%c%c%[ \t+-]%d%[ \t]%d%[ \t]%d", VAR_23, &VAR_19,
               &VAR_20, VAR_22, &VAR_8, VAR_23, &VAR_6, VAR_23, &VAR_7) != 9) {
        FUNC_3(VAR_2,
                "ERROR: Failed to read the right number of element from the fscanf() function!\n");
        FUNC_0(VAR_5);
        return ((void*)0);
    }

    VAR_9 = 0;
    VAR_21 = '+';
    while (VAR_22[VAR_9] != '\0') {
        if (VAR_22[VAR_9] == '-') {
            VAR_21 = '-';
        }
        VAR_9++;
    }

    FUNC_1(VAR_5);
    if (VAR_19 == 'M' && VAR_20 == 'L') {
        VAR_24 = 1;
    } else if (VAR_20 == 'M' && VAR_19 == 'L') {
        VAR_24 = 0;
    } else {
        FUNC_3(VAR_2, "Bad pgx header, please check input file\n");
        FUNC_0(VAR_5);
        return ((void*)0);
    }



    VAR_13.x0 = VAR_4->image_offset_x0;
    VAR_13.y0 = VAR_4->image_offset_y0;
    VAR_13.w = !VAR_13.x0 ? (VAR_6 - 1) * VAR_4->subsampling_dx + 1 :
                 VAR_13.x0 + (VAR_6 - 1) * VAR_4->subsampling_dx + 1;
    VAR_13.h = !VAR_13.y0 ? (VAR_7 - 1) * VAR_4->subsampling_dy + 1 :
                 VAR_13.y0 + (VAR_7 - 1) * VAR_4->subsampling_dy + 1;

    if (VAR_21 == '-') {
        VAR_13.sgnd = 1;
    } else {
        VAR_13.sgnd = 0;
    }
    if (VAR_8 < 8) {
        VAR_18 = 1;
        VAR_16 = 8 - VAR_8;
        VAR_17 = VAR_8 - VAR_16;
        if (VAR_13.sgnd) {
            VAR_15 = (1 << (VAR_8 - 1));
        } else {
            VAR_15 = 0;
        }
        VAR_13.sgnd = 0;
        VAR_8 = 8;
    } else {
        VAR_16 = VAR_17 = VAR_18 = VAR_15 = 0;
    }

    VAR_13.prec = VAR_8;
    VAR_13.bpp = VAR_8;
    VAR_13.dx = VAR_4->subsampling_dx;
    VAR_13.dy = VAR_4->subsampling_dy;


    VAR_14 = FUNC_8(VAR_10, &VAR_13, VAR_12);
    if (!VAR_14) {
        FUNC_0(VAR_5);
        return ((void*)0);
    }

    VAR_14->x0 = VAR_13.x0;
    VAR_14->y0 = VAR_13.x0;
    VAR_14->x1 = VAR_13.w;
    VAR_14->y1 = VAR_13.h;



    VAR_25 = &VAR_14->comps[0];

    for (VAR_9 = 0; VAR_9 < VAR_6 * VAR_7; VAR_9++) {
        int VAR_26;
        if (VAR_18) {
            VAR_26 = FUNC_9(VAR_5) + VAR_15;
            VAR_26 = (VAR_26 << VAR_16) + (VAR_26 >> VAR_17);
            VAR_25->data[VAR_9] = (unsigned char)VAR_26;

            if (VAR_26 > VAR_11) {
                VAR_11 = VAR_26;
            }

            continue;
        }
        if (VAR_25->prec == 8) {
            if (!VAR_25->sgnd) {
                VAR_26 = FUNC_9(VAR_5);
            } else {
                VAR_26 = (char) FUNC_9(VAR_5);
            }
        } else if (VAR_25->prec <= 16) {
            if (!VAR_25->sgnd) {
                VAR_26 = FUNC_11(VAR_5, VAR_24);
            } else {
                VAR_26 = (short) FUNC_11(VAR_5, VAR_24);
            }
        } else {
            if (!VAR_25->sgnd) {
                VAR_26 = FUNC_10(VAR_5, VAR_24);
            } else {
                VAR_26 = (int) FUNC_10(VAR_5, VAR_24);
            }
        }
        if (VAR_26 > VAR_11) {
            VAR_11 = VAR_26;
        }
        VAR_25->data[VAR_9] = VAR_26;
    }
    FUNC_0(VAR_5);
    VAR_25->bpp = FUNC_6(VAR_11) + 1;

    return VAR_14;
}
