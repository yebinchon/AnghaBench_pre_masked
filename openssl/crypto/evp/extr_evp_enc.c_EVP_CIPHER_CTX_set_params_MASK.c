
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int provctx; TYPE_1__* cipher; } ;
struct TYPE_4__ {int (* set_ctx_params ) (int ,int const*) ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int FUNC_0 (int ,int const*) ;

int FUNC_1(EVP_CIPHER_CTX *VAR_0, const OSSL_PARAM VAR_1[])
{
    if (VAR_0->cipher != ((void*)0) && VAR_0->cipher->set_ctx_params != ((void*)0))
        return VAR_0->cipher->set_ctx_params(VAR_0->provctx, VAR_1);
    return 0;
}
