
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509V3_CTX ;
typedef int X509 ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;
typedef int CONF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,char const*,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,int const*) ;
 int VAR_0 ;
 int FUNC_11 (int *,int *,int *,int) ;

__attribute__((used)) static int FUNC_12(X509 *VAR_1, EVP_PKEY *VAR_2, EVP_PKEY *VAR_3, int VAR_4, int VAR_5,
                const EVP_MD *VAR_6, CONF *VAR_7, const char *VAR_8,
                int VAR_9)
{

    if (!FUNC_7(VAR_1, FUNC_6(VAR_1)))
        goto err;
    if (!VAR_9 && !FUNC_11(VAR_1, ((void*)0), ((void*)0), VAR_4))
        goto err;
    if (VAR_3 == ((void*)0) && !FUNC_8(VAR_1, VAR_2))
        goto err;
    if (VAR_5) {
        while (FUNC_5(VAR_1) > 0)
            FUNC_4(VAR_1, 0);
    }
    if (VAR_7 != ((void*)0)) {
        X509V3_CTX VAR_10;
        FUNC_9(VAR_1, 2);
        FUNC_2(&VAR_10, VAR_1, VAR_1, ((void*)0), ((void*)0), 0);
        FUNC_3(&VAR_10, VAR_7);
        if (!FUNC_1(VAR_7, &VAR_10, VAR_8, VAR_1))
            goto err;
    }
    if (!FUNC_10(VAR_1, VAR_2, VAR_6))
        goto err;
    return 1;
 err:
    FUNC_0(VAR_0);
    return 0;
}
