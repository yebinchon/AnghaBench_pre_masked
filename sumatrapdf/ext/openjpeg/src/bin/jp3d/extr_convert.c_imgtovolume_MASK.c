
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int numcomps; TYPE_2__* comps; scalar_t__ z1; scalar_t__ y1; scalar_t__ x1; scalar_t__ z0; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_1__ opj_volume_t ;
struct TYPE_11__ {int prec; int* data; int bpp; int sgnd; } ;
typedef TYPE_2__ opj_volume_comp_t ;
struct TYPE_12__ {int prec; int bpp; int bigendian; int dx; int dy; int dz; int w; int h; int l; int dcoffset; scalar_t__ sgnd; } ;
typedef TYPE_3__ opj_volume_cmptparm_t ;
struct TYPE_13__ {int subsampling_dx; int subsampling_dy; int subsampling_dz; scalar_t__ volume_offset_z0; scalar_t__ volume_offset_y0; scalar_t__ volume_offset_x0; int dcoffset; } ;
typedef TYPE_4__ opj_cparameters_t ;
typedef int OPJ_COLOR_SPACE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 TYPE_1__* FUNC_8 (int,TYPE_3__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (char*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*,int) ;
 char* FUNC_16 (char*,char) ;

opj_volume_t* FUNC_17(char *VAR_4, opj_cparameters_t *VAR_5)
{
    int VAR_6 = VAR_5->subsampling_dx;
    int VAR_7 = VAR_5->subsampling_dy;
    int VAR_8 = VAR_5->subsampling_dz;

    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 1;
    int VAR_15, VAR_16 = 0, VAR_17 = 0;
    float VAR_18, VAR_19, VAR_20;
    char VAR_21[100], VAR_22[100], VAR_23[100], *VAR_24;
    char VAR_25[100], VAR_26[100];
    int VAR_27;

    FILE *VAR_28 = ((void*)0);
    FILE *VAR_29 = ((void*)0);
    OPJ_COLOR_SPACE VAR_30;
    opj_volume_cmptparm_t VAR_31;
    opj_volume_t * VAR_32 = ((void*)0);
    opj_volume_comp_t *VAR_33 = ((void*)0);

    VAR_27 = 0;
    VAR_30 = VAR_0;

    VAR_29 = FUNC_3(VAR_4, "r");
    if (!VAR_29) {
        FUNC_4(VAR_2, "[ERROR] Failed to open %s for reading !!\n", VAR_4);
        return 0;
    }


    FUNC_14(VAR_22, VAR_4);
    if ((VAR_24 = FUNC_16(VAR_22, '/')) != ((void*)0)) {
        VAR_24++;
        *VAR_24 = '\0';
        FUNC_14(VAR_23, VAR_22);
    } else {
        FUNC_14(VAR_23, "./");
    }

    FUNC_5(VAR_29, 0, VAR_1);
    while (!FUNC_1(VAR_29)) {
        FUNC_2(VAR_25, 100, VAR_29);

        if (FUNC_15(VAR_25, "Image", 5) == 0) {
            FUNC_12(VAR_25, "%*s%*[ \t]%s", VAR_26);
        } else if (FUNC_15(VAR_25, "File", 4) == 0) {
            FUNC_12(VAR_25, "%*s %*s%*[ \t]%s", VAR_21);
            FUNC_13(VAR_23, VAR_21);
            FUNC_14(VAR_21, VAR_23);
        } else if (FUNC_15(VAR_25, "Min", 3) == 0) {
            FUNC_12(VAR_25, "%*s %*s%*[ \t]%d%*[ \t]%d", &VAR_17, &VAR_16);
            VAR_15 = FUNC_6(VAR_16 - VAR_17 + 1);
        } else if (FUNC_15(VAR_25, "Bpp", 3) == 0) {
            FUNC_12(VAR_25, "%*s%*[ \t]%d", &VAR_15);
        } else if (FUNC_15(VAR_25, "Color", 5) == 0) {
            FUNC_12(VAR_25, "%*s %*s%*[ \t]%d", &VAR_30);
        } else if (FUNC_15(VAR_25, "Dim", 3) == 0) {
            FUNC_12(VAR_25, "%*s%*[ \t]%d%*[ \t]%d%*[ \t]%d", &VAR_11, &VAR_12, &VAR_13);
        } else if (FUNC_15(VAR_25, "Res", 3) == 0) {
            FUNC_12(VAR_25, "%*s%*[ \t]%f%*[ \t]%f%*[ \t]%f", &VAR_18, &VAR_19, &VAR_20);
        }

    }




    FUNC_0(VAR_29);


    if (!VAR_15 || !VAR_11 || !VAR_12 || !VAR_13) {
        FUNC_4(VAR_2,
                "[ERROR] Unable to read IMG file correctly. Found some null values.");
        return ((void*)0);
    }


    FUNC_7(&VAR_31, 0, sizeof(opj_volume_cmptparm_t));

    VAR_31.prec = VAR_15;
    VAR_31.bpp = VAR_15;
    VAR_31.sgnd = 0;
    VAR_31.bigendian = VAR_27;
    VAR_31.dcoffset = VAR_5->dcoffset;
    VAR_31.dx = VAR_6;
    VAR_31.dy = VAR_7;
    VAR_31.dz = VAR_8;
    VAR_31.w = VAR_11;
    VAR_31.h = VAR_12;
    VAR_31.l = VAR_13;


    VAR_32 = FUNC_8(VAR_14, &VAR_31, VAR_30);
    if (!VAR_32) {
        FUNC_4(VAR_3, "[ERROR] Unable to create volume");
        return ((void*)0);
    }


    VAR_32->x0 = VAR_5->volume_offset_x0;
    VAR_32->y0 = VAR_5->volume_offset_y0;
    VAR_32->z0 = VAR_5->volume_offset_z0;
    VAR_32->x1 = VAR_5->volume_offset_x0 + (VAR_11 - 1) * VAR_6 + 1;
    VAR_32->y1 = VAR_5->volume_offset_y0 + (VAR_12 - 1) * VAR_7 + 1;
    VAR_32->z1 = VAR_5->volume_offset_z0 + (VAR_13 - 1) * VAR_8 + 1;

    VAR_16 = 0;

    VAR_28 = FUNC_3(VAR_21, "rb");
    if (!VAR_28) {
        FUNC_4(VAR_2, "[ERROR] Failed to open %s for reading !!\n", VAR_21);
        FUNC_0(VAR_28);
        return 0;
    }


    for (VAR_10 = 0; VAR_10 < VAR_32->numcomps; VAR_10++) {
        int VAR_34 = VAR_11 * VAR_12 * VAR_13;

        VAR_33 = &VAR_32->comps[VAR_10];
        for (VAR_9 = 0; VAR_9 < VAR_34; VAR_9++) {
            int VAR_35;
            if (VAR_33->prec <= 8) {
                if (!VAR_33->sgnd) {
                    VAR_35 = FUNC_9(VAR_28);
                } else {
                    VAR_35 = (char) FUNC_9(VAR_28);
                }
            } else if (VAR_33->prec <= 16) {
                if (!VAR_33->sgnd) {
                    VAR_35 = FUNC_11(VAR_28, VAR_27);
                } else {
                    VAR_35 = (short) FUNC_11(VAR_28, VAR_27);
                }
            } else {
                if (!VAR_33->sgnd) {
                    VAR_35 = FUNC_10(VAR_28, VAR_27);
                } else {
                    VAR_35 = (int) FUNC_10(VAR_28, VAR_27);
                }
            }
            if (VAR_35 > VAR_16) {
                VAR_16 = VAR_35;
            }
            VAR_33->data[VAR_9] = VAR_35;
        }
        VAR_33->bpp = FUNC_6(VAR_16) + 1;
    }
    FUNC_0(VAR_28);
    return VAR_32;
}
