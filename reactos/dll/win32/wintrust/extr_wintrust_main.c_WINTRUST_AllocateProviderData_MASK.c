
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pPDSip; } ;
struct TYPE_6__ {int cbStruct; int cdwTrustStepErrors; struct TYPE_6__* psPfns; TYPE_1__ u; struct TYPE_6__* padwTrustStepErrors; } ;
typedef int PROVDATA_SIP ;
typedef int DWORD ;
typedef int CRYPT_PROVIDER_FUNCTIONS ;
typedef TYPE_2__ CRYPT_PROVIDER_DATA ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static CRYPT_PROVIDER_DATA *FUNC_2(void)
{
    CRYPT_PROVIDER_DATA *VAR_1;

    VAR_1 = FUNC_0(sizeof(CRYPT_PROVIDER_DATA));
    if (!VAR_1)
        goto oom;
    VAR_1->cbStruct = sizeof(CRYPT_PROVIDER_DATA);

    VAR_1->padwTrustStepErrors =
     FUNC_0(VAR_0 * sizeof(DWORD));
    if (!VAR_1->padwTrustStepErrors)
        goto oom;
    VAR_1->cdwTrustStepErrors = VAR_0;

    VAR_1->u.pPDSip = FUNC_0(sizeof(PROVDATA_SIP));
    if (!VAR_1->u.pPDSip)
        goto oom;
    VAR_1->u.pPDSip->cbStruct = sizeof(PROVDATA_SIP);

    VAR_1->psPfns = FUNC_0(sizeof(CRYPT_PROVIDER_FUNCTIONS));
    if (!VAR_1->psPfns)
        goto oom;
    VAR_1->psPfns->cbStruct = sizeof(CRYPT_PROVIDER_FUNCTIONS);
    return VAR_1;

oom:
    if (VAR_1)
    {
        FUNC_1(VAR_1->padwTrustStepErrors);
        FUNC_1(VAR_1->u.pPDSip);
        FUNC_1(VAR_1->psPfns);
        FUNC_1(VAR_1);
    }
    return ((void*)0);
}
