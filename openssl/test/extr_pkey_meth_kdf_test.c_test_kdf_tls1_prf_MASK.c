
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
 scalar_t__ FUNC_4 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (unsigned char*,int,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_10(void)
{
    int VAR_1 = 0;
    EVP_PKEY_CTX *VAR_2;
    unsigned char VAR_3[16];
    size_t VAR_4 = sizeof(VAR_3);

    if ((VAR_2 = FUNC_2(VAR_0, ((void*)0))) == ((void*)0)) {
        FUNC_8("EVP_PKEY_TLS1_PRF");
        goto err;
    }
    if (FUNC_6(VAR_2) <= 0) {
        FUNC_8("EVP_PKEY_derive_init");
        goto err;
    }
    if (FUNC_4(VAR_2, FUNC_7()) <= 0) {
        FUNC_8("EVP_PKEY_CTX_set_tls1_prf_md");
        goto err;
    }
    if (FUNC_3(VAR_2, "secret", 6) <= 0) {
        FUNC_8("EVP_PKEY_CTX_set1_tls1_prf_secret");
        goto err;
    }
    if (FUNC_0(VAR_2, "seed", 4) <= 0) {
        FUNC_8("EVP_PKEY_CTX_add1_tls1_prf_seed");
        goto err;
    }
    if (FUNC_5(VAR_2, VAR_3, &VAR_4) <= 0) {
        FUNC_8("EVP_PKEY_derive");
        goto err;
    }

    {
        const unsigned char VAR_5[sizeof(VAR_3)] = {
            0x8e, 0x4d, 0x93, 0x25, 0x30, 0xd7, 0x65, 0xa0,
            0xaa, 0xe9, 0x74, 0xc3, 0x04, 0x73, 0x5e, 0xcc
        };
        if (!FUNC_9(VAR_3, sizeof(VAR_3), VAR_5, sizeof(VAR_5))) {
            goto err;
        }
    }
    VAR_1 = 1;
err:
    FUNC_1(VAR_2);
    return VAR_1;
}
