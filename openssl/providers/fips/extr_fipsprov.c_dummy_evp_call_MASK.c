
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int randbuf ;
typedef int msg ;
typedef int exptd ;
typedef int RAND_DRBG ;
typedef int OPENSSL_CTX ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int EVP_KDF ;
typedef int EC_KEY ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,unsigned char*,unsigned int*) ;
 int FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (int *,char*,int) ;
 int * FUNC_16 (int *,int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 () ;
 int * FUNC_20 (int *,char*,int *) ;
 int FUNC_21 (int *) ;
 int VAR_2 ;
 int * FUNC_22 (int *) ;
 int VAR_3 ;
 int * FUNC_23 (void*) ;
 scalar_t__ FUNC_24 (int *,unsigned char*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_25 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_26(void *VAR_5)
{
    OPENSSL_CTX *VAR_6 = FUNC_23(VAR_5);
    EVP_MD_CTX *VAR_7 = FUNC_19();
    EVP_MD *VAR_8 = FUNC_20(VAR_6, "SHA256", ((void*)0));
    EVP_KDF *VAR_9 = FUNC_16(VAR_6, VAR_3, ((void*)0));
    char VAR_10[] = "Hello World!";
    const unsigned char VAR_11[] = {
        0x7f, 0x83, 0xb1, 0x65, 0x7f, 0xf1, 0xfc, 0x53, 0xb9, 0x2d, 0xc1, 0x81,
        0x48, 0xa1, 0xd6, 0x5d, 0xfc, 0x2d, 0x4b, 0x1f, 0xa3, 0xd6, 0x77, 0x28,
        0x4a, 0xdd, 0xd2, 0x00, 0x12, 0x6d, 0x90, 0x69
    };
    unsigned int VAR_12 = 0;
    unsigned char VAR_13[VAR_4];
    int VAR_14 = 0;
    BN_CTX *VAR_15 = ((void*)0);
    BIGNUM *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    unsigned char VAR_18[128];
    RAND_DRBG *VAR_19 = FUNC_22(VAR_6);

    EC_KEY *VAR_20 = ((void*)0);


    if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_19 == ((void*)0) || VAR_9 == ((void*)0))
        goto err;

    if (!FUNC_14(VAR_7, VAR_8, ((void*)0)))
        goto err;
    if (!FUNC_15(VAR_7, VAR_10, sizeof(VAR_10) - 1))
        goto err;
    if (!FUNC_13(VAR_7, VAR_13, &VAR_12))
        goto err;
    if (VAR_12 != sizeof(VAR_11) || FUNC_25(VAR_13, VAR_11, sizeof(VAR_11)) != 0)
        goto err;

    VAR_15 = FUNC_3(VAR_6);
    if (VAR_15 == ((void*)0))
        goto err;
    FUNC_4(VAR_15);
    VAR_16 = FUNC_2(VAR_15);
    VAR_17 = FUNC_2(VAR_15);
    if (VAR_17 == ((void*)0))
        goto err;
    FUNC_9(VAR_16);
    if (!FUNC_7(VAR_17)
        || !FUNC_5(VAR_16, VAR_16, VAR_17)
        || FUNC_6(VAR_16, VAR_17) != 0)
        goto err;

    if (FUNC_24(VAR_19, VAR_18, sizeof(VAR_18)) <= 0)
        goto err;

    if (!FUNC_8(VAR_16, 256, VAR_1, VAR_0, VAR_15))
        goto err;



    VAR_20 = FUNC_12(VAR_6, VAR_2);
    if (VAR_20 == ((void*)0))
        goto err;

    if (!FUNC_11(VAR_20))
        goto err;


    VAR_14 = 1;
 err:
    FUNC_0(VAR_15);
    FUNC_1(VAR_15);

    FUNC_17(VAR_9);
    FUNC_18(VAR_7);
    FUNC_21(VAR_8);


    FUNC_10(VAR_20);

    return VAR_14;
}
