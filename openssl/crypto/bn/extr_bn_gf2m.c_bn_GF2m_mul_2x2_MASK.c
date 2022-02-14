
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int FUNC_0 (int*,int*,int const,int const) ;

__attribute__((used)) static void FUNC_1(BN_ULONG *VAR_0, const BN_ULONG VAR_1, const BN_ULONG VAR_2,
                            const BN_ULONG VAR_3, const BN_ULONG VAR_4)
{
    BN_ULONG VAR_5, VAR_6;

    FUNC_0(VAR_0 + 3, VAR_0 + 2, VAR_1, VAR_3);
    FUNC_0(VAR_0 + 1, VAR_0, VAR_2, VAR_4);
    FUNC_0(&VAR_5, &VAR_6, VAR_2 ^ VAR_1, VAR_4 ^ VAR_3);

    VAR_0[2] ^= VAR_5 ^ VAR_0[1] ^ VAR_0[3];
    VAR_0[1] = VAR_0[3] ^ VAR_0[2] ^ VAR_0[0] ^ VAR_5 ^ VAR_6;
}
