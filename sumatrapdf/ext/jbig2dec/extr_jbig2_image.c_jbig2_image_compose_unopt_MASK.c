
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int width; int height; } ;
typedef TYPE_1__ Jbig2Image ;
typedef int Jbig2Ctx ;
typedef int Jbig2ComposeOp ;







 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(Jbig2Ctx *VAR_0, Jbig2Image *VAR_1, Jbig2Image *VAR_2, int VAR_3, int VAR_4, Jbig2ComposeOp VAR_5)
{
    uint32_t VAR_6, VAR_7;
    uint32_t VAR_8 = VAR_2->width;
    uint32_t VAR_9 = VAR_2->height;
    uint32_t VAR_10 = 0;
    uint32_t VAR_11 = 0;


    if (VAR_3 < 0) {
        VAR_10 += -VAR_3;
        if (VAR_8 < (uint32_t) -VAR_3)
            VAR_8 = 0;
        else
            VAR_8 -= -VAR_3;
        VAR_3 = 0;
    }
    if (VAR_4 < 0) {
        VAR_11 += -VAR_4;
        if (VAR_9 < (uint32_t) -VAR_4)
            VAR_9 = 0;
        else
            VAR_9 -= -VAR_4;
        VAR_4 = 0;
    }
    if ((uint32_t) VAR_3 + VAR_8 >= VAR_1->width) {
        if (VAR_1->width >= (uint32_t) VAR_3)
            VAR_8 = VAR_1->width - VAR_3;
        else
            VAR_8 = 0;
    }
    if ((uint32_t) VAR_4 + VAR_9 >= VAR_1->height) {
        if (VAR_1->height >= (uint32_t) VAR_4)
            VAR_9 = VAR_1->height - VAR_4;
        else
            VAR_9 = 0;
    }

    switch (VAR_5) {
    case 131:
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
            for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
                FUNC_1(VAR_1, VAR_6 + VAR_3, VAR_7 + VAR_4, FUNC_0(VAR_2, VAR_6 + VAR_10, VAR_7 + VAR_11) | FUNC_0(VAR_1, VAR_6 + VAR_3, VAR_7 + VAR_4));
            }
        }
        break;
    case 132:
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
            for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
                FUNC_1(VAR_1, VAR_6 + VAR_3, VAR_7 + VAR_4, FUNC_0(VAR_2, VAR_6 + VAR_10, VAR_7 + VAR_11) & FUNC_0(VAR_1, VAR_6 + VAR_3, VAR_7 + VAR_4));
            }
        }
        break;
    case 128:
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
            for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
                FUNC_1(VAR_1, VAR_6 + VAR_3, VAR_7 + VAR_4, FUNC_0(VAR_2, VAR_6 + VAR_10, VAR_7 + VAR_11) ^ FUNC_0(VAR_1, VAR_6 + VAR_3, VAR_7 + VAR_4));
            }
        }
        break;
    case 129:
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
            for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
                FUNC_1(VAR_1, VAR_6 + VAR_3, VAR_7 + VAR_4, (FUNC_0(VAR_2, VAR_6 + VAR_10, VAR_7 + VAR_11) == FUNC_0(VAR_1, VAR_6 + VAR_3, VAR_7 + VAR_4)));
            }
        }
        break;
    case 130:
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
            for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
                FUNC_1(VAR_1, VAR_6 + VAR_3, VAR_7 + VAR_4, FUNC_0(VAR_2, VAR_6 + VAR_10, VAR_7 + VAR_11));
            }
        }
        break;
    }

    return 0;
}
