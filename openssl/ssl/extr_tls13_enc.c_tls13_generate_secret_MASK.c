
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int derived_secret_label ;
typedef int SSL ;
typedef int OSSL_PARAM ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int EVP_KDF_CTX ;
typedef int EVP_KDF ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int *) ;
 scalar_t__ FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,unsigned char*,size_t) ;
 int * FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 char* FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int VAR_2 ;
 int FUNC_12 (unsigned char*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int*) ;
 void* FUNC_15 (int ,unsigned char*,size_t) ;
 int FUNC_16 (int ,char*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int *,int ,int ,int ) ;
 unsigned char* VAR_10 ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (char const*) ;
 int FUNC_20 (int *,int const*,unsigned char const*,unsigned char*,int,unsigned char*,size_t,unsigned char*,size_t,int) ;

int FUNC_21(SSL *VAR_11, const EVP_MD *VAR_12,
                          const unsigned char *VAR_13,
                          const unsigned char *VAR_14,
                          size_t VAR_15,
                          unsigned char *VAR_16)
{
    size_t VAR_17, VAR_18;
    int VAR_19;
    int VAR_20;
    EVP_KDF *VAR_21;
    EVP_KDF_CTX *VAR_22;
    OSSL_PARAM VAR_23[5], *VAR_24 = VAR_23;
    int VAR_25 = VAR_2;
    const char *VAR_26 = FUNC_10(VAR_12);



    static const char VAR_27[] = "derived";

    unsigned char VAR_28[VAR_1];

    VAR_21 = FUNC_6(((void*)0), VAR_3, ((void*)0));
    VAR_22 = FUNC_3(VAR_21);
    FUNC_7(VAR_21);
    if (VAR_22 == ((void*)0)) {
        FUNC_17(VAR_11, VAR_8, VAR_9,
                 VAR_0);
        return 0;
    }

    VAR_19 = FUNC_11(VAR_12);

    if (!FUNC_18(VAR_19 >= 0)) {
        FUNC_17(VAR_11, VAR_8, VAR_9,
                 VAR_0);
        FUNC_2(VAR_22);
        return 0;
    }
    VAR_17 = (size_t)VAR_19;

    if (VAR_14 == ((void*)0)) {
        VAR_14 = VAR_10;
        VAR_15 = VAR_17;
    }
    if (VAR_13 == ((void*)0)) {
        VAR_13 = VAR_10;
        VAR_18 = 0;
    } else {
        EVP_MD_CTX *VAR_29 = FUNC_9();
        unsigned char VAR_30[VAR_1];


        if (VAR_29 == ((void*)0)
                || FUNC_1(VAR_29, VAR_12, ((void*)0)) <= 0
                || FUNC_0(VAR_29, VAR_30, ((void*)0)) <= 0) {
            FUNC_17(VAR_11, VAR_8, VAR_9,
                     VAR_0);
            FUNC_8(VAR_29);
            FUNC_2(VAR_22);
            return 0;
        }
        FUNC_8(VAR_29);


        if (!FUNC_20(VAR_11, VAR_12, VAR_13,
                               (unsigned char *)VAR_27,
                               sizeof(VAR_27) - 1, VAR_30, VAR_17,
                               VAR_28, VAR_17, 1)) {

            FUNC_2(VAR_22);
            return 0;
        }

        VAR_13 = VAR_28;
        VAR_18 = VAR_17;
    }

    *VAR_24++ = FUNC_14(VAR_6, &VAR_25);
    *VAR_24++ = FUNC_16(VAR_4,
                                            (char *)VAR_26, FUNC_19(VAR_26) + 1);
    *VAR_24++ = FUNC_15(VAR_5,
                                             (unsigned char *)VAR_14,
                                             VAR_15);
    *VAR_24++ = FUNC_15(VAR_7,
                                             (unsigned char *)VAR_13,
                                             VAR_18);
    *VAR_24++ = FUNC_13();

    VAR_20 = FUNC_4(VAR_22, VAR_23) <= 0
        || FUNC_5(VAR_22, VAR_16, VAR_17) <= 0;

    if (VAR_20 != 0)
        FUNC_17(VAR_11, VAR_8, VAR_9,
                 VAR_0);

    FUNC_2(VAR_22);
    if (VAR_13 == VAR_28)
        FUNC_12(VAR_28, VAR_17);
    return VAR_20 == 0;
}
