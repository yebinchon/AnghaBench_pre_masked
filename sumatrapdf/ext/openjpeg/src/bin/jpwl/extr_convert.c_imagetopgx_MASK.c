
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numcomps; TYPE_2__* comps; } ;
typedef TYPE_1__ opj_image_t ;
struct TYPE_5__ {int w; int h; int prec; int* data; scalar_t__ sgnd; } ;
typedef TYPE_2__ opj_image_comp_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 (char*,int,int,int *) ;
 scalar_t__ FUNC_5 (size_t const) ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_0 ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,size_t const) ;

int FUNC_9(opj_image_t * VAR_1, const char *VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5, VAR_6, VAR_7;
    FILE *VAR_8 = ((void*)0);

    for (VAR_7 = 0; VAR_7 < VAR_1->numcomps; VAR_7++) {
        opj_image_comp_t *VAR_9 = &VAR_1->comps[VAR_7];
        char VAR_10[256];
        char *VAR_11 = VAR_10;
        int VAR_12 = 0;
        size_t VAR_13;
        const size_t VAR_14 = FUNC_7(VAR_2);
        const size_t VAR_15 = VAR_14 - 4;
        const size_t VAR_16 = VAR_15 + 1 + 1 + 4;
        if (VAR_2[VAR_15] != '.') {

            FUNC_2(VAR_0, "ERROR -> Impossible happen.");
            return 1;
        }
        if (VAR_16 > 256) {
            VAR_11 = (char*)FUNC_5(VAR_16 + 1);
        }
        FUNC_8(VAR_11, VAR_2, VAR_15);

        FUNC_6(VAR_11 + VAR_15, "_%d.pgx", VAR_7);



        VAR_8 = FUNC_1(VAR_11, "wb");
        if (!VAR_8) {
            FUNC_2(VAR_0, "ERROR -> failed to open %s for writing\n", VAR_11);
            return 1;
        }

        if (VAR_16 > 256) {
            FUNC_3(VAR_11);
        }

        VAR_3 = VAR_1->comps[VAR_7].w;
        VAR_4 = VAR_1->comps[VAR_7].h;

        FUNC_2(*VAR_8, "PG ML %c %d %d %d\n", VAR_9->sgnd ? '-' : '+', VAR_9->prec, VAR_3, VAR_4);
        if (VAR_9->prec <= 8) {
            VAR_12 = 1;
        } else if (VAR_9->prec <= 16) {
            VAR_12 = 2;
        } else {
            VAR_12 = 4;
        }
        for (VAR_5 = 0; VAR_5 < VAR_3 * VAR_4; VAR_5++) {
            int VAR_17 = VAR_1->comps[VAR_7].data[VAR_5];
            for (VAR_6 = VAR_12 - 1; VAR_6 >= 0; VAR_6--) {
                char VAR_18 = (char)(VAR_17 >> (VAR_6 * 8));
                VAR_13 = FUNC_4(&VAR_18, 1, 1, VAR_8);
                if (VAR_13 < 1) {
                    FUNC_2(VAR_0, "failed to write 1 byte for %s\n", VAR_11);
                    FUNC_0(VAR_8);
                    return 1;
                }
            }
        }
        FUNC_0(VAR_8);
    }

    return 0;
}
