
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ shift; int num_bits; int Nr; int N; } ;
typedef TYPE_1__ BN_RECP_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;

int FUNC_3(BN_RECP_CTX *VAR_0, const BIGNUM *VAR_1, BN_CTX *VAR_2)
{
    if (!FUNC_0(&(VAR_0->N), VAR_1))
        return 0;
    FUNC_2(&(VAR_0->Nr));
    VAR_0->num_bits = FUNC_1(VAR_1);
    VAR_0->shift = 0;
    return 1;
}
