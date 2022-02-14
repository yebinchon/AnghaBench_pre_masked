
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out ;
typedef int expected ;
typedef int EVP_PKEY_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (unsigned char*,int,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_12(void)
{
    int VAR_1 = 0;
    EVP_PKEY_CTX *VAR_2;
    unsigned char VAR_3[64];
    size_t VAR_4 = sizeof(VAR_3);

    if ((VAR_2 = FUNC_1(VAR_0, ((void*)0))) == ((void*)0)) {
        FUNC_10("EVP_PKEY_SCRYPT");
        goto err;
    }
    if (FUNC_9(VAR_2) <= 0) {
        FUNC_10("EVP_PKEY_derive_init");
        goto err;
    }
    if (FUNC_2(VAR_2, "password", 8) <= 0) {
        FUNC_10("EVP_PKEY_CTX_set1_pbe_pass");
        goto err;
    }
    if (FUNC_3(VAR_2, "NaCl", 4) <= 0) {
        FUNC_10("EVP_PKEY_CTX_set1_scrypt_salt");
        goto err;
    }
    if (FUNC_4(VAR_2, 1024) <= 0) {
        FUNC_10("EVP_PKEY_CTX_set_scrypt_N");
        goto err;
    }
    if (FUNC_7(VAR_2, 8) <= 0) {
        FUNC_10("EVP_PKEY_CTX_set_scrypt_r");
        goto err;
    }
    if (FUNC_6(VAR_2, 16) <= 0) {
        FUNC_10("EVP_PKEY_CTX_set_scrypt_p");
        goto err;
    }
    if (FUNC_5(VAR_2, 16) <= 0) {
        FUNC_10("EVP_PKEY_CTX_set_maxmem_bytes");
        goto err;
    }
    if (FUNC_8(VAR_2, VAR_3, &VAR_4) > 0) {
        FUNC_10("EVP_PKEY_derive should have failed");
        goto err;
    }
    if (FUNC_5(VAR_2, 10 * 1024 * 1024) <= 0) {
        FUNC_10("EVP_PKEY_CTX_set_maxmem_bytes");
        goto err;
    }
    if (FUNC_8(VAR_2, VAR_3, &VAR_4) <= 0) {
        FUNC_10("EVP_PKEY_derive");
        goto err;
    }

    {
        const unsigned char VAR_5[sizeof(VAR_3)] = {
            0xfd, 0xba, 0xbe, 0x1c, 0x9d, 0x34, 0x72, 0x00,
            0x78, 0x56, 0xe7, 0x19, 0x0d, 0x01, 0xe9, 0xfe,
            0x7c, 0x6a, 0xd7, 0xcb, 0xc8, 0x23, 0x78, 0x30,
            0xe7, 0x73, 0x76, 0x63, 0x4b, 0x37, 0x31, 0x62,
            0x2e, 0xaf, 0x30, 0xd9, 0x2e, 0x22, 0xa3, 0x88,
            0x6f, 0xf1, 0x09, 0x27, 0x9d, 0x98, 0x30, 0xda,
            0xc7, 0x27, 0xaf, 0xb9, 0x4a, 0x83, 0xee, 0x6d,
            0x83, 0x60, 0xcb, 0xdf, 0xa2, 0xcc, 0x06, 0x40
        };
        if (!FUNC_11(VAR_3, sizeof(VAR_3), VAR_5, sizeof(VAR_5))) {
            goto err;
        }
    }
    VAR_1 = 1;
err:
    FUNC_0(VAR_2);
    return VAR_1;
}
