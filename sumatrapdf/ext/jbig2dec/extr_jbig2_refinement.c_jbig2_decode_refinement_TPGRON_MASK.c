
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_15__ {int width; int height; } ;
struct TYPE_14__ {scalar_t__ GRTEMPLATE; int * grat; } ;
typedef TYPE_1__ Jbig2RefinementRegionParams ;
typedef TYPE_2__ Jbig2Image ;
typedef int Jbig2Ctx ;
typedef int Jbig2ArithState ;
typedef int Jbig2ArithCx ;
typedef size_t (* ContextBuilder ) (TYPE_1__ const*,TYPE_2__*,int,int) ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_2__*,int,int) ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int *,int ,int,char*) ;
 int FUNC_3 (TYPE_2__*,int,int,int) ;
 size_t FUNC_4 (TYPE_1__ const*,TYPE_2__*,int,int) ;
 size_t FUNC_5 (TYPE_1__ const*,TYPE_2__*,int,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(Jbig2Ctx *VAR_1, const Jbig2RefinementRegionParams *VAR_2, Jbig2ArithState *VAR_3, Jbig2Image *VAR_4, Jbig2ArithCx *VAR_5)
{
    const int VAR_6 = VAR_4->width;
    const int VAR_7 = VAR_4->height;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = 0;
    uint32_t VAR_13 = (VAR_2->GRTEMPLATE ? 0x40 : 0x100);
    ContextBuilder VAR_14 = (VAR_2->GRTEMPLATE ? FUNC_5 : FUNC_4);
    int VAR_15 = 0;

    if (VAR_2->GRTEMPLATE == 0 &&
        (FUNC_6(VAR_2->grat[0], VAR_2->grat[1]) ||
        FUNC_7(VAR_2->grat[2], VAR_2->grat[3])))
        return FUNC_2(VAR_1, VAR_0, -1,
                           "adaptive template pixel is out of field");

    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
        VAR_12 ^= FUNC_1(VAR_3, &VAR_5[VAR_13], &VAR_15);
        if (VAR_15)
            return FUNC_2(VAR_1, VAR_0, -1, "failed to decode arithmetic code when handling refinement TPGRON1");
        if (!VAR_12) {
            for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
                VAR_11 = FUNC_1(VAR_3, &VAR_5[VAR_14(VAR_2, VAR_4, VAR_8, VAR_9)], &VAR_15);
                if (VAR_15)
                    return FUNC_2(VAR_1, VAR_0, -1, "failed to decode arithmetic code when handling refinement TPGRON1");
                FUNC_3(VAR_4, VAR_8, VAR_9, VAR_11);
            }
        } else {
            for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
                VAR_10 = FUNC_0(VAR_2, VAR_4, VAR_8, VAR_9);
                if (VAR_10 < 0) {
                    VAR_11 = FUNC_1(VAR_3, &VAR_5[VAR_14(VAR_2, VAR_4, VAR_8, VAR_9)], &VAR_15);
                    if (VAR_15)
                        return FUNC_2(VAR_1, VAR_0, -1, "failed to decode arithmetic code when handling refinement TPGRON1");
                    FUNC_3(VAR_4, VAR_8, VAR_9, VAR_11);
                } else
                    FUNC_3(VAR_4, VAR_8, VAR_9, VAR_10);
            }
        }
    }

    return 0;
}
