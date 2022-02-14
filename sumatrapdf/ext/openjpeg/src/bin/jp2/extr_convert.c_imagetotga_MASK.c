
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_4__ {scalar_t__ dx; scalar_t__ dy; scalar_t__ prec; scalar_t__ sgnd; scalar_t__* data; scalar_t__ h; scalar_t__ w; } ;
typedef int OPJ_BOOL ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 size_t FUNC_3 (unsigned char*,int,int,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int,int,int,int ) ;

int FUNC_5(opj_image_t * VAR_2, const char *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    OPJ_BOOL VAR_9;
    unsigned int VAR_10;
    int VAR_11, VAR_12 = 0, VAR_13 = 0, VAR_14;
    unsigned int VAR_15;
    float VAR_16, VAR_17, VAR_18, VAR_19;
    unsigned char VAR_20;
    float VAR_21;
    FILE *VAR_22;
    size_t VAR_23;
    VAR_14 = 1;

    VAR_22 = FUNC_1(VAR_3, "wb");
    if (!VAR_22) {
        FUNC_2(VAR_1, "ERROR -> failed to open %s for writing\n", VAR_3);
        return 1;
    }

    for (VAR_10 = 0; VAR_10 < VAR_2->numcomps - 1; VAR_10++) {
        if ((VAR_2->comps[0].dx != VAR_2->comps[VAR_10 + 1].dx)
                || (VAR_2->comps[0].dy != VAR_2->comps[VAR_10 + 1].dy)
                || (VAR_2->comps[0].prec != VAR_2->comps[VAR_10 + 1].prec)
                || (VAR_2->comps[0].sgnd != VAR_2->comps[VAR_10 + 1].sgnd)) {
            FUNC_0(VAR_22);
            FUNC_2(VAR_1,
                    "Unable to create a tga file with such J2K image charateristics.\n");
            return 1;
        }
    }

    VAR_4 = (int)VAR_2->comps[0].w;
    VAR_5 = (int)VAR_2->comps[0].h;


    VAR_9 = (VAR_2->numcomps == 2) || (VAR_2->numcomps == 4);


    VAR_6 = VAR_9 ? 32 : 24;

    if (!FUNC_4(VAR_22, VAR_6, VAR_4, VAR_5, VAR_0)) {
        goto fin;
    }

    VAR_15 = VAR_2->numcomps - 1;

    VAR_21 = 255.0f / (float)((1 << VAR_2->comps[0].prec) - 1);

    VAR_11 = (VAR_2->comps[0].sgnd ? 1 << (VAR_2->comps[0].prec - 1) : 0);
    if (VAR_2->numcomps >= 3) {
        VAR_12 = (VAR_2->comps[1].sgnd ? 1 << (VAR_2->comps[1].prec - 1) : 0);
        VAR_13 = (VAR_2->comps[2].sgnd ? 1 << (VAR_2->comps[2].prec - 1) : 0);
    }

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        unsigned int VAR_24 = (unsigned int)(VAR_8 * VAR_4);

        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_24++) {
            VAR_16 = (float)(VAR_2->comps[0].data[VAR_24] + VAR_11);

            if (VAR_2->numcomps > 2) {
                VAR_17 = (float)(VAR_2->comps[1].data[VAR_24] + VAR_12);
                VAR_18 = (float)(VAR_2->comps[2].data[VAR_24] + VAR_13);
            } else {

                VAR_17 = VAR_16;
                VAR_18 = VAR_16;
            }


            if (VAR_18 > 255.) {
                VAR_18 = 255.;
            } else if (VAR_18 < 0.) {
                VAR_18 = 0.;
            }
            VAR_20 = (unsigned char)(VAR_18 * VAR_21);
            VAR_23 = FUNC_3(&VAR_20, 1, 1, VAR_22);

            if (VAR_23 < 1) {
                FUNC_2(VAR_1, "failed to write 1 byte for %s\n", VAR_3);
                goto fin;
            }
            if (VAR_17 > 255.) {
                VAR_17 = 255.;
            } else if (VAR_17 < 0.) {
                VAR_17 = 0.;
            }
            VAR_20 = (unsigned char)(VAR_17 * VAR_21);
            VAR_23 = FUNC_3(&VAR_20, 1, 1, VAR_22);

            if (VAR_23 < 1) {
                FUNC_2(VAR_1, "failed to write 1 byte for %s\n", VAR_3);
                goto fin;
            }
            if (VAR_16 > 255.) {
                VAR_16 = 255.;
            } else if (VAR_16 < 0.) {
                VAR_16 = 0.;
            }
            VAR_20 = (unsigned char)(VAR_16 * VAR_21);
            VAR_23 = FUNC_3(&VAR_20, 1, 1, VAR_22);

            if (VAR_23 < 1) {
                FUNC_2(VAR_1, "failed to write 1 byte for %s\n", VAR_3);
                goto fin;
            }

            if (VAR_9) {
                VAR_19 = (float)(VAR_2->comps[VAR_15].data[VAR_24]);
                if (VAR_19 > 255.) {
                    VAR_19 = 255.;
                } else if (VAR_19 < 0.) {
                    VAR_19 = 0.;
                }
                VAR_20 = (unsigned char)(VAR_19 * VAR_21);
                VAR_23 = FUNC_3(&VAR_20, 1, 1, VAR_22);

                if (VAR_23 < 1) {
                    FUNC_2(VAR_1, "failed to write 1 byte for %s\n", VAR_3);
                    goto fin;
                }
            }
        }
    }
    VAR_14 = 0;
fin:
    FUNC_0(VAR_22);

    return VAR_14;
}
