
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int const,int ,int ,int ) ;

BN_ULONG FUNC_4(BN_ULONG *VAR_0, const BN_ULONG *VAR_1, int VAR_2,
                          BN_ULONG VAR_3)
{
    BN_ULONG VAR_4 = 0;
    BN_ULONG VAR_5, VAR_6;

    FUNC_2(VAR_2 >= 0);
    if (VAR_2 <= 0)
        return (BN_ULONG)0;

    VAR_5 = FUNC_1(VAR_3);
    VAR_6 = FUNC_0(VAR_3);


    while (VAR_2 & ~3) {
        FUNC_3(VAR_0[0], VAR_1[0], VAR_5, VAR_6, VAR_4);
        FUNC_3(VAR_0[1], VAR_1[1], VAR_5, VAR_6, VAR_4);
        FUNC_3(VAR_0[2], VAR_1[2], VAR_5, VAR_6, VAR_4);
        FUNC_3(VAR_0[3], VAR_1[3], VAR_5, VAR_6, VAR_4);
        VAR_1 += 4;
        VAR_0 += 4;
        VAR_2 -= 4;
    }

    while (VAR_2) {
        FUNC_3(VAR_0[0], VAR_1[0], VAR_5, VAR_6, VAR_4);
        VAR_1++;
        VAR_0++;
        VAR_2--;
    }
    return VAR_4;
}
