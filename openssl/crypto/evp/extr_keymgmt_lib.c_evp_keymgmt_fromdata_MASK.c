
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* (* importkey ) (void*,int const*) ;void* (* importdomparams ) (void*,int const*) ;} ;
struct TYPE_10__ {TYPE_1__* pkeys; } ;
struct TYPE_9__ {int domainparams; void* provdata; TYPE_3__* keymgmt; } ;
typedef int OSSL_PARAM ;
typedef TYPE_2__ EVP_PKEY ;
typedef TYPE_3__ EVP_KEYMGMT ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (void*,int const*) ;
 void* FUNC_5 (void*,int const*) ;

void *FUNC_6(EVP_PKEY *VAR_0, EVP_KEYMGMT *VAR_1,
                           const OSSL_PARAM VAR_2[], int VAR_3)
{
    void *VAR_4 = FUNC_3(FUNC_0(VAR_1));
    void *VAR_5 = VAR_3
        ? VAR_1->importdomparams(VAR_4, VAR_2)
        : VAR_1->importkey(VAR_4, VAR_2);

    FUNC_2(VAR_0);
    if (VAR_5 != ((void*)0)) {
        FUNC_1(VAR_1);
        VAR_0->pkeys[0].keymgmt = VAR_1;
        VAR_0->pkeys[0].provdata = VAR_5;
        VAR_0->pkeys[0].domainparams = VAR_3;
    }

    return VAR_5;
}
