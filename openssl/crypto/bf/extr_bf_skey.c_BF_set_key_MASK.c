
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* P; int* S; } ;
typedef int BF_LONG ;
typedef TYPE_1__ BF_KEY ;


 int VAR_0 ;
 int FUNC_0 (int*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

void FUNC_2(BF_KEY *VAR_2, int VAR_3, const unsigned char *VAR_4)
{
    int VAR_5;
    BF_LONG *VAR_6, VAR_7, VAR_8[2];
    const unsigned char *VAR_9, *VAR_10;

    FUNC_1(VAR_2, &VAR_1, sizeof(BF_KEY));
    VAR_6 = VAR_2->P;

    if (VAR_3 > ((VAR_0 + 2) * 4))
        VAR_3 = (VAR_0 + 2) * 4;

    VAR_9 = VAR_4;
    VAR_10 = &(VAR_4[VAR_3]);
    for (VAR_5 = 0; VAR_5 < (VAR_0 + 2); VAR_5++) {
        VAR_7 = *(VAR_9++);
        if (VAR_9 >= VAR_10)
            VAR_9 = VAR_4;

        VAR_7 <<= 8;
        VAR_7 |= *(VAR_9++);
        if (VAR_9 >= VAR_10)
            VAR_9 = VAR_4;

        VAR_7 <<= 8;
        VAR_7 |= *(VAR_9++);
        if (VAR_9 >= VAR_10)
            VAR_9 = VAR_4;

        VAR_7 <<= 8;
        VAR_7 |= *(VAR_9++);
        if (VAR_9 >= VAR_10)
            VAR_9 = VAR_4;

        VAR_6[VAR_5] ^= VAR_7;
    }

    VAR_8[0] = 0L;
    VAR_8[1] = 0L;
    for (VAR_5 = 0; VAR_5 < (VAR_0 + 2); VAR_5 += 2) {
        FUNC_0(VAR_8, VAR_2);
        VAR_6[VAR_5] = VAR_8[0];
        VAR_6[VAR_5 + 1] = VAR_8[1];
    }

    VAR_6 = VAR_2->S;
    for (VAR_5 = 0; VAR_5 < 4 * 256; VAR_5 += 2) {
        FUNC_0(VAR_8, VAR_2);
        VAR_6[VAR_5] = VAR_8[0];
        VAR_6[VAR_5 + 1] = VAR_8[1];
    }
}
