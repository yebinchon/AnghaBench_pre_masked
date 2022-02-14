
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int random_bytes ;
typedef int private_bytes ;
typedef int done ;
typedef int OPENSSL_CTX ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned int const,int *) ;
 scalar_t__ FUNC_1 (int const*,unsigned char*,int) ;
 int FUNC_2 (int *,int *,int const*,int *) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,unsigned char*,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,...) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int * FUNC_10 (int *,char*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned char*,int) ;
 int FUNC_13 (unsigned char*) ;
 unsigned char* FUNC_14 (unsigned int const) ;
 int VAR_3 ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_17 (int *,unsigned char*,int) ;

int FUNC_18(BIGNUM *VAR_4, const BIGNUM *VAR_5,
                          const BIGNUM *VAR_6, const unsigned char *VAR_7,
                          size_t VAR_8, BN_CTX *VAR_9)
{
    EVP_MD_CTX *VAR_10 = FUNC_9();




    unsigned char VAR_11[64];
    unsigned char VAR_12[VAR_3];
    unsigned VAR_13, VAR_14;

    const unsigned VAR_15 = FUNC_3(VAR_5) + 8;
    unsigned char VAR_16[96];
    unsigned char *VAR_17 = ((void*)0);
    int VAR_18 = 0;
    EVP_MD *VAR_19 = ((void*)0);
    OPENSSL_CTX *VAR_20 = FUNC_15(VAR_9);

    if (VAR_10 == ((void*)0))
        goto err;

    VAR_17 = FUNC_14(VAR_15);
    if (VAR_17 == ((void*)0))
        goto err;


    if (FUNC_1(VAR_6, VAR_16, sizeof(VAR_16)) < 0) {





        FUNC_4(VAR_0, VAR_2);
        goto err;
    }

    VAR_19 = FUNC_10(VAR_20, "SHA512", ((void*)0));
    if (VAR_19 == ((void*)0)) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }
    for (VAR_13 = 0; VAR_13 < VAR_15;) {
        if (!FUNC_17(VAR_20, VAR_11, sizeof(VAR_11)))
            goto err;

        if (!FUNC_6(VAR_10, VAR_19, ((void*)0))
                || !FUNC_7(VAR_10, &VAR_13, sizeof(VAR_13))
                || !FUNC_7(VAR_10, VAR_16,
                                     sizeof(VAR_16))
                || !FUNC_7(VAR_10, VAR_7, VAR_8)
                || !FUNC_7(VAR_10, VAR_11, sizeof(VAR_11))
                || !FUNC_5(VAR_10, VAR_12, ((void*)0)))
            goto err;

        VAR_14 = VAR_15 - VAR_13;
        if (VAR_14 > VAR_3)
            VAR_14 = VAR_3;
        FUNC_16(VAR_17 + VAR_13, VAR_12, VAR_14);
        VAR_13 += VAR_14;
    }

    if (!FUNC_0(VAR_17, VAR_15, VAR_4))
        goto err;
    if (FUNC_2(VAR_4, VAR_4, VAR_5, VAR_9) != 1)
        goto err;
    VAR_18 = 1;

 err:
    FUNC_8(VAR_10);
    FUNC_11(VAR_19);
    FUNC_13(VAR_17);
    FUNC_12(VAR_16, sizeof(VAR_16));
    return VAR_18;
}
