
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out ;
typedef int key ;
typedef int expected ;
typedef int constant ;
typedef int OSSL_PARAM ;
typedef int EVP_KDF_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 void* FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (unsigned char*,int,unsigned char const*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(void)
{
    int VAR_4;
    EVP_KDF_CTX *VAR_5;
    OSSL_PARAM VAR_6[4], *VAR_7 = VAR_6;
    unsigned char VAR_8[16];
    static unsigned char VAR_9[] = {
        0x42, 0x26, 0x3C, 0x6E, 0x89, 0xF4, 0xFC, 0x28,
        0xB8, 0xDF, 0x68, 0xEE, 0x09, 0x79, 0x9F, 0x15
    };
    static unsigned char VAR_10[] = {
        0x00, 0x00, 0x00, 0x02, 0x99
    };
    static const unsigned char VAR_11[sizeof(VAR_8)] = {
        0x34, 0x28, 0x0A, 0x38, 0x2B, 0xC9, 0x27, 0x69,
        0xB2, 0xDA, 0x2F, 0x9E, 0xF0, 0x66, 0x85, 0x4B
    };

    *VAR_7++ = FUNC_5(VAR_1,
                                            (char *)"AES-128-CBC",
                                            sizeof("AES-128-CBC"));
    *VAR_7++ = FUNC_4(VAR_3, VAR_9,
                                             sizeof(VAR_9));
    *VAR_7++ = FUNC_4(VAR_2,
                                             VAR_10, sizeof(VAR_10));
    *VAR_7 = FUNC_3();

    VAR_4 =
        FUNC_8(VAR_5 = FUNC_10(VAR_0))
        && FUNC_9(FUNC_1(VAR_5, VAR_6))
        && FUNC_6(FUNC_2(VAR_5, VAR_8, sizeof(VAR_8)), 0)
        && FUNC_7(VAR_8, sizeof(VAR_8), VAR_11, sizeof(VAR_11));

    FUNC_0(VAR_5);
    return VAR_4;
}
