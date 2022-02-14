
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fixedOutputLength; int sponge; int delimitedSuffix; } ;
typedef TYPE_1__ Keccak_HashInstance ;
typedef scalar_t__ HashReturn ;
typedef int BitSequence ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ VAR_0 ;

HashReturn FUNC_2(Keccak_HashInstance *VAR_1, BitSequence *VAR_2)
{
    HashReturn VAR_3 = (HashReturn)FUNC_0(&VAR_1->sponge, VAR_1->delimitedSuffix);
    if (VAR_3 == VAR_0)
        return (HashReturn)FUNC_1(&VAR_1->sponge, VAR_2, VAR_1->fixedOutputLength/8);
    else
        return VAR_3;
}
