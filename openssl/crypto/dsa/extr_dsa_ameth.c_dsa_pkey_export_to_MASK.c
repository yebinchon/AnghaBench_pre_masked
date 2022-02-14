
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dsa; } ;
struct TYPE_5__ {TYPE_1__ pkey; } ;
typedef int OSSL_PARAM_BLD ;
typedef int OSSL_PARAM ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EVP_KEYMGMT ;
typedef int DSA ;
typedef int BIGNUM ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_5 (int *,int *) ;
 void* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int const*) ;
 int * FUNC_10 (int *) ;

__attribute__((used)) static void *FUNC_11(const EVP_PKEY *VAR_5, EVP_KEYMGMT *VAR_6,
                                int VAR_7)
{
    DSA *VAR_8 = VAR_5->pkey.dsa;
    OSSL_PARAM_BLD VAR_9;
    const BIGNUM *VAR_10 = FUNC_1(VAR_8), *VAR_11 = FUNC_0(VAR_8);
    const BIGNUM *VAR_12 = FUNC_4(VAR_8), *VAR_13 = FUNC_3(VAR_8);
    const BIGNUM *VAR_14 = FUNC_2(VAR_8);
    OSSL_PARAM *VAR_15;
    void *VAR_16 = ((void*)0);

    if (VAR_10 == ((void*)0) || VAR_12 == ((void*)0) || VAR_11 == ((void*)0))
        return ((void*)0);

    FUNC_8(&VAR_9);
    if (!FUNC_9(&VAR_9, VAR_3, VAR_10)
        || !FUNC_9(&VAR_9, VAR_4, VAR_12)
        || !FUNC_9(&VAR_9, VAR_2, VAR_11))
        return ((void*)0);

    if (!VAR_7) {

        if (!FUNC_9(&VAR_9, VAR_1,
                                    VAR_13))
            return ((void*)0);

        if (VAR_14 != ((void*)0)) {
            if (!FUNC_9(&VAR_9, VAR_0,
                                        VAR_14))
                return ((void*)0);
        }
    }

    VAR_15 = FUNC_10(&VAR_9);


    VAR_16 = VAR_7
        ? FUNC_5(VAR_6, VAR_15)
        : FUNC_6(VAR_6, VAR_15);

    FUNC_7(VAR_15);
    return VAR_16;
}
