
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int maskHash; int maskGenAlgorithm; int hashAlgorithm; int * saltLength; } ;
typedef TYPE_1__ RSA_PSS_PARAMS ;
typedef int EVP_MD ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int const*) ;

RSA_PSS_PARAMS *FUNC_6(const EVP_MD *VAR_0,
                                      const EVP_MD *VAR_1, int VAR_2)
{
    RSA_PSS_PARAMS *VAR_3 = FUNC_3();

    if (VAR_3 == ((void*)0))
        goto err;
    if (VAR_2 != 20) {
        VAR_3->saltLength = FUNC_0();
        if (VAR_3->saltLength == ((void*)0))
            goto err;
        if (!FUNC_1(VAR_3->saltLength, VAR_2))
            goto err;
    }
    if (!FUNC_4(&VAR_3->hashAlgorithm, VAR_0))
        goto err;
    if (VAR_1 == ((void*)0))
        VAR_1 = VAR_0;
    if (!FUNC_5(&VAR_3->maskGenAlgorithm, VAR_1))
        goto err;
    if (!FUNC_4(&VAR_3->maskHash, VAR_1))
        goto err;
    return VAR_3;
 err:
    FUNC_2(VAR_3);
    return ((void*)0);
}
