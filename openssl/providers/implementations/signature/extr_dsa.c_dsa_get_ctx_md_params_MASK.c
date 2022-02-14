
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mdctx; } ;
typedef TYPE_1__ PROV_DSA_CTX ;
typedef int OSSL_PARAM ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, OSSL_PARAM *VAR_1)
{
    PROV_DSA_CTX *VAR_2 = (PROV_DSA_CTX *)VAR_0;

    if (VAR_2->mdctx == ((void*)0))
        return 0;

    return FUNC_0(VAR_2->mdctx, VAR_1);
}
