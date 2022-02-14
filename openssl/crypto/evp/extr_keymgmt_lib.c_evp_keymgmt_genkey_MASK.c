
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* (* genkey ) (void*,void*,int const*) ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_KEYMGMT ;


 int FUNC_0 (TYPE_1__ const*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (void*,void*,int const*) ;

void *FUNC_3(const EVP_KEYMGMT *VAR_0, void *VAR_1,
                         const OSSL_PARAM VAR_2[])
{
    void *VAR_3 = FUNC_1(FUNC_0(VAR_0));

    return VAR_0->genkey(VAR_3, VAR_1, VAR_2);
}
