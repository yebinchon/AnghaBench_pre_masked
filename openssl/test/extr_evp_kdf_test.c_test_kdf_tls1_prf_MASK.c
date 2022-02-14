
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
 int FUNC_3 () ;
 void* FUNC_4 (int ,unsigned char*,size_t) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (unsigned char*,int,unsigned char const*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(void)
{
    int VAR_4;
    EVP_KDF_CTX *VAR_5 = ((void*)0);
    unsigned char VAR_6[16];
    OSSL_PARAM VAR_7[4], *VAR_8 = VAR_7;
    static const unsigned char VAR_9[sizeof(VAR_6)] = {
        0x8e, 0x4d, 0x93, 0x25, 0x30, 0xd7, 0x65, 0xa0,
        0xaa, 0xe9, 0x74, 0xc3, 0x04, 0x73, 0x5e, 0xcc
    };

    *VAR_8++ = FUNC_5(VAR_1,
                                            (char *)"sha256", sizeof("sha256"));
    *VAR_8++ = FUNC_4(VAR_2,
                                             (unsigned char *)"secret",
                                             (size_t)6);
    *VAR_8++ = FUNC_4(VAR_3,
                                             (unsigned char *)"seed",
                                             (size_t)4);
    *VAR_8 = FUNC_3();

    VAR_4 =
        FUNC_8(VAR_5 = FUNC_10(VAR_0))
        && FUNC_9(FUNC_1(VAR_5, VAR_7))
        && FUNC_6(FUNC_2(VAR_5, VAR_6, sizeof(VAR_6)), 0)
        && FUNC_7(VAR_6, sizeof(VAR_6), VAR_9, sizeof(VAR_9));

    FUNC_0(VAR_5);
    return VAR_4;
}
