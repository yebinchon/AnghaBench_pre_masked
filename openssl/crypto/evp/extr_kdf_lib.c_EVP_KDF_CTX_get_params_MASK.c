
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; TYPE_1__* meth; } ;
struct TYPE_4__ {int (* get_ctx_params ) (int ,int *) ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_2__ EVP_KDF_CTX ;


 int FUNC_0 (int ,int *) ;

int FUNC_1(EVP_KDF_CTX *VAR_0, OSSL_PARAM VAR_1[])
{
    if (VAR_0->meth->get_ctx_params != ((void*)0))
        return VAR_0->meth->get_ctx_params(VAR_0->data, VAR_1);
    return 1;
}
