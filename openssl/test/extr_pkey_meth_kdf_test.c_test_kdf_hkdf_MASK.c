
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out ;
typedef int expected ;
typedef int EVP_PKEY_CTX ;


 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (unsigned char*,int,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_11(void)
{
    int VAR_1 = 0;
    EVP_PKEY_CTX *VAR_2;
    unsigned char VAR_3[10];
    size_t VAR_4 = sizeof(VAR_3);

    if ((VAR_2 = FUNC_2(VAR_0, ((void*)0))) == ((void*)0)) {
        FUNC_9("EVP_PKEY_HKDF");
        goto err;
    }
    if (FUNC_7(VAR_2) <= 0) {
        FUNC_9("EVP_PKEY_derive_init");
        goto err;
    }
    if (FUNC_5(VAR_2, FUNC_8()) <= 0) {
        FUNC_9("EVP_PKEY_CTX_set_hkdf_md");
        goto err;
    }
    if (FUNC_4(VAR_2, "salt", 4) <= 0) {
        FUNC_9("EVP_PKEY_CTX_set1_hkdf_salt");
        goto err;
    }
    if (FUNC_3(VAR_2, "secret", 6) <= 0) {
        FUNC_9("EVP_PKEY_CTX_set1_hkdf_key");
        goto err;
    }
    if (FUNC_0(VAR_2, "label", 5) <= 0) {
        FUNC_9("EVP_PKEY_CTX_set1_hkdf_info");
        goto err;
    }
    if (FUNC_6(VAR_2, VAR_3, &VAR_4) <= 0) {
        FUNC_9("EVP_PKEY_derive");
        goto err;
    }

    {
        const unsigned char VAR_5[sizeof(VAR_3)] = {
            0x2a, 0xc4, 0x36, 0x9f, 0x52, 0x59, 0x96, 0xf8, 0xde, 0x13
        };
        if (!FUNC_10(VAR_3, sizeof(VAR_3), VAR_5, sizeof(VAR_5))) {
            goto err;
        }
    }
    VAR_1 = 1;
err:
    FUNC_1(VAR_2);
    return VAR_1;
}
