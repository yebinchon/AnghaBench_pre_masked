
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* exportkey ) (void*,int *) ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_KEYMGMT ;


 int FUNC_0 (void*,int *) ;

int FUNC_1(const EVP_KEYMGMT *VAR_0, void *VAR_1,
                          OSSL_PARAM VAR_2[])
{
    return VAR_0->exportkey(VAR_1, VAR_2);
}
