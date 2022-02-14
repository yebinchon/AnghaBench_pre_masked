
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int result ;
typedef int output ;
typedef int input_key ;
typedef int OSSL_PARAM ;
typedef int EVP_KDF_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (unsigned char*,int,unsigned char*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(void)
{
    int VAR_5, VAR_6 = 0;
    EVP_KDF_CTX *VAR_7;
    OSSL_PARAM VAR_8[6];
    char *VAR_9 = "prf", *VAR_10 = "sha256", *VAR_11 = "test",
        *VAR_12 = "HMAC";
    static unsigned char VAR_13[] = {
        0x37, 0x05, 0xD9, 0x60, 0x80, 0xC1, 0x77, 0x28,
        0xA0, 0xE8, 0x00, 0xEA, 0xB6, 0xE0, 0xD2, 0x3C,
    };
    static unsigned char VAR_14[] = {
        0x9D, 0x18, 0x86, 0x16, 0xF6, 0x38, 0x52, 0xFE,
        0x86, 0x91, 0x5B, 0xB8, 0x40, 0xB4, 0xA8, 0x86,
        0xFF, 0x3E, 0x6B, 0xB0, 0xF8, 0x19, 0xB4, 0x9B,
        0x89, 0x33, 0x93, 0xD3, 0x93, 0x85, 0x42, 0x95,
    };
    unsigned char VAR_15[sizeof(VAR_14)] = { 0 };

    VAR_8[VAR_6++] = FUNC_5(
        VAR_0, VAR_10, FUNC_11(VAR_10) + 1);
    VAR_8[VAR_6++] = FUNC_5(
        VAR_3, VAR_12, FUNC_11(VAR_12) + 1);
    VAR_8[VAR_6++] = FUNC_4(
        VAR_2, VAR_13, sizeof(VAR_13));
    VAR_8[VAR_6++] = FUNC_4(
        VAR_4, VAR_9, FUNC_11(VAR_9));
    VAR_8[VAR_6++] = FUNC_4(
        VAR_1, VAR_11, FUNC_11(VAR_11));
    VAR_8[VAR_6] = FUNC_3();

    VAR_7 = FUNC_10("KBKDF");
    VAR_5 = FUNC_8(VAR_7)
        && FUNC_9(FUNC_1(VAR_7, VAR_8))
        && FUNC_6(FUNC_2(VAR_7, VAR_15, sizeof(VAR_15)), 0)
        && FUNC_7(VAR_15, sizeof(VAR_15), VAR_14, sizeof(VAR_14));

    FUNC_0(VAR_7);
    return VAR_5;
}
