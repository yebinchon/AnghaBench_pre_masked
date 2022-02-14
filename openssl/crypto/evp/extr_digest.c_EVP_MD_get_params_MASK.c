
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_params ) (int *) ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_MD ;


 int FUNC_0 (int *) ;

int FUNC_1(const EVP_MD *VAR_0, OSSL_PARAM VAR_1[])
{
    if (VAR_0 != ((void*)0) && VAR_0->get_params != ((void*)0))
        return VAR_0->get_params(VAR_1);
    return 0;
}
