
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* meth; int * data; } ;
struct TYPE_4__ {scalar_t__ (* get_params ) (int *) ;scalar_t__ (* get_ctx_params ) (int *,int *) ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_2__ EVP_MAC_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

size_t FUNC_3(EVP_MAC_CTX *VAR_2)
{
    size_t VAR_3 = 0;

    if (VAR_2->data != ((void*)0)) {
        OSSL_PARAM VAR_4[2] = { VAR_1, VAR_1 };

        VAR_4[0] = FUNC_0(VAR_0, &VAR_3);
        if (VAR_2->meth->get_ctx_params != ((void*)0)) {
            if (VAR_2->meth->get_ctx_params(VAR_2->data, VAR_4))
                return VAR_3;
        } else if (VAR_2->meth->get_params != ((void*)0)) {
            if (VAR_2->meth->get_params(VAR_4))
                return VAR_3;
        }
    }




    return 0;
}
