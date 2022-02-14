
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ neg; } ;
typedef int BN_CTX ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*) ;

int FUNC_4(BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2, BN_CTX *VAR_3)
{





    if (!(FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3)))
        return 0;
    if (!VAR_0->neg)
        return 1;

    return (VAR_2->neg ? FUNC_2 : FUNC_0) (VAR_0, VAR_0, VAR_2);
}
