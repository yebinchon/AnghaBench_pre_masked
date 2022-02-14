
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sponge; } ;
typedef TYPE_1__ Keccak_HashInstance ;
typedef int HashReturn ;
typedef int DataLength ;
typedef int BitSequence ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

HashReturn FUNC_1(Keccak_HashInstance *VAR_1, BitSequence *VAR_2, DataLength VAR_3)
{
    if ((VAR_3 % 8) != 0)
        return VAR_0;
    return (HashReturn)FUNC_0(&VAR_1->sponge, VAR_2, VAR_3/8);
}
