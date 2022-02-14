
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z ;
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
 int FUNC_3 () ;
 int FUNC_4 (int ,unsigned char*,int) ;
 void* FUNC_5 (int ,char*,int) ;
 char* VAR_4 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (unsigned char*,int,unsigned char const*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(void)
{
    int VAR_5;
    EVP_KDF_CTX *VAR_6 = ((void*)0);
    OSSL_PARAM VAR_7[4], *VAR_8 = VAR_7;
    const char *VAR_9 = VAR_4;
    unsigned char VAR_10[24];

    static unsigned char VAR_11[] = {
        0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,0x0d,
        0x0e,0x0f,0x10,0x11,0x12,0x13
    };
    static const unsigned char VAR_12[sizeof(VAR_10)] = {
        0xa0,0x96,0x61,0x39,0x23,0x76,0xf7,0x04,
        0x4d,0x90,0x52,0xa3,0x97,0x88,0x32,0x46,
        0xb6,0x7f,0x5f,0x1e,0xf6,0x3e,0xb5,0xfb
    };

    *VAR_8++ = FUNC_5(VAR_2,
                                            (char *)"sha1", sizeof("sha1"));
    *VAR_8++ = FUNC_4(VAR_3, VAR_11,
                                             sizeof(VAR_11));
    *VAR_8++ = FUNC_5(VAR_1,
                                            (char *)VAR_9,
                                            FUNC_11(VAR_9) + 1);
    *VAR_8 = FUNC_3();

    VAR_5 =
        FUNC_8(VAR_6 = FUNC_10(VAR_0))
        && FUNC_9(FUNC_1(VAR_6, VAR_7))
        && FUNC_6(FUNC_2(VAR_6, VAR_10, sizeof(VAR_10)), 0)
        && FUNC_7(VAR_10, sizeof(VAR_10), VAR_12, sizeof(VAR_12));

    FUNC_0(VAR_6);
    return VAR_5;
}
