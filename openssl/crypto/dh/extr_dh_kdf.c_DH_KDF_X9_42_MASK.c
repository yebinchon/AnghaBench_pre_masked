
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;
typedef int OSSL_PARAM ;
typedef int OPENSSL_CTX ;
typedef int EVP_MD ;
typedef int EVP_KDF_CTX ;
typedef int EVP_KDF ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,unsigned char*,size_t) ;
 int * FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int const*) ;
 int * FUNC_7 (int const*) ;
 int VAR_0 ;
 char* FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 () ;
 void* FUNC_11 (int ,unsigned char*,size_t) ;
 void* FUNC_12 (int ,char*,scalar_t__) ;
 int * FUNC_13 (int const*) ;
 scalar_t__ FUNC_14 (char const*) ;

int FUNC_15(unsigned char *VAR_6, size_t VAR_7,
                 const unsigned char *VAR_8, size_t VAR_9,
                 ASN1_OBJECT *VAR_10,
                 const unsigned char *VAR_11, size_t VAR_12, const EVP_MD *VAR_13)
{
    int VAR_14 = 0, VAR_15;
    EVP_KDF_CTX *VAR_16 = ((void*)0);
    EVP_KDF *VAR_17 = ((void*)0);
    const char *VAR_18;
    OSSL_PARAM VAR_19[5], *VAR_20 = VAR_19;
    const char *VAR_21 = FUNC_6(VAR_13);
    const OSSL_PROVIDER *VAR_22 = FUNC_7(VAR_13);
    OPENSSL_CTX *VAR_23 = FUNC_13(VAR_22);

    VAR_15 = FUNC_9(VAR_10);
    if (VAR_15 == VAR_0)
        return 0;
    VAR_18 = FUNC_8(VAR_15);
    if (VAR_18 == ((void*)0))
        return 0;

    VAR_17 = FUNC_4(VAR_23, VAR_1, ((void*)0));
    if ((VAR_16 = FUNC_1(VAR_17)) == ((void*)0))
        goto err;
    *VAR_20++ = FUNC_12(VAR_3,
                                            (char *)VAR_21, FUNC_14(VAR_21) + 1);
    *VAR_20++ = FUNC_11(VAR_4,
                                             (unsigned char *)VAR_8, VAR_9);
    if (VAR_11 != ((void*)0))
        *VAR_20++ = FUNC_11(VAR_5,
                                                 (unsigned char *)VAR_11, VAR_12);
    *VAR_20++ = FUNC_12(VAR_2,
                                            (char *)VAR_18, FUNC_14(VAR_18) + 1);
    *VAR_20 = FUNC_10();
    VAR_14 = FUNC_2(VAR_16, VAR_19) > 0
        && FUNC_3(VAR_16, VAR_6, VAR_7) > 0;
err:
    FUNC_0(VAR_16);
    FUNC_5(VAR_17);
    return VAR_14;
}
