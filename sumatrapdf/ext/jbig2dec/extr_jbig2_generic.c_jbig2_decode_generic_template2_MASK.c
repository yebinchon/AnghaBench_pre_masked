
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int byte ;
struct TYPE_6__ {int width; int height; int stride; scalar_t__ data; } ;
struct TYPE_5__ {int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef TYPE_2__ Jbig2Image ;
typedef int Jbig2GenericRegionParams ;
typedef int Jbig2Ctx ;
typedef int Jbig2ArithState ;
typedef int Jbig2ArithCx ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int const,int ) ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int FUNC_3 (char*,int const,int const) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(Jbig2Ctx *VAR_2,
                                Jbig2Segment *VAR_3,
                                const Jbig2GenericRegionParams *VAR_4, Jbig2ArithState *VAR_5, Jbig2Image *VAR_6, Jbig2ArithCx *VAR_7)
{
    const uint32_t VAR_8 = VAR_6->width;
    const uint32_t VAR_9 = VAR_6->height;
    const uint32_t VAR_10 = VAR_6->stride;
    uint32_t VAR_11, VAR_12;
    byte *VAR_13 = ((void*)0);
    byte *VAR_14 = ((void*)0);
    byte *VAR_15 = (byte *) VAR_6->data;
    int VAR_16 = 0;





    if (VAR_8 <= 0)
        return 0;

    for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
        uint32_t VAR_17;
        uint32_t VAR_18;
        uint32_t VAR_19;
        uint32_t VAR_20 = (VAR_8 + 7) & -8;

        VAR_18 = VAR_14 ? VAR_14[0] : 0;
        VAR_19 = VAR_13 ? VAR_13[0] << 4 : 0;
        VAR_17 = ((VAR_18 >> 3) & 0x7c) | ((VAR_19 >> 3) & 0x380);


        for (VAR_11 = 0; VAR_11 < VAR_20; VAR_11 += 8) {
            byte VAR_21 = 0;
            int VAR_22;
            int VAR_23 = VAR_8 - VAR_11 > 8 ? 8 : VAR_8 - VAR_11;

            if (VAR_14)
                VAR_18 = (VAR_18 << 8) | (VAR_11 + 8 < VAR_8 ? VAR_14[(VAR_11 >> 3) + 1] : 0);

            if (VAR_13)
                VAR_19 = (VAR_19 << 8) | (VAR_11 + 8 < VAR_8 ? VAR_13[(VAR_11 >> 3) + 1] << 4 : 0);


            for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
                bool VAR_24;

                VAR_24 = FUNC_1(VAR_5, &VAR_7[VAR_17], &VAR_16);
                if (VAR_16)
                    return FUNC_2(VAR_2, VAR_0, VAR_3->number, "failed to decode arithmetic code when handling generic template2 optimized");
                VAR_21 |= VAR_24 << (7 - VAR_22);
                VAR_17 = ((VAR_17 & 0x1bd) << 1) | VAR_24 | ((VAR_18 >> (10 - VAR_22)) & 0x4) | ((VAR_19 >> (10 - VAR_22)) & 0x80);
            }
            VAR_15[VAR_11 >> 3] = VAR_21;
        }



        VAR_13 = VAR_14;
        VAR_14 = VAR_15;
        VAR_15 += VAR_10;
    }

    return 0;
}
