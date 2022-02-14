
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * master_drbg; } ;
typedef int RAND_DRBG ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ DRBG_GLOBAL ;


 TYPE_1__* FUNC_0 (int *) ;

RAND_DRBG *FUNC_1(OPENSSL_CTX *VAR_0)
{
    DRBG_GLOBAL *VAR_1 = FUNC_0(VAR_0);

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    return VAR_1->master_drbg;
}
