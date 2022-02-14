
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int keymgmt; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int const* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

const OSSL_PARAM *FUNC_2(EVP_PKEY_CTX *VAR_1)
{

    if (FUNC_1(VAR_1, VAR_0))
        return FUNC_0(VAR_1->keymgmt);
    return ((void*)0);
}
