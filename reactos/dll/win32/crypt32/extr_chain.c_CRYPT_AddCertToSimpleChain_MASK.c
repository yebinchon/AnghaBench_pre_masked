
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int dwInfoStatus; } ;
struct TYPE_14__ {int CycleDetectionModulus; } ;
struct TYPE_13__ {int cbSize; TYPE_8__ TrustStatus; int pCertContext; } ;
struct TYPE_12__ {int cElement; int TrustStatus; TYPE_2__** rgpElement; } ;
typedef TYPE_1__* PCERT_SIMPLE_CHAIN ;
typedef TYPE_2__* PCERT_CHAIN_ELEMENT ;
typedef int PCCERT_CONTEXT ;
typedef int DWORD ;
typedef TYPE_3__ CertificateChainEngine ;
typedef int CERT_CHAIN_ELEMENT ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_8__*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__** FUNC_5 (TYPE_2__**,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_7(const CertificateChainEngine *VAR_2,
 PCERT_SIMPLE_CHAIN VAR_3, PCCERT_CONTEXT VAR_4, DWORD VAR_5)
{
    BOOL VAR_6 = VAR_0;
    PCERT_CHAIN_ELEMENT VAR_7 = FUNC_3(sizeof(CERT_CHAIN_ELEMENT));

    if (VAR_7)
    {
        if (!VAR_3->cElement)
            VAR_3->rgpElement = FUNC_3(sizeof(PCERT_CHAIN_ELEMENT));
        else
            VAR_3->rgpElement = FUNC_5(VAR_3->rgpElement,
             (VAR_3->cElement + 1) * sizeof(PCERT_CHAIN_ELEMENT));
        if (VAR_3->rgpElement)
        {
            VAR_3->rgpElement[VAR_3->cElement++] = VAR_7;
            FUNC_6(VAR_7, 0, sizeof(CERT_CHAIN_ELEMENT));
            VAR_7->cbSize = sizeof(CERT_CHAIN_ELEMENT);
            VAR_7->pCertContext = FUNC_2(VAR_4);
            if (VAR_3->cElement > 1)
                VAR_3->rgpElement[VAR_3->cElement - 2]->TrustStatus.dwInfoStatus
                 = VAR_5;

            if (!(VAR_3->cElement % VAR_2->CycleDetectionModulus))
            {
                FUNC_0(VAR_3);



                VAR_7 = VAR_3->rgpElement[VAR_3->cElement - 1];
            }
            FUNC_1(&VAR_3->TrustStatus,
             &VAR_7->TrustStatus);
            VAR_6 = VAR_1;
        }
        else
            FUNC_4(VAR_7);
    }
    return VAR_6;
}
