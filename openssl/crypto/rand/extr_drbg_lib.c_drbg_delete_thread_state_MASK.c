
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int private_drbg; int public_drbg; } ;
typedef int RAND_DRBG ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ DRBG_GLOBAL ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    OPENSSL_CTX *VAR_1 = VAR_0;
    DRBG_GLOBAL *VAR_2 = FUNC_3(VAR_1);
    RAND_DRBG *VAR_3;

    if (VAR_2 == ((void*)0))
        return;
    VAR_3 = FUNC_0(&VAR_2->public_drbg);
    FUNC_1(&VAR_2->public_drbg, ((void*)0));
    FUNC_2(VAR_3);

    VAR_3 = FUNC_0(&VAR_2->private_drbg);
    FUNC_1(&VAR_2->private_drbg, ((void*)0));
    FUNC_2(VAR_3);
}
