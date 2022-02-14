
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* comps; scalar_t__ z0; scalar_t__ y0; scalar_t__ x0; scalar_t__ z1; scalar_t__ y1; scalar_t__ x1; } ;
typedef TYPE_2__ opj_volume_t ;
struct TYPE_4__ {int dx; int w; int dy; int h; int dz; int l; int prec; int x0; int y0; int z0; int* data; scalar_t__ bigendian; int * factor; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (scalar_t__,int) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char*,char*) ;
 int VAR_0 ;

int FUNC_7(opj_volume_t * VAR_1, char *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18;
    FILE *VAR_19 = ((void*)0);
    FILE *VAR_20 = ((void*)0);

    char VAR_21[256];

    for (VAR_15 = 0; VAR_15 < 1; VAR_15++) {

        VAR_19 = FUNC_1(VAR_2, "wb");
        if (!VAR_19) {
            FUNC_2(&VAR_0, "[ERROR] Failed to open %s for writing\n", VAR_2);
            return 1;
        }
        FUNC_2(&VAR_0, "[INFO] Writing outfile %s (%s) \n", VAR_2,
                VAR_1->comps[0].bigendian ? "Bigendian" : "Little-endian");

        VAR_3 = FUNC_4(VAR_1->x1 - VAR_1->x0, VAR_1->comps[VAR_15].dx);
        VAR_4 = VAR_1->comps[VAR_15].w;
        VAR_5 = FUNC_5(VAR_1->comps[VAR_15].w, VAR_1->comps[VAR_15].factor[0]);

        VAR_6 = FUNC_4(VAR_1->y1 - VAR_1->y0, VAR_1->comps[VAR_15].dy);
        VAR_7 = VAR_1->comps[VAR_15].h;
        VAR_8 = FUNC_5(VAR_1->comps[VAR_15].h, VAR_1->comps[VAR_15].factor[1]);

        VAR_9 = FUNC_4(VAR_1->z1 - VAR_1->z0, VAR_1->comps[VAR_15].dz);
        VAR_10 = VAR_1->comps[VAR_15].l;
        VAR_11 = FUNC_5(VAR_1->comps[VAR_15].l, VAR_1->comps[VAR_15].factor[2]);

        VAR_12 = (VAR_1->comps[VAR_15].prec <= 8) ? 255 : (1 <<
                VAR_1->comps[VAR_15].prec) - 1;

        VAR_1->comps[VAR_15].x0 = FUNC_5(VAR_1->comps[VAR_15].x0 -
                                   FUNC_4(VAR_1->x0, VAR_1->comps[VAR_15].dx),
                                   VAR_1->comps[VAR_15].factor[0]);
        VAR_1->comps[VAR_15].y0 = FUNC_5(VAR_1->comps[VAR_15].y0 -
                                   FUNC_4(VAR_1->y0, VAR_1->comps[VAR_15].dy),
                                   VAR_1->comps[VAR_15].factor[1]);
        VAR_1->comps[VAR_15].z0 = FUNC_5(VAR_1->comps[VAR_15].z0 -
                                   FUNC_4(VAR_1->z0, VAR_1->comps[VAR_15].dz),
                                   VAR_1->comps[VAR_15].factor[2]);

        if (VAR_1->comps[0].prec <= 8) {
            VAR_16 = 1;
        } else if (VAR_1->comps[0].prec <= 16) {
            VAR_16 = 2;
        } else {
            VAR_16 = 4;
        }



        for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
            VAR_17 = (VAR_18 / VAR_11 * VAR_9) + (VAR_18 % VAR_11);
            VAR_17 = VAR_5 * VAR_8 * VAR_17;
            for (VAR_13 = 0; VAR_13 < VAR_5 * VAR_8; VAR_13++) {
                int VAR_22 = VAR_1->comps[0].data[(VAR_13 / VAR_5 * VAR_3) + (VAR_13 % VAR_5) + VAR_17];
                if (VAR_1->comps[0].bigendian) {
                    for (VAR_14 = VAR_16 - 1; VAR_14 >= 0; VAR_14--) {
                        char VAR_23 = (char)((VAR_22 >> (VAR_14 * 8)) & 0xff);
                        FUNC_3(&VAR_23, 1, 1, VAR_19);
                    }
                } else {
                    for (VAR_14 = 0; VAR_14 <= VAR_16 - 1; VAR_14++) {
                        char VAR_24 = (char)((VAR_22 >> (VAR_14 * 8)) & 0xff);
                        FUNC_3(&VAR_24, 1, 1, VAR_19);
                    }
                }
            }
        }

    }

    FUNC_0(VAR_19);

    FUNC_6(VAR_21, "%s.img", VAR_2);
    VAR_20 = FUNC_1(VAR_21, "w");
    if (!VAR_20) {
        FUNC_2(&VAR_0, "[ERROR] Failed to open %s for writing\n", VAR_21);
        return 1;
    }
    FUNC_2(VAR_20,
            "Bpp\t%d\nColor Map\t2\nDimensions\t%d\t%d\t%d\nResolution(mm)\t%d\t%d\t%d\t\n",
            VAR_1->comps[0].prec, VAR_5, VAR_8, VAR_11, VAR_1->comps[0].dx, VAR_1->comps[0].dy,
            VAR_1->comps[0].dz);

    FUNC_0(VAR_20);
    return 0;
}
