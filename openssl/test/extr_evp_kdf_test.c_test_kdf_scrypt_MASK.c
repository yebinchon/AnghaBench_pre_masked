
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out ;
typedef int expected ;
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
 int VAR_6 ;
 int FUNC_3 () ;
 void* FUNC_4 (int ,char*,int) ;
 void* FUNC_5 (int ,unsigned int*) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (unsigned char*,int,unsigned char const*,int) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(void)
{
    int VAR_7;
    EVP_KDF_CTX *VAR_8;
    OSSL_PARAM VAR_9[7], *VAR_10 = VAR_9;
    unsigned char VAR_11[64];
    unsigned int VAR_12 = 1024, VAR_13 = 8, VAR_14 = 16, VAR_15 = 16;
    static const unsigned char VAR_16[sizeof(VAR_11)] = {
        0xfd, 0xba, 0xbe, 0x1c, 0x9d, 0x34, 0x72, 0x00,
        0x78, 0x56, 0xe7, 0x19, 0x0d, 0x01, 0xe9, 0xfe,
        0x7c, 0x6a, 0xd7, 0xcb, 0xc8, 0x23, 0x78, 0x30,
        0xe7, 0x73, 0x76, 0x63, 0x4b, 0x37, 0x31, 0x62,
        0x2e, 0xaf, 0x30, 0xd9, 0x2e, 0x22, 0xa3, 0x88,
        0x6f, 0xf1, 0x09, 0x27, 0x9d, 0x98, 0x30, 0xda,
        0xc7, 0x27, 0xaf, 0xb9, 0x4a, 0x83, 0xee, 0x6d,
        0x83, 0x60, 0xcb, 0xdf, 0xa2, 0xcc, 0x06, 0x40
    };

    *VAR_10++ = FUNC_4(VAR_1,
                                             (char *)"password", 8);
    *VAR_10++ = FUNC_4(VAR_2,
                                             (char *)"NaCl", 4);
    *VAR_10++ = FUNC_5(VAR_4, &VAR_12);
    *VAR_10++ = FUNC_5(VAR_6, &VAR_13);
    *VAR_10++ = FUNC_5(VAR_5, &VAR_14);
    *VAR_10++ = FUNC_5(VAR_3, &VAR_15);
    *VAR_10 = FUNC_3();

    VAR_7 =
        FUNC_9(VAR_8 = FUNC_11(VAR_0))
        && FUNC_10(FUNC_1(VAR_8, VAR_9))


        && FUNC_10(FUNC_6(VAR_10 - 1, 10 * 1024 * 1024))
        && FUNC_10(FUNC_1(VAR_8, VAR_10 - 1))
        && FUNC_7(FUNC_2(VAR_8, VAR_11, sizeof(VAR_11)), 0)
        && FUNC_8(VAR_11, sizeof(VAR_11), VAR_16, sizeof(VAR_16));

    FUNC_0(VAR_8);
    return VAR_7;
}
