
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(BN_ULONG VAR_2)
{
    BN_ULONG VAR_3, VAR_4;
    int VAR_5 = (VAR_2 != 0);
    VAR_3 = VAR_2 >> 16;
    VAR_4 = (0 - VAR_3) & VAR_1;
    VAR_4 = (0 - (VAR_4 >> (VAR_0 - 1)));
    VAR_5 += 16 & VAR_4;
    VAR_2 ^= (VAR_3 ^ VAR_2) & VAR_4;

    VAR_3 = VAR_2 >> 8;
    VAR_4 = (0 - VAR_3) & VAR_1;
    VAR_4 = (0 - (VAR_4 >> (VAR_0 - 1)));
    VAR_5 += 8 & VAR_4;
    VAR_2 ^= (VAR_3 ^ VAR_2) & VAR_4;

    VAR_3 = VAR_2 >> 4;
    VAR_4 = (0 - VAR_3) & VAR_1;
    VAR_4 = (0 - (VAR_4 >> (VAR_0 - 1)));
    VAR_5 += 4 & VAR_4;
    VAR_2 ^= (VAR_3 ^ VAR_2) & VAR_4;

    VAR_3 = VAR_2 >> 2;
    VAR_4 = (0 - VAR_3) & VAR_1;
    VAR_4 = (0 - (VAR_4 >> (VAR_0 - 1)));
    VAR_5 += 2 & VAR_4;
    VAR_2 ^= (VAR_3 ^ VAR_2) & VAR_4;

    VAR_3 = VAR_2 >> 1;
    VAR_4 = (0 - VAR_3) & VAR_1;
    VAR_4 = (0 - (VAR_4 >> (VAR_0 - 1)));
    VAR_5 += 1 & VAR_4;

    return VAR_5;
}
