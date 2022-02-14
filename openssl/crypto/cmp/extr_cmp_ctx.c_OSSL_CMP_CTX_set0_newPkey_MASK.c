
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int newPkey_priv; int * newPkey; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(OSSL_CMP_CTX *VAR_1, int VAR_2, EVP_PKEY *VAR_3)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return 0;
    }

    FUNC_1(VAR_1->newPkey);
    VAR_1->newPkey = VAR_3;
    VAR_1->newPkey_priv = VAR_2;
    return 1;
}
