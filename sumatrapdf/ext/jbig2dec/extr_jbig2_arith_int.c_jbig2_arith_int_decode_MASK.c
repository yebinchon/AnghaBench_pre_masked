
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int * IAx; } ;
typedef int Jbig2Ctx ;
typedef int Jbig2ArithState ;
typedef TYPE_1__ Jbig2ArithIntCtx ;
typedef int Jbig2ArithCx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int *,int ,int,char*,...) ;

int
FUNC_2(Jbig2Ctx *VAR_3, Jbig2ArithIntCtx *VAR_4, Jbig2ArithState *VAR_5, int32_t *VAR_6)
{
    Jbig2ArithCx *VAR_7 = VAR_4->IAx;
    int VAR_8 = 1;
    int VAR_9;
    int32_t VAR_10;
    int VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;
    int VAR_15 = 0;

    VAR_9 = FUNC_0(VAR_5, &VAR_7[VAR_8], &VAR_15);
    if (VAR_15)
        return FUNC_1(VAR_3, VAR_2, -1, "failed to decode IAx S");
    VAR_8 = (VAR_8 << 1) | VAR_9;

    VAR_11 = FUNC_0(VAR_5, &VAR_7[VAR_8], &VAR_15);
    if (VAR_15)
        return FUNC_1(VAR_3, VAR_2, -1, "failed to decode IAx decision bit 0");
    VAR_8 = (VAR_8 << 1) | VAR_11;
    if (VAR_11) {
        VAR_11 = FUNC_0(VAR_5, &VAR_7[VAR_8], &VAR_15);
        if (VAR_15)
            return FUNC_1(VAR_3, VAR_2, -1, "failed to decode IAx decision bit 1");
        VAR_8 = (VAR_8 << 1) | VAR_11;

        if (VAR_11) {
            VAR_11 = FUNC_0(VAR_5, &VAR_7[VAR_8], &VAR_15);
            if (VAR_15)
                return FUNC_1(VAR_3, VAR_2, -1, "failed to decode IAx decision bit 2");
            VAR_8 = (VAR_8 << 1) | VAR_11;

            if (VAR_11) {
                VAR_11 = FUNC_0(VAR_5, &VAR_7[VAR_8], &VAR_15);
                if (VAR_15)
                    return FUNC_1(VAR_3, VAR_2, -1, "failed to decode IAx decision bit 3");
                VAR_8 = (VAR_8 << 1) | VAR_11;

                if (VAR_11) {
                    VAR_11 = FUNC_0(VAR_5, &VAR_7[VAR_8], &VAR_15);
                    if (VAR_15)
                        return FUNC_1(VAR_3, VAR_2, -1, "failed to decode IAx decision bit 4");
                    VAR_8 = (VAR_8 << 1) | VAR_11;

                    if (VAR_11) {
                        VAR_12 = 32;
                        VAR_13 = 4436;
                    } else {
                        VAR_12 = 12;
                        VAR_13 = 340;
                    }
                } else {
                    VAR_12 = 8;
                    VAR_13 = 84;
                }
            } else {
                VAR_12 = 6;
                VAR_13 = 20;
            }
        } else {
            VAR_12 = 4;
            VAR_13 = 4;
        }
    } else {
        VAR_12 = 2;
        VAR_13 = 0;
    }

    VAR_10 = 0;
    for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
        VAR_11 = FUNC_0(VAR_5, &VAR_7[VAR_8], &VAR_15);
        if (VAR_15)
            return FUNC_1(VAR_3, VAR_2, -1, "failed to decode IAx V bit %d", VAR_14);
        VAR_8 = ((VAR_8 << 1) & 511) | (VAR_8 & 256) | VAR_11;
        VAR_10 = (VAR_10 << 1) | VAR_11;
    }


    if (VAR_10 < VAR_0 - 4436 || VAR_10 > VAR_1 + 4436)
        VAR_10 += VAR_13;
    VAR_10 = VAR_9 ? -VAR_10 : VAR_10;
    *VAR_6 = VAR_10;
    return VAR_9 && VAR_10 == 0 ? 1 : 0;
}
