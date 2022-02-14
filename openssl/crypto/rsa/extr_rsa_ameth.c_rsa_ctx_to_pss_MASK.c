
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA_PSS_PARAMS ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int const**) ;
 int FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (int *,int const**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int const*,int const*,int) ;

__attribute__((used)) static RSA_PSS_PARAMS *FUNC_8(EVP_PKEY_CTX *VAR_0)
{
    const EVP_MD *VAR_1, *VAR_2;
    EVP_PKEY *VAR_3 = FUNC_1(VAR_0);
    int VAR_4;

    if (FUNC_4(VAR_0, &VAR_1) <= 0)
        return ((void*)0);
    if (FUNC_2(VAR_0, &VAR_2) <= 0)
        return ((void*)0);
    if (!FUNC_3(VAR_0, &VAR_4))
        return ((void*)0);
    if (VAR_4 == -1) {
        VAR_4 = FUNC_0(VAR_1);
    } else if (VAR_4 == -2 || VAR_4 == -3) {
        VAR_4 = FUNC_6(VAR_3) - FUNC_0(VAR_1) - 2;
        if ((FUNC_5(VAR_3) & 0x7) == 1)
            VAR_4--;
        if (VAR_4 < 0)
            return ((void*)0);
    }

    return FUNC_7(VAR_1, VAR_2, VAR_4);
}
