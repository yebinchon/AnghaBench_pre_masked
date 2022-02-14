
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
    char *VAR_9 = "prf", *VAR_10 = "sha384", *VAR_11 = "test",
        *VAR_12 = "HMAC";
    static unsigned char VAR_13[] = {
        0x6D, 0x40, 0x4D, 0x37, 0xFA, 0xF7, 0x9F, 0x9D,
        0xF0, 0xD3, 0x35, 0x68, 0xD3, 0x20, 0x66, 0x98,
        0x00, 0xEB, 0x48, 0x36, 0x47, 0x2E, 0xA8, 0xA0,
        0x26, 0xD1, 0x6B, 0x71, 0x82, 0x46, 0x0C, 0x52,
    };
    static unsigned char VAR_14[] = {
        0x98, 0x01, 0xF6, 0x9A, 0x36, 0x8C, 0x2B, 0xF6,
        0x75, 0xE5, 0x95, 0x21, 0xE1, 0x77, 0xD9, 0xA0,
        0x7F, 0x67, 0xEF, 0xE1, 0xCF, 0xDE, 0x8D, 0x3C,
        0x8D, 0x6F, 0x6A, 0x02, 0x56, 0xE3, 0xB1, 0x7D,
        0xB3, 0xC1, 0xB6, 0x2A, 0xD1, 0xB8, 0x55, 0x33,
        0x60, 0xD1, 0x73, 0x67, 0xEB, 0x15, 0x14, 0xD2,
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
