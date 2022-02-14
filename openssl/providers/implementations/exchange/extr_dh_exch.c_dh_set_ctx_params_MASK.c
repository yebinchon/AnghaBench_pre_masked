
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pad; } ;
typedef TYPE_1__ PROV_DH_CTX ;
typedef int OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int const*,unsigned int*) ;
 int * FUNC_1 (int const*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const OSSL_PARAM VAR_2[])
{
    PROV_DH_CTX *VAR_3 = (PROV_DH_CTX *)VAR_1;
    const OSSL_PARAM *VAR_4;
    unsigned int VAR_5;

    if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
        return 0;

    VAR_4 = FUNC_1(VAR_2, VAR_0);
    if (VAR_4 == ((void*)0) || !FUNC_0(VAR_4, &VAR_5))
        return 0;
    VAR_3->pad = VAR_5 ? 1 : 0;
    return 1;
}
