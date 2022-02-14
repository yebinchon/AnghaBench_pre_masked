
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int cElement; } ;
struct TYPE_9__ {int cbSize; int cChain; TYPE_3__** rgpChain; scalar_t__ dwRevocationFreshnessTime; void* fHasRevocationFreshnessTime; int * rgpLowerQualityChainContext; scalar_t__ cLowerQualityChainContext; TYPE_3__* TrustStatus; } ;
struct TYPE_10__ {int ref; TYPE_1__ context; int world; } ;
typedef int PCERT_SIMPLE_CHAIN ;
typedef int DWORD ;
typedef TYPE_2__ CertificateChain ;
typedef int CERT_TRUST_STATUS ;
typedef int CERT_CHAIN_CONTEXT ;
typedef void* BOOL ;


 void* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_5 (TYPE_3__**,int ,int) ;

__attribute__((used)) static CertificateChain *FUNC_6(CertificateChain *VAR_2,
 DWORD VAR_3, DWORD VAR_4)
{
    CertificateChain *VAR_5 = FUNC_3(sizeof(CertificateChain));

    if (VAR_5)
    {
        VAR_5->ref = 1;
        VAR_5->world = FUNC_2(VAR_2->world);
        VAR_5->context.cbSize = sizeof(CERT_CHAIN_CONTEXT);



        FUNC_5(&VAR_5->context.TrustStatus, 0, sizeof(CERT_TRUST_STATUS));
        VAR_5->context.cLowerQualityChainContext = 0;
        VAR_5->context.rgpLowerQualityChainContext = ((void*)0);
        VAR_5->context.fHasRevocationFreshnessTime = VAR_0;
        VAR_5->context.dwRevocationFreshnessTime = 0;
        VAR_5->context.rgpChain = FUNC_3(
         (VAR_3 + 1) * sizeof(PCERT_SIMPLE_CHAIN));
        if (VAR_5->context.rgpChain)
        {
            BOOL VAR_6 = VAR_1;
            DWORD VAR_7;

            FUNC_5(VAR_5->context.rgpChain, 0,
             (VAR_3 + 1) * sizeof(PCERT_SIMPLE_CHAIN));
            if (VAR_3)
            {
                for (VAR_7 = 0; VAR_6 && VAR_3 && VAR_7 < VAR_3 - 1; VAR_7++)
                {
                    VAR_5->context.rgpChain[VAR_7] =
                     FUNC_0(VAR_2->context.rgpChain[VAR_7],
                     VAR_2->context.rgpChain[VAR_7]->cElement - 1);
                    if (!VAR_5->context.rgpChain[VAR_7])
                        VAR_6 = VAR_0;
                }
            }
            else
                VAR_7 = 0;
            if (VAR_6)
            {
                VAR_5->context.rgpChain[VAR_7] =
                 FUNC_0(VAR_2->context.rgpChain[VAR_7],
                 VAR_4);
                if (!VAR_5->context.rgpChain[VAR_7])
                    VAR_6 = VAR_0;
            }
            if (!VAR_6)
            {
                FUNC_1(VAR_5);
                VAR_5 = ((void*)0);
            }
            else
                VAR_5->context.cChain = VAR_3 + 1;
        }
        else
        {
            FUNC_4(VAR_5);
            VAR_5 = ((void*)0);
        }
    }
    return VAR_5;
}
