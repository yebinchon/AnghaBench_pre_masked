
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef int EVP_MD ;
typedef int EVP_KDF_CTX ;
typedef int EVP_KDF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,unsigned char*,size_t) ;
 int * FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 () ;
 void* FUNC_8 (int ,void*,size_t) ;
 int FUNC_9 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_10 (char const*) ;

int FUNC_11(unsigned char *VAR_4, size_t VAR_5,
                   const unsigned char *VAR_6, size_t VAR_7,
                   const unsigned char *VAR_8, size_t VAR_9,
                   const EVP_MD *VAR_10)
{
    int VAR_11 = 0;
    EVP_KDF_CTX *VAR_12 = ((void*)0);
    OSSL_PARAM VAR_13[4], *VAR_14 = VAR_13;
    const char *VAR_15 = FUNC_6(VAR_10);
    EVP_KDF *VAR_16 = FUNC_4(((void*)0), VAR_0, ((void*)0));

    if ((VAR_12 = FUNC_1(VAR_16)) != ((void*)0)) {
        *VAR_14++ = FUNC_9(VAR_1,
                                                (char *)VAR_15,
                                                FUNC_10(VAR_15) + 1);
        *VAR_14++ = FUNC_8(VAR_3,
                                                 (void *)VAR_6, VAR_7);
        *VAR_14++ = FUNC_8(VAR_2,
                                                 (void *)VAR_8, VAR_9);
        *VAR_14 = FUNC_7();

        VAR_11 = FUNC_2(VAR_12, VAR_13) > 0
            && FUNC_3(VAR_12, VAR_4, VAR_5) > 0;
        FUNC_0(VAR_12);
    }
    FUNC_5(VAR_16);
    return VAR_11;
}
