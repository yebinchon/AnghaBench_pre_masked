
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pkey; int * p10CSR; int * newPkey; int newPkey_priv; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *) ;

EVP_PKEY *FUNC_2(const OSSL_CMP_CTX *VAR_1, int VAR_2)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return ((void*)0);
    }

    if (VAR_1->newPkey != ((void*)0))
        return VAR_2 && !VAR_1->newPkey_priv ? ((void*)0) : VAR_1->newPkey;
    if (VAR_1->p10CSR != ((void*)0))
        return VAR_2 ? ((void*)0) : FUNC_1(VAR_1->p10CSR);
    return VAR_1->pkey;
}
