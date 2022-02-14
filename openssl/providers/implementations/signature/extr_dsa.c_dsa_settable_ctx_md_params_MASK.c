
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * md; } ;
typedef TYPE_1__ PROV_DSA_CTX ;
typedef int OSSL_PARAM ;


 int const* FUNC_0 (int *) ;

__attribute__((used)) static const OSSL_PARAM *FUNC_1(void *VAR_0)
{
    PROV_DSA_CTX *VAR_1 = (PROV_DSA_CTX *)VAR_0;

    if (VAR_1->md == ((void*)0))
        return 0;

    return FUNC_0(VAR_1->md);
}
