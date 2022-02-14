
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int width; int height; } ;
struct TYPE_11__ {int GRREFERENCEDX; int GRREFERENCEDY; int* grat; TYPE_3__* GRREFERENCE; } ;
struct TYPE_10__ {int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef TYPE_2__ Jbig2RefinementRegionParams ;
typedef TYPE_3__ Jbig2Image ;
typedef int Jbig2Ctx ;
typedef int Jbig2ArithState ;
typedef int Jbig2ArithCx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int *,int ,int ,char*) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int FUNC_3 (TYPE_3__*,int,int,int) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_8(Jbig2Ctx *VAR_3,
                                        Jbig2Segment *VAR_4,
                                        const Jbig2RefinementRegionParams *VAR_5, Jbig2ArithState *VAR_6, Jbig2Image *VAR_7, Jbig2ArithCx *VAR_8)
{
    const int VAR_9 = VAR_7->width;
    const int VAR_10 = VAR_7->height;
    Jbig2Image *VAR_11 = VAR_5->GRREFERENCE;
    const int VAR_12 = VAR_5->GRREFERENCEDX;
    const int VAR_13 = VAR_5->GRREFERENCEDY;
    uint32_t VAR_14;
    int VAR_15, VAR_16;
    bool VAR_17;
    int VAR_18 = 0;

    if (FUNC_5(VAR_5->grat[0], VAR_5->grat[1]) ||
        FUNC_6(VAR_5->grat[2], VAR_5->grat[3]))
        return FUNC_1(VAR_3, VAR_0, VAR_4->number,
                           "adaptive template pixel is out of field");

    for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
        for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
            VAR_14 = 0;
            VAR_14 |= FUNC_2(VAR_7, VAR_15 - 1, VAR_16 + 0) << 0;
            VAR_14 |= FUNC_2(VAR_7, VAR_15 + 1, VAR_16 - 1) << 1;
            VAR_14 |= FUNC_2(VAR_7, VAR_15 + 0, VAR_16 - 1) << 2;
            VAR_14 |= FUNC_2(VAR_7, VAR_15 + VAR_5->grat[0], VAR_16 + VAR_5->grat[1]) << 3;
            VAR_14 |= FUNC_2(VAR_11, VAR_15 - VAR_12 + 1, VAR_16 - VAR_13 + 1) << 4;
            VAR_14 |= FUNC_2(VAR_11, VAR_15 - VAR_12 + 0, VAR_16 - VAR_13 + 1) << 5;
            VAR_14 |= FUNC_2(VAR_11, VAR_15 - VAR_12 - 1, VAR_16 - VAR_13 + 1) << 6;
            VAR_14 |= FUNC_2(VAR_11, VAR_15 - VAR_12 + 1, VAR_16 - VAR_13 + 0) << 7;
            VAR_14 |= FUNC_2(VAR_11, VAR_15 - VAR_12 + 0, VAR_16 - VAR_13 + 0) << 8;
            VAR_14 |= FUNC_2(VAR_11, VAR_15 - VAR_12 - 1, VAR_16 - VAR_13 + 0) << 9;
            VAR_14 |= FUNC_2(VAR_11, VAR_15 - VAR_12 + 1, VAR_16 - VAR_13 - 1) << 10;
            VAR_14 |= FUNC_2(VAR_11, VAR_15 - VAR_12 + 0, VAR_16 - VAR_13 - 1) << 11;
            VAR_14 |= FUNC_2(VAR_11, VAR_15 - VAR_12 + VAR_5->grat[2], VAR_16 - VAR_13 + VAR_5->grat[3]) << 12;
            VAR_17 = FUNC_0(VAR_6, &VAR_8[VAR_14], &VAR_18);
            if (VAR_18)
                return FUNC_1(VAR_3, VAR_0, VAR_4->number, "failed to decode arithmetic code when handling refinement template0");
            FUNC_3(VAR_7, VAR_15, VAR_16, VAR_17);
        }
    }
    return 0;
}
