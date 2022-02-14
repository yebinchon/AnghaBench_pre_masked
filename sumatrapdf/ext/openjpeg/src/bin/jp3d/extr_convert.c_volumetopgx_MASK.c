
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numcomps; int z1; int z0; int x1; int x0; int y1; int y0; TYPE_2__* comps; } ;
typedef TYPE_1__ opj_volume_t ;
struct TYPE_5__ {int w; int h; int l; int prec; int* data; scalar_t__ bigendian; scalar_t__ sgnd; int * factor; int dz; int dy; int dx; } ;
typedef TYPE_2__ opj_volume_comp_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char*,char*,...) ;
 int VAR_0 ;

int FUNC_7(opj_volume_t * VAR_1, char *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    FILE *VAR_17 = ((void*)0);

    for (VAR_14 = 0; VAR_14 < VAR_1->numcomps; VAR_14++) {
        opj_volume_comp_t *VAR_18 = &VAR_1->comps[VAR_14];
        char VAR_19[256];
        int VAR_20 = 0;
        char *VAR_21 = VAR_2;
        while (*VAR_21) {
            VAR_21++;
        }
        while (*VAR_21 != '.') {
            VAR_21--;
        }
        *VAR_21 = '\0';
        for (VAR_16 = 0; VAR_16 < VAR_1->z1 - VAR_1->z0; VAR_16++) {

            if (VAR_1->numcomps > 1) {
                FUNC_6(VAR_19, "%s%d-%d.pgx", VAR_2, VAR_16 + 1, VAR_14);
            } else if ((VAR_1->z1 - VAR_1->z0) > 1) {
                FUNC_6(VAR_19, "%s%d.pgx", VAR_2, VAR_16 + 1);
            } else {
                FUNC_6(VAR_19, "%s.pgx", VAR_2);
            }

            VAR_17 = FUNC_1(VAR_19, "wb");
            if (!VAR_17) {
                FUNC_2(&VAR_0, "[ERROR] Failed to open %s for writing \n", VAR_19);
                return 1;
            }

            FUNC_2(&VAR_0, "[INFO] Writing in %s (%s)\n", VAR_19,
                    VAR_1->comps[0].bigendian ? "Bigendian" : "Little-endian");

            VAR_3 = FUNC_4(VAR_1->x1 - VAR_1->x0, VAR_1->comps[VAR_14].dx);
            VAR_4 = VAR_1->comps[VAR_14].w;
            VAR_5 = FUNC_5(VAR_1->comps[VAR_14].w, VAR_1->comps[VAR_14].factor[0]);

            VAR_6 = FUNC_4(VAR_1->y1 - VAR_1->y0, VAR_1->comps[VAR_14].dy);
            VAR_7 = VAR_1->comps[VAR_14].h;
            VAR_8 = FUNC_5(VAR_1->comps[VAR_14].h, VAR_1->comps[VAR_14].factor[1]);

            VAR_9 = FUNC_4(VAR_1->z1 - VAR_1->z0, VAR_1->comps[VAR_14].dz);
            VAR_10 = VAR_1->comps[VAR_14].l;
            VAR_11 = FUNC_5(VAR_1->comps[VAR_14].l, VAR_1->comps[VAR_14].factor[2]);

            FUNC_2(VAR_17, "PG %c%c %c%d %d %d\n", VAR_18->bigendian ? 'M' : 'L',
                    VAR_18->bigendian ? 'L' : 'M', VAR_18->sgnd ? '-' : '+', VAR_18->prec, VAR_4, VAR_7);
            if (VAR_18->prec <= 8) {
                VAR_20 = 1;
            } else if (VAR_18->prec <= 16) {
                VAR_20 = 2;
            } else {
                VAR_20 = 4;
            }

            VAR_15 = (VAR_16 / VAR_11 * VAR_9) + (VAR_16 % VAR_11);
            VAR_15 = VAR_5 * VAR_8 * VAR_15;

            for (VAR_12 = 0; VAR_12 < VAR_5 * VAR_8; VAR_12++) {
                int VAR_22 = VAR_1->comps[0].data[(VAR_12 / VAR_5 * VAR_3) + (VAR_12 % VAR_5) + VAR_15];
                if (VAR_1->comps[0].bigendian) {
                    for (VAR_13 = VAR_20 - 1; VAR_13 >= 0; VAR_13--) {
                        char VAR_23 = (char)((VAR_22 >> (VAR_13 * 8)) & 0xff);
                        FUNC_3(&VAR_23, 1, 1, VAR_17);
                    }
                } else {
                    for (VAR_13 = 0; VAR_13 <= VAR_20 - 1; VAR_13++) {
                        char VAR_24 = (char)((VAR_22 >> (VAR_13 * 8)) & 0xff);
                        FUNC_3(&VAR_24, 1, 1, VAR_17);
                    }
                }
            }

            FUNC_0(VAR_17);
        }
    }

    return 0;
}
