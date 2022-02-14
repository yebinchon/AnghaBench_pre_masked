
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ex_data_lock; } ;
typedef TYPE_1__ OSSL_EX_DATA_GLOBAL ;
typedef int OPENSSL_CTX ;


 int * FUNC_0 () ;
 TYPE_1__* FUNC_1 (int *) ;

int FUNC_2(OPENSSL_CTX *VAR_0)
{
    OSSL_EX_DATA_GLOBAL *VAR_1 = FUNC_1(VAR_0);

    if (VAR_1 == ((void*)0))
        return 0;

    VAR_1->ex_data_lock = FUNC_0();
    return VAR_1->ex_data_lock != ((void*)0);
}
