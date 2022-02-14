
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
    int VAR_5;
    EVP_KDF_CTX *VAR_6;
    unsigned char VAR_7[10];
    OSSL_PARAM VAR_8[5], *VAR_9 = VAR_8;
    static const unsigned char VAR_10[sizeof(VAR_7)] = {
        0x2a, 0xc4, 0x36, 0x9f, 0x52, 0x59, 0x96, 0xf8, 0xde, 0x13
    };

    *VAR_9++ = FUNC_5(VAR_1,
                                            (char *)"sha256", sizeof("sha256"));
    *VAR_9++ = FUNC_4(VAR_4,
                                             (unsigned char *)"salt", 4);
    *VAR_9++ = FUNC_4(VAR_3,
                                             (unsigned char *)"secret", 6);
    *VAR_9++ = FUNC_4(VAR_2,
                                             (unsigned char *)"label", 5);
    *VAR_9 = FUNC_3();

    VAR_5 =
        FUNC_8(VAR_6 = FUNC_10(VAR_0))
        && FUNC_9(FUNC_1(VAR_6, VAR_8))
        && FUNC_6(FUNC_2(VAR_6, VAR_7, sizeof(VAR_7)), 0)
        && FUNC_7(VAR_7, sizeof(VAR_7), VAR_10, sizeof(VAR_10));

    FUNC_0(VAR_6);
    return VAR_5;
}
