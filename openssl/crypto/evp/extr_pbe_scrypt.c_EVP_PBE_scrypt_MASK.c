
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int OSSL_PARAM ;
typedef int EVP_KDF_CTX ;
typedef int EVP_KDF ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned char*,size_t) ;
 int * FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 () ;
 void* FUNC_8 (int ,unsigned char*,size_t) ;
 void* FUNC_9 (int ,scalar_t__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

int FUNC_10(const char *VAR_11, size_t VAR_12,
                   const unsigned char *VAR_13, size_t VAR_14,
                   uint64_t VAR_15, uint64_t VAR_16, uint64_t VAR_17, uint64_t VAR_18,
                   unsigned char *VAR_19, size_t VAR_20)
{
    const char *VAR_21 = "";
    int VAR_22 = 1;
    EVP_KDF *VAR_23;
    EVP_KDF_CTX *VAR_24;
    OSSL_PARAM VAR_25[7], *VAR_26 = VAR_25;

    if (VAR_16 > VAR_10 || VAR_17 > VAR_10) {
        FUNC_6(VAR_0, VAR_1);
        return 0;
    }


    if (VAR_11 == ((void*)0)) {
        VAR_11 = VAR_21;
        VAR_12 = 0;
    }
    if (VAR_13 == ((void*)0)) {
        VAR_13 = (const unsigned char *)VAR_21;
        VAR_14 = 0;
    }
    if (VAR_18 == 0)
        VAR_18 = VAR_9;

    VAR_23 = FUNC_4(((void*)0), VAR_2, ((void*)0));
    VAR_24 = FUNC_1(VAR_23);
    FUNC_5(VAR_23);
    if (VAR_24 == ((void*)0))
        return 0;

    *VAR_26++ = FUNC_8(VAR_3,
                                              (unsigned char *)VAR_11,
                                                      VAR_12);
    *VAR_26++ = FUNC_8(VAR_4,
                                             (unsigned char *)VAR_13, VAR_14);
    *VAR_26++ = FUNC_9(VAR_6, &VAR_15);
    *VAR_26++ = FUNC_9(VAR_8, &VAR_16);
    *VAR_26++ = FUNC_9(VAR_7, &VAR_17);
    *VAR_26++ = FUNC_9(VAR_5, &VAR_18);
    *VAR_26 = FUNC_7();
    if (FUNC_2(VAR_24, VAR_25) != 1
            || FUNC_3(VAR_24, VAR_19, VAR_20) != 1)
        VAR_22 = 0;

    FUNC_0(VAR_24);
    return VAR_22;
}
