
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
typedef int opj_bool ;
struct TYPE_4__ {scalar_t__ dx; scalar_t__ dy; scalar_t__ prec; int w; int h; scalar_t__* data; scalar_t__ sgnd; } ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 size_t FUNC_2 (unsigned char*,int,int,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int,int,int,int ) ;

int FUNC_4(opj_image_t * VAR_2, const char *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    opj_bool VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13;
    unsigned int VAR_14;
    float VAR_15, VAR_16, VAR_17, VAR_18;
    unsigned char VAR_19;
    float VAR_20;
    FILE *VAR_21;
    size_t VAR_22;

    VAR_21 = FUNC_0(VAR_3, "wb");
    if (!VAR_21) {
        FUNC_1(VAR_1, "ERROR -> failed to open %s for writing\n", VAR_3);
        return 1;
    }

    for (VAR_10 = 0; VAR_10 < VAR_2->numcomps - 1; VAR_10++) {
        if ((VAR_2->comps[0].dx != VAR_2->comps[VAR_10 + 1].dx)
                || (VAR_2->comps[0].dy != VAR_2->comps[VAR_10 + 1].dy)
                || (VAR_2->comps[0].prec != VAR_2->comps[VAR_10 + 1].prec)) {
            FUNC_1(VAR_1,
                    "Unable to create a tga file with such J2K image charateristics.");
            return 1;
        }
    }

    VAR_4 = VAR_2->comps[0].w;
    VAR_5 = VAR_2->comps[0].h;


    VAR_9 = (VAR_2->numcomps == 2) || (VAR_2->numcomps == 4);


    VAR_6 = VAR_9 ? 32 : 24;
    if (!FUNC_3(VAR_21, VAR_6, VAR_4, VAR_5, VAR_0)) {
        return 1;
    }

    VAR_14 = VAR_2->numcomps - 1;

    VAR_20 = 255.0f / (float)((1 << VAR_2->comps[0].prec) - 1);

    VAR_11 = (VAR_2->comps[0].sgnd ? 1 << (VAR_2->comps[0].prec - 1) : 0);
    VAR_12 = (VAR_2->comps[1].sgnd ? 1 << (VAR_2->comps[1].prec - 1) : 0);
    VAR_13 = (VAR_2->comps[2].sgnd ? 1 << (VAR_2->comps[2].prec - 1) : 0);

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        unsigned int VAR_23 = VAR_8 * VAR_4;

        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_23++) {
            VAR_15 = (float)(VAR_2->comps[0].data[VAR_23] + VAR_11);

            if (VAR_2->numcomps > 2) {
                VAR_16 = (float)(VAR_2->comps[1].data[VAR_23] + VAR_12);
                VAR_17 = (float)(VAR_2->comps[2].data[VAR_23] + VAR_13);
            } else {
                VAR_16 = VAR_15;
                VAR_17 = VAR_15;
            }


            VAR_19 = (unsigned char)(VAR_17 * VAR_20);
            VAR_22 = FUNC_2(&VAR_19, 1, 1, VAR_21);
            if (VAR_22 < 1) {
                FUNC_1(VAR_1, "failed to write 1 byte for %s\n", VAR_3);
                return 1;
            }

            VAR_19 = (unsigned char)(VAR_16 * VAR_20);
            VAR_22 = FUNC_2(&VAR_19, 1, 1, VAR_21);
            if (VAR_22 < 1) {
                FUNC_1(VAR_1, "failed to write 1 byte for %s\n", VAR_3);
                return 1;
            }

            VAR_19 = (unsigned char)(VAR_15 * VAR_20);
            VAR_22 = FUNC_2(&VAR_19, 1, 1, VAR_21);
            if (VAR_22 < 1) {
                FUNC_1(VAR_1, "failed to write 1 byte for %s\n", VAR_3);
                return 1;
            }

            if (VAR_9) {
                VAR_18 = (float)(VAR_2->comps[VAR_14].data[VAR_23]);
                VAR_19 = (unsigned char)(VAR_18 * VAR_20);
                VAR_22 = FUNC_2(&VAR_19, 1, 1, VAR_21);
                if (VAR_22 < 1) {
                    FUNC_1(VAR_1, "failed to write 1 byte for %s\n", VAR_3);
                    return 1;
                }
            }
        }
    }

    return 0;
}
