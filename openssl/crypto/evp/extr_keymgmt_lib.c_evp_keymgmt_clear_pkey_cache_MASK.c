
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ domainparams; int * provdata; TYPE_2__* keymgmt; } ;
struct TYPE_7__ {int (* freekey ) (void*) ;int (* freedomparams ) (void*) ;} ;
struct TYPE_6__ {TYPE_4__* pkeys; } ;
typedef TYPE_1__ EVP_PKEY ;
typedef TYPE_2__ EVP_KEYMGMT ;


 int FUNC_0 (TYPE_2__*) ;
 size_t FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

void FUNC_4(EVP_PKEY *VAR_0)
{
    size_t VAR_1;

    if (VAR_0 != ((void*)0)) {
        for (VAR_1 = 0;
             VAR_1 < FUNC_1(VAR_0->pkeys) && VAR_0->pkeys[VAR_1].keymgmt != ((void*)0);
             VAR_1++) {
            EVP_KEYMGMT *VAR_2 = VAR_0->pkeys[VAR_1].keymgmt;
            void *VAR_3 = VAR_0->pkeys[VAR_1].provdata;

            VAR_0->pkeys[VAR_1].keymgmt = ((void*)0);
            VAR_0->pkeys[VAR_1].provdata = ((void*)0);
            if (VAR_0->pkeys[VAR_1].domainparams)
                VAR_2->freedomparams(VAR_3);
            else
                VAR_2->freekey(VAR_3);
            FUNC_0(VAR_2);
        }
    }
}
