
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int OSSL_PARAM ;
typedef int EVP_MD ;
typedef int EVP_KDF_CTX ;
typedef int EVP_KDF ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,unsigned char*,size_t) ;
 int * FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 () ;
 void* FUNC_8 (int ,void*,size_t) ;
 int FUNC_9 (int ,char*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int * FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (char const*) ;

__attribute__((used)) static int FUNC_14(SSL *VAR_7,
                    const void *VAR_8, size_t VAR_9,
                    const void *VAR_10, size_t VAR_11,
                    const void *VAR_12, size_t VAR_13,
                    const void *VAR_14, size_t VAR_15,
                    const void *VAR_16, size_t VAR_17,
                    const unsigned char *VAR_18, size_t VAR_19,
                    unsigned char *VAR_20, size_t VAR_21, int VAR_22)
{
    const EVP_MD *VAR_23 = FUNC_12(VAR_7);
    EVP_KDF *VAR_24;
    EVP_KDF_CTX *VAR_25 = ((void*)0);
    OSSL_PARAM VAR_26[8], *VAR_27 = VAR_26;
    const char *VAR_28;

    if (VAR_23 == ((void*)0)) {

        if (VAR_22)
            FUNC_11(VAR_7, VAR_5, VAR_6,
                     VAR_0);
        else
            FUNC_10(VAR_6, VAR_0);
        return 0;
    }
    VAR_24 = FUNC_4(((void*)0), VAR_1, ((void*)0));
    if (VAR_24 == ((void*)0))
        goto err;
    VAR_25 = FUNC_1(VAR_24);
    FUNC_5(VAR_24);
    if (VAR_25 == ((void*)0))
        goto err;
    VAR_28 = FUNC_6(VAR_23);
    *VAR_27++ = FUNC_9(VAR_2,
                                            (char *)VAR_28, FUNC_13(VAR_28) + 1);
    *VAR_27++ = FUNC_8(VAR_3,
                                             (unsigned char *)VAR_18,
                                             (size_t)VAR_19);
    *VAR_27++ = FUNC_8(VAR_4,
                                             (void *)VAR_8, (size_t)VAR_9);
    *VAR_27++ = FUNC_8(VAR_4,
                                             (void *)VAR_10, (size_t)VAR_11);
    *VAR_27++ = FUNC_8(VAR_4,
                                             (void *)VAR_12, (size_t)VAR_13);
    *VAR_27++ = FUNC_8(VAR_4,
                                             (void *)VAR_14, (size_t)VAR_15);
    *VAR_27++ = FUNC_8(VAR_4,
                                             (void *)VAR_16, (size_t)VAR_17);
    *VAR_27 = FUNC_7();
    if (FUNC_2(VAR_25, VAR_26)
            && FUNC_3(VAR_25, VAR_20, VAR_21)) {
        FUNC_0(VAR_25);
        return 1;
    }

 err:
    if (VAR_22)
        FUNC_11(VAR_7, VAR_5, VAR_6,
                 VAR_0);
    else
        FUNC_10(VAR_6, VAR_0);
    FUNC_0(VAR_25);
    return 0;
}
