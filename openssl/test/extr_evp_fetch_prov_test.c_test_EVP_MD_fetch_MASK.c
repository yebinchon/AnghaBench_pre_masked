
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int testmsg ;
typedef int OSSL_PROVIDER ;
typedef int OPENSSL_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,char const*,int,unsigned char const*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_15 (int **,int **) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_16(void)
{
    OPENSSL_CTX *VAR_6 = ((void*)0);
    EVP_MD *VAR_7 = ((void*)0);
    OSSL_PROVIDER *VAR_8[2] = {((void*)0), ((void*)0)};
    int VAR_9 = 0;
    const char VAR_10[] = "Hello world";
    const unsigned char VAR_11[] = {
      0x27, 0x51, 0x8b, 0xa9, 0x68, 0x30, 0x11, 0xf6, 0xb3, 0x96, 0x07, 0x2c,
      0x05, 0xf6, 0x65, 0x6d, 0x04, 0xf5, 0xfb, 0xc3, 0x78, 0x7c, 0xf9, 0x24,
      0x90, 0xec, 0x60, 0x6e, 0x50, 0x92, 0xe3, 0x26
    };

    if (VAR_5 == 0 && !FUNC_15(&VAR_6, VAR_8))
        goto err;


    if (!FUNC_13(FUNC_14(FUNC_6(), VAR_10, sizeof(VAR_10),
                                    VAR_11))
            || !FUNC_10(FUNC_4(FUNC_6()), VAR_2)
            || !FUNC_10(FUNC_0(FUNC_6()), VAR_1))
        goto err;


    VAR_7 = FUNC_1(VAR_6, "SHA256", VAR_4);
    if (VAR_3 != 0) {
        if (!FUNC_11(VAR_7)
            || !FUNC_10(FUNC_3(VAR_7), VAR_0)
            || !FUNC_13(FUNC_14(VAR_7, VAR_10, sizeof(VAR_10), VAR_11))
            || !FUNC_10(FUNC_4(VAR_7), VAR_2)
            || !FUNC_10(FUNC_0(VAR_7), VAR_1))
        goto err;


        if (!FUNC_13(FUNC_5(VAR_7)))
            goto err;

        FUNC_2(VAR_7);
    } else {
        if (!FUNC_12(VAR_7))
            goto err;
    }
    VAR_9 = 1;

err:
    FUNC_2(VAR_7);
    FUNC_9(VAR_8[0]);
    FUNC_9(VAR_8[1]);



    if (VAR_6 != ((void*)0)) {
        FUNC_8(VAR_6);
        FUNC_7(VAR_6);
    }
    return VAR_9;
}
