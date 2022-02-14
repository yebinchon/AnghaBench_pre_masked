
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;


struct TYPE_23__ {int cLowerQualityChainContext; int cChain; TYPE_15__** rgpChain; int TrustStatus; scalar_t__* rgpLowerQualityChainContext; } ;
struct TYPE_25__ {TYPE_2__ context; int world; } ;
struct TYPE_24__ {int hCertStore; } ;
struct TYPE_22__ {TYPE_3__* pCertContext; } ;
struct TYPE_21__ {int cElement; int TrustStatus; TYPE_1__** rgpElement; } ;
typedef TYPE_3__* PCCERT_CONTEXT ;
typedef int LPFILETIME ;
typedef int HCERTSTORE ;
typedef size_t DWORD ;
typedef int CertificateChainEngine ;
typedef TYPE_4__ CertificateChain ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,TYPE_15__*,TYPE_3__*,size_t) ;
 scalar_t__ FUNC_1 (int *,int ,size_t,TYPE_15__*) ;
 int FUNC_2 (int *,TYPE_15__*,int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_4__* FUNC_4 (TYPE_4__*,size_t,size_t) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_3__* FUNC_6 (int *,int ,TYPE_3__*,TYPE_3__*,size_t,size_t*) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (char*,TYPE_4__*,...) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static CertificateChain *FUNC_11(
 CertificateChainEngine *VAR_0, LPFILETIME VAR_1, HCERTSTORE VAR_2,
 DWORD VAR_3, CertificateChain *VAR_4)
{
    CertificateChain *VAR_5;

    FUNC_9("(%p, %s, %p, %p)\n", VAR_0, FUNC_10(VAR_1),
     VAR_2, VAR_4);




    if (VAR_4->context.cLowerQualityChainContext)
        VAR_4 = (CertificateChain*)VAR_4->context.rgpLowerQualityChainContext[
         VAR_4->context.cLowerQualityChainContext - 1];

    if (VAR_4->context.cChain <= 1 && VAR_4->context.rgpChain[0]->cElement <= 1)
        VAR_5 = ((void*)0);
    else
    {
        DWORD VAR_6, VAR_7, VAR_8;
        PCCERT_CONTEXT VAR_9 = ((void*)0);

        VAR_5 = ((void*)0);
        for (VAR_6 = 0; !VAR_9 && VAR_6 < VAR_4->context.cChain; VAR_6++)
            for (VAR_7 = 0; !VAR_9 &&
             VAR_7 < VAR_4->context.rgpChain[VAR_6]->cElement - 1; VAR_7++)
            {
                PCCERT_CONTEXT VAR_10 =
                 VAR_4->context.rgpChain[VAR_6]->rgpElement[VAR_7]->pCertContext;
                PCCERT_CONTEXT VAR_11 = FUNC_7(
                 VAR_4->context.rgpChain[VAR_6]->rgpElement[VAR_7 + 1]->pCertContext);

                VAR_9 = FUNC_6(VAR_0, VAR_11->hCertStore,
                 VAR_10, VAR_11, VAR_3, &VAR_8);
            }
        if (VAR_9)
        {
            VAR_6--;
            VAR_7--;
            VAR_5 = FUNC_4(VAR_4, VAR_6, VAR_7);
            if (VAR_5)
            {
                BOOL VAR_12 = FUNC_0(VAR_0,
                 VAR_5->context.rgpChain[VAR_6], VAR_9, VAR_8);




                FUNC_8(VAR_9);
                if (VAR_12)
                {
                    VAR_12 = FUNC_1(VAR_0, VAR_5->world,
                     VAR_3, VAR_5->context.rgpChain[VAR_6]);
                    if (VAR_12)
                        FUNC_2(VAR_0,
                         VAR_5->context.rgpChain[VAR_6], VAR_1);
                    FUNC_3(&VAR_5->context.TrustStatus,
                     &VAR_5->context.rgpChain[VAR_6]->TrustStatus);
                }
                if (!VAR_12)
                {
                    FUNC_5(VAR_5);
                    VAR_5 = ((void*)0);
                }
            }
        }
    }
    FUNC_9("%p\n", VAR_5);
    return VAR_5;
}
