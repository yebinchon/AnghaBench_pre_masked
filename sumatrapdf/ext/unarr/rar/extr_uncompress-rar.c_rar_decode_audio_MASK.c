
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AudioState {int* delta; int lastdelta; int lastbyte; int* weight; scalar_t__* error; int count; } ;
typedef int int8_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static uint8_t FUNC_2(struct AudioState *VAR_0, int8_t *VAR_1, int8_t VAR_2)
{
    uint8_t VAR_3, VAR_4;
    int VAR_5;

    VAR_0->delta[3] = VAR_0->delta[2];
    VAR_0->delta[2] = VAR_0->delta[1];
    VAR_0->delta[1] = VAR_0->lastdelta - VAR_0->delta[0];
    VAR_0->delta[0] = VAR_0->lastdelta;

    VAR_3 = ((8 * VAR_0->lastbyte + VAR_0->weight[0] * VAR_0->delta[0] + VAR_0->weight[1] * VAR_0->delta[1] + VAR_0->weight[2] * VAR_0->delta[2] + VAR_0->weight[3] * VAR_0->delta[3] + VAR_0->weight[4] * *VAR_1) >> 3) & 0xFF;
    VAR_4 = (VAR_3 - VAR_2) & 0xFF;

    VAR_5 = VAR_2 << 3;
    VAR_0->error[0] += FUNC_0(VAR_5);
    VAR_0->error[1] += FUNC_0(VAR_5 - VAR_0->delta[0]); VAR_0->error[2] += FUNC_0(VAR_5 + VAR_0->delta[0]);
    VAR_0->error[3] += FUNC_0(VAR_5 - VAR_0->delta[1]); VAR_0->error[4] += FUNC_0(VAR_5 + VAR_0->delta[1]);
    VAR_0->error[5] += FUNC_0(VAR_5 - VAR_0->delta[2]); VAR_0->error[6] += FUNC_0(VAR_5 + VAR_0->delta[2]);
    VAR_0->error[7] += FUNC_0(VAR_5 - VAR_0->delta[3]); VAR_0->error[8] += FUNC_0(VAR_5 + VAR_0->delta[3]);
    VAR_0->error[9] += FUNC_0(VAR_5 - *VAR_1); VAR_0->error[10] += FUNC_0(VAR_5 + *VAR_1);

    *VAR_1 = VAR_0->lastdelta = (int8_t)(VAR_4 - VAR_0->lastbyte);
    VAR_0->lastbyte = VAR_4;

    if (!(++VAR_0->count & 0x1F)) {
        uint8_t VAR_6, VAR_7 = 0;
        for (VAR_6 = 1; VAR_6 < 11; VAR_6++) {
            if (VAR_0->error[VAR_6] < VAR_0->error[VAR_7])
                VAR_7 = VAR_6;
        }
        FUNC_1(VAR_0->error, 0, sizeof(VAR_0->error));

        switch (VAR_7) {
        case 1: if (VAR_0->weight[0] >= -16) VAR_0->weight[0]--; break;
        case 2: if (VAR_0->weight[0] < 16) VAR_0->weight[0]++; break;
        case 3: if (VAR_0->weight[1] >= -16) VAR_0->weight[1]--; break;
        case 4: if (VAR_0->weight[1] < 16) VAR_0->weight[1]++; break;
        case 5: if (VAR_0->weight[2] >= -16) VAR_0->weight[2]--; break;
        case 6: if (VAR_0->weight[2] < 16) VAR_0->weight[2]++; break;
        case 7: if (VAR_0->weight[3] >= -16) VAR_0->weight[3]--; break;
        case 8: if (VAR_0->weight[3] < 16) VAR_0->weight[3]++; break;
        case 9: if (VAR_0->weight[4] >= -16) VAR_0->weight[4]--; break;
        case 10: if (VAR_0->weight[4] < 16) VAR_0->weight[4]++; break;
        }
    }

    return VAR_4;
}
