
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int provctx; int const* (* gettable_params ) (int ) ;} ;
typedef TYPE_1__ OSSL_PROVIDER ;
typedef int OSSL_PARAM ;


 int const* FUNC_0 (int ) ;

const OSSL_PARAM *FUNC_1(const OSSL_PROVIDER *VAR_0)
{
    return VAR_0->gettable_params == ((void*)0)
        ? ((void*)0) : VAR_0->gettable_params(VAR_0->provctx);
}
