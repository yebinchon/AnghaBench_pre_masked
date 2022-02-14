
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
        0xB9, 0xD6, 0x82, 0x8B, 0x20, 0x56, 0xB7, 0xBE,
        0x65, 0x6D, 0x88, 0xA1, 0x23, 0xB1, 0xFA, 0xC6,
        0x82, 0x14, 0xAC, 0x2B, 0x72, 0x7E, 0xCF, 0x5F,
        0x69, 0xAF, 0xE0, 0xC4, 0xDF, 0x2A, 0x6D, 0x2C,
    };
    static unsigned char VAR_12[][5] = {
        { 0x00, 0x00, 0x00, 0x02, 0x99 },
        { 0x00, 0x00, 0x00, 0x02, 0xaa },
        { 0x00, 0x00, 0x00, 0x02, 0x55 },
    };
    static unsigned char VAR_13[][32] = {
        {0xE4, 0x67, 0xF9, 0xA9, 0x55, 0x2B, 0xC7, 0xD3,
         0x15, 0x5A, 0x62, 0x20, 0xAF, 0x9C, 0x19, 0x22,
         0x0E, 0xEE, 0xD4, 0xFF, 0x78, 0xB0, 0xD1, 0xE6,
         0xA1, 0x54, 0x49, 0x91, 0x46, 0x1A, 0x9E, 0x50,
        },
        {0x41, 0x2A, 0xEF, 0xC3, 0x62, 0xA7, 0x28, 0x5F,
         0xC3, 0x96, 0x6C, 0x6A, 0x51, 0x81, 0xE7, 0x60,
         0x5A, 0xE6, 0x75, 0x23, 0x5B, 0x6D, 0x54, 0x9F,
         0xBF, 0xC9, 0xAB, 0x66, 0x30, 0xA4, 0xC6, 0x04,
        },
        {0xFA, 0x62, 0x4F, 0xA0, 0xE5, 0x23, 0x99, 0x3F,
         0xA3, 0x88, 0xAE, 0xFD, 0xC6, 0x7E, 0x67, 0xEB,
         0xCD, 0x8C, 0x08, 0xE8, 0xA0, 0x24, 0x6B, 0x1D,
         0x73, 0xB0, 0xD1, 0xDD, 0x9F, 0xC5, 0x82, 0xB0,
        },
    };
    static unsigned char VAR_14[16] = { 0 };
    unsigned char VAR_15[32] = { 0 };

    for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
        VAR_8 = 0;
        VAR_10[VAR_8++] = FUNC_5(
            VAR_0, "CAMELLIA-256-CBC", 0);
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
