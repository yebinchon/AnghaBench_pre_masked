
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int*,int*,int) ;
 int FUNC_1 (int*,int*,int,int) ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int*,int*,int*) ;
 int FUNC_4 (int*,int*,int,int*,int) ;
 int FUNC_5 (int*,int*,int*,int,int) ;
 scalar_t__ FUNC_6 (int*,int*,int*,int) ;
 int FUNC_7 (int*,int ,int) ;

void FUNC_8(BN_ULONG *VAR_2, BN_ULONG *VAR_3, BN_ULONG *VAR_4, int VAR_5,
                      int VAR_6, int VAR_7, BN_ULONG *VAR_8)
{
    int VAR_9 = VAR_5 / 2, VAR_10, VAR_11;
    int VAR_12 = VAR_9 + VAR_6, VAR_13 = VAR_9 + VAR_7;
    unsigned int VAR_14, VAR_15;
    BN_ULONG VAR_16, VAR_17, *VAR_18;
    if (VAR_5 < VAR_1) {
        FUNC_4(VAR_2, VAR_3, VAR_5 + VAR_6, VAR_4, VAR_5 + VAR_7);
        if ((VAR_6 + VAR_7) < 0)
            FUNC_7(&VAR_2[2 * VAR_5 + VAR_6 + VAR_7], 0,
                   sizeof(BN_ULONG) * -(VAR_6 + VAR_7));
        return;
    }

    VAR_10 = FUNC_1(VAR_3, &(VAR_3[VAR_9]), VAR_12, VAR_9 - VAR_12);
    VAR_11 = FUNC_1(&(VAR_4[VAR_9]), VAR_4, VAR_13, VAR_13 - VAR_9);
    VAR_15 = VAR_14 = 0;
    switch (VAR_10 * 3 + VAR_11) {
    case -4:
        FUNC_5(VAR_8, &(VAR_3[VAR_9]), VAR_3, VAR_12, VAR_12 - VAR_9);
        FUNC_5(&(VAR_8[VAR_9]), VAR_4, &(VAR_4[VAR_9]), VAR_13, VAR_9 - VAR_13);
        break;
    case -3:
        VAR_15 = 1;
        break;
    case -2:
        FUNC_5(VAR_8, &(VAR_3[VAR_9]), VAR_3, VAR_12, VAR_12 - VAR_9);
        FUNC_5(&(VAR_8[VAR_9]), &(VAR_4[VAR_9]), VAR_4, VAR_13, VAR_13 - VAR_9);
        VAR_14 = 1;
        break;
    case -1:
    case 0:
    case 1:
        VAR_15 = 1;
        break;
    case 2:
        FUNC_5(VAR_8, VAR_3, &(VAR_3[VAR_9]), VAR_12, VAR_9 - VAR_12);
        FUNC_5(&(VAR_8[VAR_9]), VAR_4, &(VAR_4[VAR_9]), VAR_13, VAR_9 - VAR_13);
        VAR_14 = 1;
        break;
    case 3:
        VAR_15 = 1;
        break;
    case 4:
        FUNC_5(VAR_8, VAR_3, &(VAR_3[VAR_9]), VAR_12, VAR_9 - VAR_12);
        FUNC_5(&(VAR_8[VAR_9]), &(VAR_4[VAR_9]), VAR_4, VAR_13, VAR_13 - VAR_9);
        break;
    }
    {
        VAR_18 = &(VAR_8[VAR_5 * 2]);
        if (!VAR_15)
            FUNC_8(&(VAR_8[VAR_5]), VAR_8, &(VAR_8[VAR_9]), VAR_9, 0, 0, VAR_18);
        else
            FUNC_7(&VAR_8[VAR_5], 0, sizeof(*VAR_8) * VAR_5);
        FUNC_8(VAR_2, VAR_3, VAR_4, VAR_9, 0, 0, VAR_18);
        FUNC_8(&(VAR_2[VAR_5]), &(VAR_3[VAR_9]), &(VAR_4[VAR_9]), VAR_9, VAR_6, VAR_7, VAR_18);
    }







    VAR_10 = (int)(FUNC_0(VAR_8, VAR_2, &(VAR_2[VAR_5]), VAR_5));

    if (VAR_14) {
        VAR_10 -= (int)(FUNC_6(&(VAR_8[VAR_5]), VAR_8, &(VAR_8[VAR_5]), VAR_5));
    } else {

        VAR_10 += (int)(FUNC_0(&(VAR_8[VAR_5]), &(VAR_8[VAR_5]), VAR_8, VAR_5));
    }







    VAR_10 += (int)(FUNC_0(&(VAR_2[VAR_9]), &(VAR_2[VAR_9]), &(VAR_8[VAR_5]), VAR_5));
    if (VAR_10) {
        VAR_18 = &(VAR_2[VAR_9 + VAR_5]);
        VAR_17 = *VAR_18;
        VAR_16 = (VAR_17 + VAR_10) & VAR_0;
        *VAR_18 = VAR_16;





        if (VAR_16 < (BN_ULONG)VAR_10) {
            do {
                VAR_18++;
                VAR_17 = *VAR_18;
                VAR_16 = (VAR_17 + 1) & VAR_0;
                *VAR_18 = VAR_16;
            } while (VAR_16 == 0);
        }
    }
}
