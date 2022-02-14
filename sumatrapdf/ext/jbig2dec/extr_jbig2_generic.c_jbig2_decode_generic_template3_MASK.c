
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
    byte *VAR_11 = ((void*)0);
    byte *VAR_12 = (byte *) VAR_6->data;
    uint32_t VAR_13, VAR_14;
    int VAR_15;





    if (VAR_8 <= 0)
        return 0;

    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
        uint32_t VAR_16;
        uint32_t VAR_17;
        uint32_t VAR_18 = (VAR_8 + 7) & -8;

        VAR_17 = VAR_11 ? VAR_11[0] : 0;
        VAR_16 = (VAR_17 >> 1) & 0x3f0;


        for (VAR_13 = 0; VAR_13 < VAR_18; VAR_13 += 8) {
            byte VAR_19 = 0;
            int VAR_20;
            int VAR_21 = VAR_8 - VAR_13 > 8 ? 8 : VAR_8 - VAR_13;

            if (VAR_11)
                VAR_17 = (VAR_17 << 8) | (VAR_13 + 8 < VAR_8 ? VAR_11[(VAR_13 >> 3) + 1] : 0);


            for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
                bool VAR_22;

                VAR_22 = FUNC_1(VAR_5, &VAR_7[VAR_16], &VAR_15);
                if (VAR_15)
                    return FUNC_2(VAR_2, VAR_0, VAR_3->number, "failed to decode arithmetic code when handling generic template3 optimized");
                VAR_19 |= VAR_22 << (7 - VAR_20);
                VAR_16 = ((VAR_16 & 0x1f7) << 1) | VAR_22 | ((VAR_17 >> (8 - VAR_20)) & 0x10);
            }
            VAR_12[VAR_13 >> 3] = VAR_19;
        }



        VAR_11 = VAR_12;
        VAR_12 += VAR_10;
    }

    return 0;
}
