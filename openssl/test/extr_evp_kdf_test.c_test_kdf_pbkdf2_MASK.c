
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out ;
typedef int len ;
typedef int expected ;
typedef int OSSL_PARAM ;
typedef int EVP_KDF_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,...) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int*) ;
 void* FUNC_6 (int ,unsigned char*,int) ;
 int FUNC_7 (int ,unsigned int*) ;
 int FUNC_8 (int ,char*,int) ;
 size_t VAR_9 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(void)
{
    int VAR_10 = 0;
    EVP_KDF_CTX *VAR_11;
    unsigned char VAR_12[25];
    size_t VAR_13 = 0;
    unsigned int VAR_14 = 4096;
    int VAR_15 = 0;
    OSSL_PARAM VAR_16[6], *VAR_17 = VAR_16;
    const unsigned char VAR_18[sizeof(VAR_12)] = {
        0x34, 0x8c, 0x89, 0xdb, 0xcb, 0xd3, 0x2b, 0x2f,
        0x32, 0xd8, 0x14, 0xb8, 0x11, 0x6e, 0x84, 0xcf,
        0x2b, 0x17, 0x34, 0x7e, 0xbc, 0x18, 0x00, 0x18,
        0x1c
    };

    if (sizeof(VAR_13) > 32)
        VAR_13 = VAR_9;

    *VAR_17++ = FUNC_6(VAR_6,
                                             (unsigned char *)
                                                "passwordPASSWORDpassword", 24);
    *VAR_17++ = FUNC_6(VAR_8,
                                             (unsigned char *)
                                                "saltSALTsaltSALTsaltSALTsaltSALTsalt",
                                                36);
    *VAR_17++ = FUNC_7(VAR_5, &VAR_14);
    *VAR_17++ = FUNC_8(VAR_4,
                                             (char *)"sha256", 7);
    *VAR_17++ = FUNC_5(VAR_7, &VAR_15);
    *VAR_17 = FUNC_4();

    if (!FUNC_12(VAR_11 = FUNC_14(VAR_3))
        || !FUNC_13(FUNC_1(VAR_11, VAR_16))
        || !FUNC_10(FUNC_3(VAR_11, VAR_12, sizeof(VAR_12)), 0)
        || !FUNC_11(VAR_12, sizeof(VAR_12), VAR_18, sizeof(VAR_18))
        || !FUNC_13(FUNC_1(VAR_11, VAR_16))

        || !FUNC_9(FUNC_3(VAR_11, VAR_12, 112 / 8 - 1), 0)

        || (VAR_13 != 0 && !FUNC_9(FUNC_3(VAR_11, VAR_12, VAR_13), 0)))
        goto err;
    VAR_10 = 1;
err:
    FUNC_0(VAR_11);
    return VAR_10;
}
