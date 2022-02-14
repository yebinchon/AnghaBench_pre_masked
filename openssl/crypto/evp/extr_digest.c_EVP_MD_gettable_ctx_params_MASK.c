
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* (* gettable_ctx_params ) () ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_MD ;


 int const* FUNC_0 () ;

const OSSL_PARAM *FUNC_1(const EVP_MD *VAR_0)
{
    if (VAR_0 != ((void*)0) && VAR_0->gettable_ctx_params != ((void*)0))
        return VAR_0->gettable_ctx_params();
    return ((void*)0);
}
