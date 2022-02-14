
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_36__ {int* gbat; int MMR; int GBTEMPLATE; int USESKIP; scalar_t__ TPGDON; } ;
struct TYPE_35__ {int stride; int height; } ;
struct TYPE_34__ {int data_length; int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef TYPE_2__ Jbig2Image ;
typedef TYPE_3__ Jbig2GenericRegionParams ;
typedef int Jbig2Ctx ;
typedef int Jbig2ArithState ;
typedef int Jbig2ArithCx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,TYPE_3__ const*,int *,TYPE_2__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_3__ const*,int *,TYPE_2__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_3__ const*,int *,TYPE_2__*,int *) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_3__ const*,int *,TYPE_2__*,int *) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_3__ const*,int *,TYPE_2__*,int *) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_3__ const*,int *,TYPE_2__*,int *) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_3__ const*,int *,TYPE_2__*,int *) ;
 int FUNC_7 (int *,TYPE_1__*,TYPE_3__ const*,int *,TYPE_2__*,int *) ;
 int FUNC_8 (int *,TYPE_1__*,TYPE_3__ const*,int *,TYPE_2__*,int *) ;
 int FUNC_9 (int *,int ,int ,char*,int,int) ;

int
FUNC_10(Jbig2Ctx *VAR_2,
                            Jbig2Segment *VAR_3, const Jbig2GenericRegionParams *VAR_4, Jbig2ArithState *VAR_5, Jbig2Image *VAR_6, Jbig2ArithCx *VAR_7)
{
    const int8_t *VAR_8 = VAR_4->gbat;

    if (VAR_6->stride * VAR_6->height > (1 << 26) && VAR_3->data_length < VAR_6->stride * VAR_6->height / (1 << 16)) {
        return FUNC_9(VAR_2, VAR_1, VAR_3->number,
                           "region is far larger than data provided (%d << %d), aborting to prevent DOS", VAR_3->data_length, VAR_6->stride * VAR_6->height);
    }

    if (!VAR_4->MMR && VAR_4->TPGDON)
        return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    if (!VAR_4->MMR && VAR_4->GBTEMPLATE == 0) {
        if (!VAR_4->USESKIP && VAR_8[0] == +3 && VAR_8[1] == -1 && VAR_8[2] == -3 && VAR_8[3] == -1 && VAR_8[4] == +2 && VAR_8[5] == -2 && VAR_8[6] == -2 && VAR_8[7] == -2)
            return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        else
            return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    } else if (!VAR_4->MMR && VAR_4->GBTEMPLATE == 1) {
        if (!VAR_4->USESKIP && VAR_8[0] == +3 && VAR_8[1] == -1)
            return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        else
            return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    }
    else if (!VAR_4->MMR && VAR_4->GBTEMPLATE == 2) {
        if (!VAR_4->USESKIP && VAR_8[0] == 2 && VAR_8[1] == -1)
            return FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        else
            return FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    } else if (!VAR_4->MMR && VAR_4->GBTEMPLATE == 3) {
        if (!VAR_4->USESKIP && VAR_8[0] == 2 && VAR_8[1] == -1)
            return FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        else
            return FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    }

    {
        int VAR_9;

        for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
            FUNC_9(VAR_2, VAR_0, VAR_3->number, "gbat[%d] = %d", VAR_9, VAR_4->gbat[VAR_9]);
    }

    return FUNC_9(VAR_2, VAR_1, VAR_3->number, "unsupported generic region (MMR=%d, GBTEMPLATE=%d)", VAR_4->MMR, VAR_4->GBTEMPLATE);
}
