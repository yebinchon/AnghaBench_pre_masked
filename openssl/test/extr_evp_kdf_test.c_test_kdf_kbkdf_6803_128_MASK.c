
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int result ;
typedef int outputs ;
typedef int iv ;
typedef int input_key ;
typedef int constants ;
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
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (unsigned char*,int,unsigned char*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(void)
{
    int VAR_6 = 0, VAR_7, VAR_8;
    EVP_KDF_CTX *VAR_9;
    OSSL_PARAM VAR_10[7];
    static unsigned char VAR_11[] = {
        0x57, 0xD0, 0x29, 0x72, 0x98, 0xFF, 0xD9, 0xD3,
        0x5D, 0xE5, 0xA4, 0x7F, 0xB4, 0xBD, 0xE2, 0x4B,
    };
    static unsigned char VAR_12[][5] = {
        { 0x00, 0x00, 0x00, 0x02, 0x99 },
        { 0x00, 0x00, 0x00, 0x02, 0xaa },
        { 0x00, 0x00, 0x00, 0x02, 0x55 },
    };
    static unsigned char VAR_13[][16] = {
        {0xD1, 0x55, 0x77, 0x5A, 0x20, 0x9D, 0x05, 0xF0,
         0x2B, 0x38, 0xD4, 0x2A, 0x38, 0x9E, 0x5A, 0x56},
        {0x64, 0xDF, 0x83, 0xF8, 0x5A, 0x53, 0x2F, 0x17,
         0x57, 0x7D, 0x8C, 0x37, 0x03, 0x57, 0x96, 0xAB},
        {0x3E, 0x4F, 0xBD, 0xF3, 0x0F, 0xB8, 0x25, 0x9C,
         0x42, 0x5C, 0xB6, 0xC9, 0x6F, 0x1F, 0x46, 0x35}
    };
    static unsigned char VAR_14[16] = { 0 };
    unsigned char VAR_15[16] = { 0 };

    for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
        VAR_8 = 0;
        VAR_10[VAR_8++] = FUNC_5(
            VAR_0, "CAMELLIA-128-CBC", 0);
        VAR_10[VAR_8++] = FUNC_5(
            VAR_2, "CMAC", 0);
        VAR_10[VAR_8++] = FUNC_5(
            VAR_3, "FEEDBACK", 0);
        VAR_10[VAR_8++] = FUNC_4(
            VAR_1, VAR_11, sizeof(VAR_11));
        VAR_10[VAR_8++] = FUNC_4(
            VAR_4, VAR_12[VAR_7], sizeof(VAR_12[VAR_7]));
        VAR_10[VAR_8++] = FUNC_4(
            VAR_5, VAR_14, sizeof(VAR_14));
        VAR_10[VAR_8] = FUNC_3();

        VAR_9 = FUNC_10("KBKDF");
        VAR_6 = FUNC_8(VAR_9)
            && FUNC_9(FUNC_1(VAR_9, VAR_10))
            && FUNC_6(FUNC_2(VAR_9, VAR_15, sizeof(VAR_15)), 0)
            && FUNC_7(VAR_15, sizeof(VAR_15), VAR_13[VAR_7],
                           sizeof(VAR_13[VAR_7]));
        FUNC_0(VAR_9);
        if (VAR_6 != 1)
            return VAR_6;
    }

    return VAR_6;
}
