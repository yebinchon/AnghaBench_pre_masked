
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int const*,int const*,int) ;

BN_ULONG FUNC_2(BN_ULONG *VAR_1,
                           const BN_ULONG *VAR_2, const BN_ULONG *VAR_3,
                           int VAR_4, int VAR_5)
{
    BN_ULONG VAR_6, VAR_7;

    FUNC_0(VAR_4 >= 0);
    VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

    if (VAR_5 == 0)
        return VAR_6;

    VAR_1 += VAR_4;
    VAR_2 += VAR_4;
    VAR_3 += VAR_4;

    if (VAR_5 < 0) {
        for (;;) {
            VAR_7 = VAR_3[0];
            VAR_1[0] = (0 - VAR_7 - VAR_6) & VAR_0;
            if (VAR_7 != 0)
                VAR_6 = 1;
            if (++VAR_5 >= 0)
                break;

            VAR_7 = VAR_3[1];
            VAR_1[1] = (0 - VAR_7 - VAR_6) & VAR_0;
            if (VAR_7 != 0)
                VAR_6 = 1;
            if (++VAR_5 >= 0)
                break;

            VAR_7 = VAR_3[2];
            VAR_1[2] = (0 - VAR_7 - VAR_6) & VAR_0;
            if (VAR_7 != 0)
                VAR_6 = 1;
            if (++VAR_5 >= 0)
                break;

            VAR_7 = VAR_3[3];
            VAR_1[3] = (0 - VAR_7 - VAR_6) & VAR_0;
            if (VAR_7 != 0)
                VAR_6 = 1;
            if (++VAR_5 >= 0)
                break;

            VAR_3 += 4;
            VAR_1 += 4;
        }
    } else {
        int VAR_8 = VAR_5;
        while (VAR_6) {
            VAR_7 = VAR_2[0];
            VAR_1[0] = (VAR_7 - VAR_6) & VAR_0;
            if (VAR_7 != 0)
                VAR_6 = 0;
            if (--VAR_5 <= 0)
                break;

            VAR_7 = VAR_2[1];
            VAR_1[1] = (VAR_7 - VAR_6) & VAR_0;
            if (VAR_7 != 0)
                VAR_6 = 0;
            if (--VAR_5 <= 0)
                break;

            VAR_7 = VAR_2[2];
            VAR_1[2] = (VAR_7 - VAR_6) & VAR_0;
            if (VAR_7 != 0)
                VAR_6 = 0;
            if (--VAR_5 <= 0)
                break;

            VAR_7 = VAR_2[3];
            VAR_1[3] = (VAR_7 - VAR_6) & VAR_0;
            if (VAR_7 != 0)
                VAR_6 = 0;
            if (--VAR_5 <= 0)
                break;

            VAR_8 = VAR_5;
            VAR_2 += 4;
            VAR_1 += 4;
        }
        if (VAR_5 > 0) {
            if (VAR_8 > VAR_5) {
                switch (VAR_8 - VAR_5) {
                case 1:
                    VAR_1[1] = VAR_2[1];
                    if (--VAR_5 <= 0)
                        break;

                case 2:
                    VAR_1[2] = VAR_2[2];
                    if (--VAR_5 <= 0)
                        break;

                case 3:
                    VAR_1[3] = VAR_2[3];
                    if (--VAR_5 <= 0)
                        break;
                }
                VAR_2 += 4;
                VAR_1 += 4;
            }
        }
        if (VAR_5 > 0) {
            for (;;) {
                VAR_1[0] = VAR_2[0];
                if (--VAR_5 <= 0)
                    break;
                VAR_1[1] = VAR_2[1];
                if (--VAR_5 <= 0)
                    break;
                VAR_1[2] = VAR_2[2];
                if (--VAR_5 <= 0)
                    break;
                VAR_1[3] = VAR_2[3];
                if (--VAR_5 <= 0)
                    break;

                VAR_2 += 4;
                VAR_1 += 4;
            }
        }
    }
    return VAR_6;
}
