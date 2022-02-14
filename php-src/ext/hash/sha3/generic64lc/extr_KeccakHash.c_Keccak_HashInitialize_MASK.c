
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int fixedOutputLength; unsigned char delimitedSuffix; int sponge; } ;
typedef TYPE_1__ Keccak_HashInstance ;
typedef scalar_t__ HashReturn ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned int,unsigned int) ;
 scalar_t__ VAR_1 ;

HashReturn FUNC_1(Keccak_HashInstance *VAR_2, unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5, unsigned char VAR_6)
{
    HashReturn VAR_7;

    if (VAR_6 == 0)
        return VAR_0;
    VAR_7 = (HashReturn)FUNC_0(&VAR_2->sponge, VAR_3, VAR_4);
    if (VAR_7 != VAR_1)
        return VAR_7;
    VAR_2->fixedOutputLength = VAR_5;
    VAR_2->delimitedSuffix = VAR_6;
    return VAR_1;
}
