
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

BN_ULONG FUNC_2(BN_ULONG VAR_5, BN_ULONG VAR_6, BN_ULONG VAR_7)
{
    BN_ULONG VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16 = 2;

    if (VAR_7 == 0)
        return VAR_2;

    VAR_15 = FUNC_0(VAR_7);
    FUNC_1((VAR_15 == VAR_0) || (VAR_5 <= (BN_ULONG)1 << VAR_15));

    VAR_15 = VAR_0 - VAR_15;
    if (VAR_5 >= VAR_7)
        VAR_5 -= VAR_7;

    if (VAR_15) {
        VAR_7 <<= VAR_15;
        VAR_5 = (VAR_5 << VAR_15) | (VAR_6 >> (VAR_0 - VAR_15));
        VAR_6 <<= VAR_15;
    }
    VAR_8 = (VAR_7 & VAR_3) >> VAR_1;
    VAR_9 = (VAR_7 & VAR_4);
    for (;;) {
        if ((VAR_5 >> VAR_1) == VAR_8)
            VAR_10 = VAR_4;
        else
            VAR_10 = VAR_5 / VAR_8;

        VAR_12 = VAR_10 * VAR_8;
        VAR_13 = VAR_9 * VAR_10;
        for (;;) {
            VAR_14 = VAR_5 - VAR_12;
            if ((VAR_14 & VAR_3) ||
                ((VAR_13) <= ((VAR_14 << VAR_1) | ((VAR_6 & VAR_3) >> VAR_1))))
                break;
            VAR_10--;
            VAR_12 -= VAR_8;
            VAR_13 -= VAR_9;
        }
        VAR_14 = (VAR_13 >> VAR_1);
        VAR_13 = (VAR_13 << VAR_1) & VAR_3;
        VAR_12 += VAR_14;

        if (VAR_6 < VAR_13)
            VAR_12++;
        VAR_6 -= VAR_13;
        if (VAR_5 < VAR_12) {
            VAR_5 += VAR_7;
            VAR_10--;
        }
        VAR_5 -= VAR_12;

        if (--VAR_16 == 0)
            break;

        VAR_11 = VAR_10 << VAR_1;
        VAR_5 = ((VAR_5 << VAR_1) | (VAR_6 >> VAR_1)) & VAR_2;
        VAR_6 = (VAR_6 & VAR_4) << VAR_1;
    }
    VAR_11 |= VAR_10;
    return VAR_11;
}
