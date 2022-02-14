
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
 int FUNC_5 (int*,int*,int*,int,int,int,int*) ;
 int FUNC_6 (int*,int*,int*,int,int) ;
 scalar_t__ FUNC_7 (int*,int*,int*,int) ;
 int FUNC_8 (int*,int ,int) ;
 int VAR_2 ;

void FUNC_9(BN_ULONG *VAR_3, BN_ULONG *VAR_4, BN_ULONG *VAR_5, int VAR_6,
                           int VAR_7, int VAR_8, BN_ULONG *VAR_9)
{
    int VAR_10, VAR_11, VAR_12 = VAR_6 * 2;
    int VAR_13, VAR_14, VAR_15;
    BN_ULONG VAR_16, VAR_17, *VAR_18;

    if (VAR_6 < 8) {
        FUNC_4(VAR_3, VAR_4, VAR_6 + VAR_7, VAR_5, VAR_6 + VAR_8);
        return;
    }


    VAR_13 = FUNC_1(VAR_4, &(VAR_4[VAR_6]), VAR_7, VAR_6 - VAR_7);
    VAR_14 = FUNC_1(&(VAR_5[VAR_6]), VAR_5, VAR_8, VAR_8 - VAR_6);
    VAR_15 = 0;
    switch (VAR_13 * 3 + VAR_14) {
    case -4:
        FUNC_6(VAR_9, &(VAR_4[VAR_6]), VAR_4, VAR_7, VAR_7 - VAR_6);
        FUNC_6(&(VAR_9[VAR_6]), VAR_5, &(VAR_5[VAR_6]), VAR_8, VAR_6 - VAR_8);
        break;
    case -3:
    case -2:
        FUNC_6(VAR_9, &(VAR_4[VAR_6]), VAR_4, VAR_7, VAR_7 - VAR_6);
        FUNC_6(&(VAR_9[VAR_6]), &(VAR_5[VAR_6]), VAR_5, VAR_8, VAR_8 - VAR_6);
        VAR_15 = 1;
        break;
    case -1:
    case 0:
    case 1:
    case 2:
        FUNC_6(VAR_9, VAR_4, &(VAR_4[VAR_6]), VAR_7, VAR_6 - VAR_7);
        FUNC_6(&(VAR_9[VAR_6]), VAR_5, &(VAR_5[VAR_6]), VAR_8, VAR_6 - VAR_8);
        VAR_15 = 1;
        break;
    case 3:
    case 4:
        FUNC_6(VAR_9, VAR_4, &(VAR_4[VAR_6]), VAR_7, VAR_6 - VAR_7);
        FUNC_6(&(VAR_9[VAR_6]), &(VAR_5[VAR_6]), VAR_5, VAR_8, VAR_8 - VAR_6);
        break;
    }
    if (VAR_6 == 8) {
        FUNC_3(&(VAR_9[VAR_12]), VAR_9, &(VAR_9[VAR_6]));
        FUNC_3(VAR_3, VAR_4, VAR_5);
        FUNC_4(&(VAR_3[VAR_12]), &(VAR_4[VAR_6]), VAR_7, &(VAR_5[VAR_6]), VAR_8);
        FUNC_8(&VAR_3[VAR_12 + VAR_7 + VAR_8], 0, sizeof(*VAR_3) * (VAR_12 - VAR_7 - VAR_8));
    } else {
        VAR_18 = &(VAR_9[VAR_12 * 2]);
        FUNC_5(&(VAR_9[VAR_12]), VAR_9, &(VAR_9[VAR_6]), VAR_6, 0, 0, VAR_18);
        FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, 0, 0, VAR_18);
        VAR_10 = VAR_6 / 2;



        if (VAR_7 > VAR_8)
            VAR_11 = VAR_7 - VAR_10;
        else
            VAR_11 = VAR_8 - VAR_10;
        if (VAR_11 == 0) {
            FUNC_5(&(VAR_3[VAR_12]), &(VAR_4[VAR_6]), &(VAR_5[VAR_6]),
                             VAR_10, VAR_7 - VAR_10, VAR_8 - VAR_10, VAR_18);
            FUNC_8(&VAR_3[VAR_12 + VAR_10 * 2], 0, sizeof(*VAR_3) * (VAR_12 - VAR_10 * 2));
        } else if (VAR_11 > 0) {
            FUNC_9(&(VAR_3[VAR_12]), &(VAR_4[VAR_6]), &(VAR_5[VAR_6]),
                                  VAR_10, VAR_7 - VAR_10, VAR_8 - VAR_10, VAR_18);
            FUNC_8(&(VAR_3[VAR_12 + VAR_7 + VAR_8]), 0,
                   sizeof(BN_ULONG) * (VAR_12 - VAR_7 - VAR_8));
        } else {

            FUNC_8(&VAR_3[VAR_12], 0, sizeof(*VAR_3) * VAR_12);
            if (VAR_7 < VAR_1
                && VAR_8 < VAR_1) {
                FUNC_4(&(VAR_3[VAR_12]), &(VAR_4[VAR_6]), VAR_7, &(VAR_5[VAR_6]), VAR_8);
            } else {
                for (;;) {
                    VAR_10 /= 2;




                    if (VAR_10 < VAR_7 || VAR_10 < VAR_8) {
                        FUNC_9(&(VAR_3[VAR_12]),
                                              &(VAR_4[VAR_6]), &(VAR_5[VAR_6]),
                                              VAR_10, VAR_7 - VAR_10, VAR_8 - VAR_10, VAR_18);
                        break;
                    } else if (VAR_10 == VAR_7 || VAR_10 == VAR_8) {
                        FUNC_5(&(VAR_3[VAR_12]),
                                         &(VAR_4[VAR_6]), &(VAR_5[VAR_6]),
                                         VAR_10, VAR_7 - VAR_10, VAR_8 - VAR_10, VAR_18);
                        break;
                    }
                }
            }
        }
    }







    VAR_13 = (int)(FUNC_0(VAR_9, VAR_3, &(VAR_3[VAR_12]), VAR_12));

    if (VAR_15) {
        VAR_13 -= (int)(FUNC_7(&(VAR_9[VAR_12]), VAR_9, &(VAR_9[VAR_12]), VAR_12));
    } else {

        VAR_13 += (int)(FUNC_0(&(VAR_9[VAR_12]), &(VAR_9[VAR_12]), VAR_9, VAR_12));
    }







    VAR_13 += (int)(FUNC_0(&(VAR_3[VAR_6]), &(VAR_3[VAR_6]), &(VAR_9[VAR_12]), VAR_12));
    if (VAR_13) {
        VAR_18 = &(VAR_3[VAR_6 + VAR_12]);
        VAR_17 = *VAR_18;
        VAR_16 = (VAR_17 + VAR_13) & VAR_0;
        *VAR_18 = VAR_16;





        if (VAR_16 < (BN_ULONG)VAR_13) {
            do {
                VAR_18++;
                VAR_17 = *VAR_18;
                VAR_16 = (VAR_17 + 1) & VAR_0;
                *VAR_18 = VAR_16;
            } while (VAR_16 == 0);
        }
    }
}
