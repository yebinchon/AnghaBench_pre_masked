
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pt ;
typedef unsigned char EVP_PKEY_CTX ;
typedef unsigned char EVP_PKEY ;
typedef unsigned char ENGINE ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned char*,char*) ;
 scalar_t__ FUNC_3 (unsigned char*,char*) ;
 int FUNC_4 (unsigned char*,int ) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (unsigned char*,unsigned char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (unsigned char*,unsigned char*,size_t*,unsigned char const*,int) ;
 scalar_t__ FUNC_8 (unsigned char*) ;
 int FUNC_9 (unsigned char*) ;
 unsigned char* FUNC_10 (int ,int ) ;
 int FUNC_11 (unsigned char*,int ,int ) ;
 scalar_t__ FUNC_12 (unsigned char*,unsigned char*) ;
 size_t FUNC_13 (unsigned char*) ;
 int FUNC_14 (unsigned char*) ;
 unsigned char* FUNC_15 (size_t) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (scalar_t__,int ) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (unsigned char*) ;
 int FUNC_21 (unsigned char*) ;
 int FUNC_22 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 unsigned char* FUNC_23 () ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char* VAR_4 ;

__attribute__((used)) static int FUNC_24(void)
{
    const unsigned char VAR_5[] = "Hello World\n";
    unsigned char *VAR_6 = ((void*)0);
    size_t VAR_7;
    EVP_PKEY_CTX *VAR_8 = ((void*)0);
    ENGINE *VAR_9 = ((void*)0);
    EVP_PKEY *VAR_10 = ((void*)0);

    int VAR_11 = 0;

    if (!FUNC_20(VAR_10 = FUNC_23()))
        goto err;

    VAR_7 = FUNC_13(VAR_10);
    if (!FUNC_20(VAR_6 = FUNC_15(VAR_7)))
        goto err;

    if (!FUNC_20(VAR_8 = FUNC_6(VAR_10, ((void*)0))))
        goto err;
    FUNC_17("EVP_PKEY_encrypt test: no redirection");

    if (!FUNC_18(FUNC_8(VAR_8), 0)
            || !FUNC_18(FUNC_7(VAR_8, VAR_6, &VAR_7, VAR_5, sizeof(VAR_5)), 0)
            || !FUNC_16(VAR_1))
        goto err;
    FUNC_5(VAR_8);
    VAR_8 = ((void*)0);


    if (!FUNC_20(VAR_9 = FUNC_1())
            || !FUNC_22(FUNC_2(VAR_9, "Test redirect engine"))
            || !FUNC_22(FUNC_3(VAR_9, "Test redirect engine")))
        goto err;






    if (!FUNC_21(VAR_8 = FUNC_6(VAR_10, VAR_9))
            || !FUNC_19(FUNC_12(VAR_10, VAR_9), 0))
        goto err;


    if (!FUNC_20(VAR_4 = FUNC_10(VAR_0, 0)))
        goto err;
    FUNC_4(VAR_9, VAR_3);


    if (!FUNC_20(VAR_8 = FUNC_6(VAR_10, VAR_9)))
        goto err;

    if (!FUNC_19(FUNC_8(VAR_8), 0))
        goto err;
    FUNC_5(VAR_8);
    VAR_8 = ((void*)0);


    FUNC_11(VAR_4, 0, VAR_2);

    FUNC_17("EVP_PKEY_encrypt test: redirection via EVP_PKEY_CTX_new()");
    if (!FUNC_20(VAR_8 = FUNC_6(VAR_10, VAR_9)))
        goto err;

    if (!FUNC_18(FUNC_8(VAR_8), 0)
            || !FUNC_18(FUNC_7(VAR_8, VAR_6, &VAR_7, VAR_5, sizeof(VAR_5)), 0)
            || !FUNC_22(VAR_1))
        goto err;

    FUNC_5(VAR_8);
    VAR_8 = ((void*)0);
    VAR_1 = 0;


    if (!FUNC_20(VAR_8 = FUNC_6(VAR_10, ((void*)0)))
            || !FUNC_18(FUNC_8(VAR_8), 0)
            || !FUNC_18(FUNC_7(VAR_8, VAR_6, &VAR_7, VAR_5, sizeof(VAR_5)), 0)
            || !FUNC_16(VAR_1))
        goto err;

    FUNC_5(VAR_8);
    VAR_8 = ((void*)0);


    if (!FUNC_22(FUNC_12(VAR_10, VAR_9)))
        goto err;

    FUNC_17("EVP_PKEY_encrypt test: redirection via EVP_PKEY_set1_engine()");


    if (!FUNC_20(VAR_8 = FUNC_6(VAR_10, ((void*)0)))
            || !FUNC_18(FUNC_8(VAR_8), 0)
            || !FUNC_18(FUNC_7(VAR_8, VAR_6, &VAR_7, VAR_5, sizeof(VAR_5)), 0)
            || !FUNC_22(VAR_1))
        goto err;

    VAR_11 = 1;

 err:
    FUNC_5(VAR_8);
    FUNC_9(VAR_10);
    FUNC_0(VAR_9);
    FUNC_14(VAR_6);
    return VAR_11;
}
