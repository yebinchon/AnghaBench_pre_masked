
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ivlen; int keylen; } ;
struct TYPE_4__ {int tls_aad_pad_sz; TYPE_1__ base; } ;
typedef TYPE_2__ PROV_RC4_HMAC_MD5_CTX ;
typedef int OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(void *VAR_5, OSSL_PARAM VAR_6[])
{
    PROV_RC4_HMAC_MD5_CTX *VAR_7 = (PROV_RC4_HMAC_MD5_CTX *)VAR_5;
    OSSL_PARAM *VAR_8;

    VAR_8 = FUNC_1(VAR_6, VAR_3);
    if (VAR_8 != ((void*)0) && !FUNC_2(VAR_8, VAR_7->base.keylen)) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }

    VAR_8 = FUNC_1(VAR_6, VAR_2);
    if (VAR_8 != ((void*)0) && !FUNC_2(VAR_8, VAR_7->base.ivlen)) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }
    VAR_8 = FUNC_1(VAR_6, VAR_1);
    if (VAR_8 != ((void*)0) && !FUNC_2(VAR_8, VAR_7->tls_aad_pad_sz)) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }
    return 1;
}
