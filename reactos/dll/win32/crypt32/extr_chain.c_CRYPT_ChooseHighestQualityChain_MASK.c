
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t cLowerQualityChainContext; scalar_t__* rgpLowerQualityChainContext; } ;
struct TYPE_7__ {TYPE_1__ context; } ;
typedef scalar_t__ PCCERT_CHAIN_CONTEXT ;
typedef size_t DWORD ;
typedef TYPE_2__ CertificateChain ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static CertificateChain *FUNC_1(
 CertificateChain *VAR_0)
{
    DWORD VAR_1;







    for (VAR_1 = 0; VAR_1 < VAR_0->context.cLowerQualityChainContext; VAR_1++)
    {
        CertificateChain *VAR_2 =
         (CertificateChain*)VAR_0->context.rgpLowerQualityChainContext[VAR_1];

        if (FUNC_0(VAR_2) > FUNC_0(VAR_0))
        {
            VAR_2->context.cLowerQualityChainContext =
             VAR_0->context.cLowerQualityChainContext;
            VAR_2->context.rgpLowerQualityChainContext =
             VAR_0->context.rgpLowerQualityChainContext;
            VAR_2->context.rgpLowerQualityChainContext[VAR_1] =
             (PCCERT_CHAIN_CONTEXT)VAR_0;
            VAR_0->context.cLowerQualityChainContext = 0;
            VAR_0->context.rgpLowerQualityChainContext = ((void*)0);
            VAR_0 = VAR_2;
        }
    }
    return VAR_0;
}
