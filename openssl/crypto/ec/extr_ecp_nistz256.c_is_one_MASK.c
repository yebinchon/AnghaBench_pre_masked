
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;
typedef int BIGNUM ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int* FUNC_1 (int const*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static BN_ULONG FUNC_3(const BIGNUM *VAR_2)
{
    BN_ULONG VAR_3 = 0;
    BN_ULONG *VAR_4 = FUNC_1(VAR_2);

    if (FUNC_0(VAR_2) == (VAR_1 - VAR_1 / 8)) {
        VAR_3 = VAR_4[0] ^ VAR_0[0];
        VAR_3 |= VAR_4[1] ^ VAR_0[1];
        VAR_3 |= VAR_4[2] ^ VAR_0[2];
        VAR_3 |= VAR_4[3] ^ VAR_0[3];
        if (VAR_1 == 8) {
            VAR_3 |= VAR_4[4] ^ VAR_0[4];
            VAR_3 |= VAR_4[5] ^ VAR_0[5];
            VAR_3 |= VAR_4[6] ^ VAR_0[6];




        }
        VAR_3 = FUNC_2(VAR_3);
    }

    return VAR_3;
}
