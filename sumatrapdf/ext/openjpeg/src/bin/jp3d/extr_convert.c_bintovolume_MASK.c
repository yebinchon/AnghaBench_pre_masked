
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
struct TYPE_11__ {int prec; int* data; scalar_t__ bpp; int sgnd; } ;
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
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 TYPE_1__* FUNC_8 (int,TYPE_3__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (char*,char*,int*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_13 (char*,char*,int) ;

opj_volume_t* FUNC_14(char *VAR_3, char *VAR_4,
                          opj_cparameters_t *VAR_5)
{
    int VAR_6 = VAR_5->subsampling_dx;
    int VAR_7 = VAR_5->subsampling_dy;
    int VAR_8 = VAR_5->subsampling_dz;

    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 1;
    int VAR_15, VAR_16 = 0;


    char VAR_17[100];
    int VAR_18;

    FILE *VAR_19 = ((void*)0);
    FILE *VAR_20 = ((void*)0);
    OPJ_COLOR_SPACE VAR_21;
    opj_volume_cmptparm_t VAR_22;
    opj_volume_t * VAR_23 = ((void*)0);
    opj_volume_comp_t *VAR_24 = ((void*)0);

    VAR_18 = 0;
    VAR_21 = VAR_0;

    VAR_20 = FUNC_3(VAR_4, "r");
    if (!VAR_20) {
        FUNC_4(VAR_2, "[ERROR] Failed to open %s for reading !!\n", VAR_4);
        return 0;
    }

    FUNC_5(VAR_20, 0, VAR_1);
    while (!FUNC_1(VAR_20)) {
        FUNC_2(VAR_17, 100, VAR_20);

        if (FUNC_13(VAR_17, "Bpp", 3) == 0) {
            FUNC_12(VAR_17, "%*s%*[ \t]%d", &VAR_15);
        } else if (FUNC_13(VAR_17, "Color", 5) == 0) {
            FUNC_12(VAR_17, "%*s%*[ \t]%d", &VAR_21);
        } else if (FUNC_13(VAR_17, "Dim", 3) == 0) {
            FUNC_12(VAR_17, "%*s%*[ \t]%d%*[ \t]%d%*[ \t]%d", &VAR_11, &VAR_12, &VAR_13);
        }
    }
    FUNC_0(VAR_20);


    FUNC_7(&VAR_22, 0, sizeof(opj_volume_cmptparm_t));

    VAR_22.prec = VAR_15;
    VAR_22.bpp = VAR_15;
    VAR_22.sgnd = 0;
    VAR_22.bigendian = VAR_18;
    VAR_22.dcoffset = VAR_5->dcoffset;
    VAR_22.dx = VAR_6;
    VAR_22.dy = VAR_7;
    VAR_22.dz = VAR_8;
    VAR_22.w = VAR_11;
    VAR_22.h = VAR_12;
    VAR_22.l = VAR_13;


    VAR_23 = FUNC_8(VAR_14, &VAR_22, VAR_21);
    if (!VAR_23) {
        FUNC_4(VAR_2, "[ERROR] Unable to create volume");
        FUNC_0(VAR_19);
        return ((void*)0);
    }


    VAR_23->x0 = VAR_5->volume_offset_x0;
    VAR_23->y0 = VAR_5->volume_offset_y0;
    VAR_23->z0 = VAR_5->volume_offset_z0;
    VAR_23->x1 = VAR_5->volume_offset_x0 + (VAR_11 - 1) * VAR_6 + 1;
    VAR_23->y1 = VAR_5->volume_offset_y0 + (VAR_12 - 1) * VAR_7 + 1;
    VAR_23->z1 = VAR_5->volume_offset_z0 + (VAR_13 - 1) * VAR_8 + 1;


    VAR_19 = FUNC_3(VAR_3, "rb");
    if (!VAR_19) {
        FUNC_4(VAR_2, "[ERROR] Failed to open %s for reading !!\n", VAR_3);
        return 0;
    }


    for (VAR_10 = 0; VAR_10 < VAR_23->numcomps; VAR_10++) {
        int VAR_25 = VAR_11 * VAR_12 * VAR_13;

        VAR_24 = &VAR_23->comps[VAR_10];
        for (VAR_9 = 0; VAR_9 < VAR_25; VAR_9++) {
            int VAR_26;
            if (VAR_24->prec <= 8) {
                if (!VAR_24->sgnd) {
                    VAR_26 = FUNC_9(VAR_19);
                } else {
                    VAR_26 = (char) FUNC_9(VAR_19);
                }
            } else if (VAR_24->prec <= 16) {
                if (!VAR_24->sgnd) {
                    VAR_26 = FUNC_11(VAR_19, VAR_18);
                } else {
                    VAR_26 = (short) FUNC_11(VAR_19, VAR_18);
                }
            } else {
                if (!VAR_24->sgnd) {
                    VAR_26 = FUNC_10(VAR_19, VAR_18);
                } else {
                    VAR_26 = (int) FUNC_10(VAR_19, VAR_18);
                }
            }
            if (VAR_26 > VAR_16) {
                VAR_16 = VAR_26;
            }
            VAR_24->data[VAR_9] = VAR_26;
        }
        VAR_24->bpp = FUNC_6(VAR_16) + 1;
    }
    FUNC_0(VAR_19);
    return VAR_23;
}
