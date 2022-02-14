
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* prov; } ;
typedef int OSSL_PROVIDER ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ FIPS_GLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ,int *) ;

const OSSL_PROVIDER *FUNC_1(OPENSSL_CTX *VAR_2)
{
    FIPS_GLOBAL *VAR_3 = FUNC_0(VAR_2, VAR_0,
                                             &VAR_1);

    if (VAR_3 == ((void*)0))
        return ((void*)0);

    return VAR_3->prov;
}
