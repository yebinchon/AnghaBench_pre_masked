
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short delimitedSuffix; int sponge; } ;
typedef TYPE_1__ Keccak_HashInstance ;
typedef scalar_t__ HashReturn ;
typedef int DataLength ;
typedef unsigned char BitSequence ;


 scalar_t__ FUNC_0 (int *,unsigned char const*,int) ;
 scalar_t__ VAR_0 ;

HashReturn FUNC_1(Keccak_HashInstance *VAR_1, const BitSequence *VAR_2, DataLength VAR_3)
{
    if ((VAR_3 % 8) == 0)
        return (HashReturn)FUNC_0(&VAR_1->sponge, VAR_2, VAR_3/8);
    else {
        HashReturn VAR_4 = (HashReturn)FUNC_0(&VAR_1->sponge, VAR_2, VAR_3/8);
        if (VAR_4 == VAR_0) {

            unsigned char VAR_5 = VAR_2[VAR_3/8];

            unsigned short VAR_6 = (unsigned short)((unsigned short)VAR_5 | ((unsigned short)VAR_1->delimitedSuffix << (VAR_3 % 8)));
            if ((VAR_6 & 0xFF00) == 0x0000) {
                VAR_1->delimitedSuffix = VAR_6 & 0xFF;
            }
            else {
                unsigned char VAR_7[1];
                VAR_7[0] = VAR_6 & 0xFF;
                VAR_4 = (HashReturn)FUNC_0(&VAR_1->sponge, VAR_7, 1);
                VAR_1->delimitedSuffix = (VAR_6 >> 8) & 0xFF;
            }
        }
        return VAR_4;
    }
}
