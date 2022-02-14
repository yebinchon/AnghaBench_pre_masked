
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int signature ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int *,int ,int *,int *) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int const*,int ) ;
 int VAR_0 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 () ;
 int * FUNC_14 (int *,int *,int *,int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char const*) ;

__attribute__((used)) static int FUNC_19(void)
{

    const char *VAR_1 =
       "-----BEGIN PUBLIC KEY-----\n"
       "MIIBMzCB7AYHKoZIzj0CATCB4AIBATAsBgcqhkjOPQEBAiEAhULWnkwETxjouSQ1\n"
       "v2/33kVyg5FcRVF9ci7biwjx38MwRAQgeHlotPoyw/0kF4Quc7v+/y88hItoMdfg\n"
       "7GUiizk35JgEIGPkxtOyOwyEnPhCQUhL/kj2HVmlsWugbm4S0donxSSaBEEEQh3r\n"
       "1hti6rZ0ZDTrw8wxXjIiCzut1QvcTE5sFH/t1D0GgFEry7QsB9RzSdIVO3DE5df9\n"
       "/L+jbqGoWEG55G4JogIhAIVC1p5MBE8Y6LkkNb9v990pdyBjBIVijVrnTufDLnm3\n"
       "AgEBA0IABArkx3mKoPEZRxvuEYJb5GICu3nipYRElel8BP9N8lSKfAJA+I8c1OFj\n"
       "Uqc8F7fxbwc1PlOhdtaEqf4Ma7eY6Fc=\n"
       "-----END PUBLIC KEY-----\n";

    const char *VAR_2 = "message digest";
    const char *VAR_3 = "ALICE123@YAHOO.COM";

    const uint8_t VAR_4[] = {
       0x30, 0x44, 0x02, 0x20,

       0x40, 0xF1, 0xEC, 0x59, 0xF7, 0x93, 0xD9, 0xF4, 0x9E, 0x09, 0xDC,
       0xEF, 0x49, 0x13, 0x0D, 0x41, 0x94, 0xF7, 0x9F, 0xB1, 0xEE, 0xD2,
       0xCA, 0xA5, 0x5B, 0xAC, 0xDB, 0x49, 0xC4, 0xE7, 0x55, 0xD1,

       0x02, 0x20,

       0x6F, 0xC6, 0xDA, 0xC3, 0x2C, 0x5D, 0x5C, 0xF1, 0x0C, 0x77, 0xDF,
       0xB2, 0x0F, 0x7C, 0x2E, 0xB6, 0x67, 0xA4, 0x57, 0x87, 0x2F, 0xB0,
       0x9E, 0xC5, 0x63, 0x27, 0xA6, 0x7E, 0xC7, 0xDE, 0xEB, 0xE7
    };

    int VAR_5 = 0;
    BIO *VAR_6 = ((void*)0);
    EVP_PKEY *VAR_7 = ((void*)0);
    EVP_MD_CTX *VAR_8 = ((void*)0);
    EVP_PKEY_CTX *VAR_9 = ((void*)0);

    VAR_6 = FUNC_1(VAR_1, FUNC_18(VAR_1));
    if (!FUNC_17(VAR_6 != ((void*)0)))
        goto done;

    VAR_7 = FUNC_14(VAR_6, ((void*)0), ((void*)0), ((void*)0));
    if (!FUNC_17(VAR_7 != ((void*)0)))
        goto done;

    if (!FUNC_17(FUNC_12(VAR_7, VAR_0)))
        goto done;

    if (!FUNC_16(VAR_8 = FUNC_6()))
        goto done;

    if (!FUNC_16(VAR_9 = FUNC_9(VAR_7, ((void*)0))))
        goto done;

    if (!FUNC_15(FUNC_10(VAR_9, (const uint8_t *)VAR_3,
                                          FUNC_18(VAR_3)), 0))
        goto done;

    FUNC_7(VAR_8, VAR_9);

    if (!FUNC_17(FUNC_3(VAR_8, ((void*)0), FUNC_13(), ((void*)0), VAR_7)))
        goto done;

    if (!FUNC_17(FUNC_4(VAR_8, VAR_2, FUNC_18(VAR_2))))
        goto done;

    if (!FUNC_17(FUNC_2(VAR_8, VAR_4, sizeof(VAR_4))))
        goto done;
    VAR_5 = 1;

 done:
    FUNC_0(VAR_6);
    FUNC_11(VAR_7);
    FUNC_8(VAR_9);
    FUNC_5(VAR_8);
    return VAR_5;
}
