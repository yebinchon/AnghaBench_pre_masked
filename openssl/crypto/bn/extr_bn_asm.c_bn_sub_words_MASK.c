
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int VAR_0 ;
 int FUNC_0 (int) ;

BN_ULONG FUNC_1(BN_ULONG *VAR_1, const BN_ULONG *VAR_2, const BN_ULONG *VAR_3,
                      int VAR_4)
{
    BN_ULONG VAR_5, VAR_6;
    int VAR_7 = 0;

    FUNC_0(VAR_4 >= 0);
    if (VAR_4 <= 0)
        return (BN_ULONG)0;


    while (VAR_4 & ~3) {
        VAR_5 = VAR_2[0];
        VAR_6 = VAR_3[0];
        VAR_1[0] = (VAR_5 - VAR_6 - VAR_7) & VAR_0;
        if (VAR_5 != VAR_6)
            VAR_7 = (VAR_5 < VAR_6);
        VAR_5 = VAR_2[1];
        VAR_6 = VAR_3[1];
        VAR_1[1] = (VAR_5 - VAR_6 - VAR_7) & VAR_0;
        if (VAR_5 != VAR_6)
            VAR_7 = (VAR_5 < VAR_6);
        VAR_5 = VAR_2[2];
        VAR_6 = VAR_3[2];
        VAR_1[2] = (VAR_5 - VAR_6 - VAR_7) & VAR_0;
        if (VAR_5 != VAR_6)
            VAR_7 = (VAR_5 < VAR_6);
        VAR_5 = VAR_2[3];
        VAR_6 = VAR_3[3];
        VAR_1[3] = (VAR_5 - VAR_6 - VAR_7) & VAR_0;
        if (VAR_5 != VAR_6)
            VAR_7 = (VAR_5 < VAR_6);
        VAR_2 += 4;
        VAR_3 += 4;
        VAR_1 += 4;
        VAR_4 -= 4;
    }

    while (VAR_4) {
        VAR_5 = VAR_2[0];
        VAR_6 = VAR_3[0];
        VAR_1[0] = (VAR_5 - VAR_6 - VAR_7) & VAR_0;
        if (VAR_5 != VAR_6)
            VAR_7 = (VAR_5 < VAR_6);
        VAR_2++;
        VAR_3++;
        VAR_1++;
        VAR_4--;
    }
    return VAR_7;
}
