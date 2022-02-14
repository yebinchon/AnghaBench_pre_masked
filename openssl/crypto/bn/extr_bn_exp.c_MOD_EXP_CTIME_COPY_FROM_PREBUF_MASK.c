
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* d; int top; int flags; } ;
typedef int volatile BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(BIGNUM *VAR_1, int VAR_2,
                                          unsigned char *VAR_3, int VAR_4,
                                          int VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8 = 1 << VAR_5;
    volatile BN_ULONG *VAR_9 = (volatile BN_ULONG *)VAR_3;

    if (FUNC_0(VAR_1, VAR_2) == ((void*)0))
        return 0;

    if (VAR_5 <= 3) {
        for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++, VAR_9 += VAR_8) {
            BN_ULONG VAR_10 = 0;

            for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
                VAR_10 |= VAR_9[VAR_7] &
                       ((BN_ULONG)0 - (FUNC_1(VAR_7,VAR_4)&1));
            }

            VAR_1->d[VAR_6] = VAR_10;
        }
    } else {
        int VAR_11 = 1 << (VAR_5 - 2);
        BN_ULONG VAR_12, VAR_13, VAR_14, VAR_15;

        VAR_6 = VAR_4 >> (VAR_5 - 2);
        VAR_4 &= VAR_11 - 1;

        VAR_12 = (BN_ULONG)0 - (FUNC_1(VAR_6,0)&1);
        VAR_13 = (BN_ULONG)0 - (FUNC_1(VAR_6,1)&1);
        VAR_14 = (BN_ULONG)0 - (FUNC_1(VAR_6,2)&1);
        VAR_15 = (BN_ULONG)0 - (FUNC_1(VAR_6,3)&1);

        for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++, VAR_9 += VAR_8) {
            BN_ULONG VAR_16 = 0;

            for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
                VAR_16 |= ( (VAR_9[VAR_7 + 0 * VAR_11] & VAR_12) |
                         (VAR_9[VAR_7 + 1 * VAR_11] & VAR_13) |
                         (VAR_9[VAR_7 + 2 * VAR_11] & VAR_14) |
                         (VAR_9[VAR_7 + 3 * VAR_11] & VAR_15) )
                       & ((BN_ULONG)0 - (FUNC_1(VAR_7,VAR_4)&1));
            }

            VAR_1->d[VAR_6] = VAR_16;
        }
    }

    VAR_1->top = VAR_2;
    VAR_1->flags |= VAR_0;
    return 1;
}
