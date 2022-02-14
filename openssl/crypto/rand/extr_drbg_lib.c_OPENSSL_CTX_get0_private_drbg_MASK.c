
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int private_drbg; int master_drbg; } ;
typedef int RAND_DRBG ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ DRBG_GLOBAL ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;

RAND_DRBG *FUNC_6(OPENSSL_CTX *VAR_2)
{
    DRBG_GLOBAL *VAR_3 = FUNC_2(VAR_2);
    RAND_DRBG *VAR_4;

    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_4 = FUNC_0(&VAR_3->private_drbg);
    if (VAR_4 == ((void*)0)) {
        VAR_2 = FUNC_4(VAR_2);
        if (!FUNC_5(((void*)0), VAR_2, VAR_1))
            return ((void*)0);
        VAR_4 = FUNC_3(VAR_2, VAR_3->master_drbg, VAR_0);
        FUNC_1(&VAR_3->private_drbg, VAR_4);
    }
    return VAR_4;
}
