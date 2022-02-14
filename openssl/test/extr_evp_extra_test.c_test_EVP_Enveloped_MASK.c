
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef unsigned char EVP_PKEY ;
typedef unsigned char EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (unsigned char*,unsigned char*,int*) ;
 int FUNC_3 (unsigned char*,int const*,unsigned char*,int,unsigned char*,unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned char*,int*,unsigned char*,int) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (unsigned char*,unsigned char*,int*) ;
 int FUNC_8 (unsigned char*,int const*,unsigned char**,int*,unsigned char*,unsigned char**,int) ;
 int FUNC_9 (unsigned char*,unsigned char*,int*,unsigned char const*,int) ;
 int * FUNC_10 () ;
 int FUNC_11 (unsigned char*) ;
 unsigned char* FUNC_12 (int ) ;
 int FUNC_13 (unsigned char const*,int,unsigned char*,int) ;
 int FUNC_14 (unsigned char*) ;
 int FUNC_15 (int ) ;
 unsigned char* FUNC_16 () ;

__attribute__((used)) static int FUNC_17(void)
{
    int VAR_1 = 0;
    EVP_CIPHER_CTX *VAR_2 = ((void*)0);
    EVP_PKEY *VAR_3 = ((void*)0);
    unsigned char *VAR_4 = ((void*)0);
    unsigned char VAR_5[VAR_0];
    static const unsigned char VAR_6[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int VAR_7, VAR_8, VAR_9, VAR_10;
    unsigned char VAR_11[32], VAR_12[16];
    const EVP_CIPHER *VAR_13 = FUNC_10();

    if (!FUNC_14(VAR_3 = FUNC_16())
            || !FUNC_14(VAR_4 = FUNC_12(FUNC_6(VAR_3)))
            || !FUNC_14(VAR_2 = FUNC_1())
            || !FUNC_15(FUNC_8(VAR_2, VAR_13, &VAR_4, &VAR_8, VAR_5,
                                       &VAR_3, 1))
            || !FUNC_15(FUNC_9(VAR_2, VAR_11, &VAR_9,
                                         VAR_6, sizeof(VAR_6)))
            || !FUNC_15(FUNC_7(VAR_2, VAR_11 + VAR_9,
                                        &VAR_7)))
        goto err;

    VAR_9 += VAR_7;

    if (!FUNC_15(FUNC_3(VAR_2, VAR_13, VAR_4, VAR_8, VAR_5, VAR_3))
            || !FUNC_15(FUNC_4(VAR_2, VAR_12, &VAR_10,
                                         VAR_11, VAR_9))
            || !FUNC_15(FUNC_2(VAR_2, VAR_12 + VAR_10, &VAR_7)))
        goto err;

    VAR_10 += VAR_7;
    if (!FUNC_13(VAR_6, sizeof(VAR_6), VAR_12, VAR_10))
        goto err;

    VAR_1 = 1;
err:
    FUNC_11(VAR_4);
    FUNC_5(VAR_3);
    FUNC_0(VAR_2);
    return VAR_1;
}
