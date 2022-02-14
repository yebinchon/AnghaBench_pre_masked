
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cLowerQualityChainContext; scalar_t__* rgpLowerQualityChainContext; } ;
struct TYPE_6__ {TYPE_1__ context; } ;
typedef scalar_t__ PCCERT_CHAIN_CONTEXT ;
typedef TYPE_2__ CertificateChain ;
typedef int BOOL ;


 scalar_t__* FUNC_0 (int) ;
 scalar_t__* FUNC_1 (scalar_t__*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_2(CertificateChain *VAR_2,
 const CertificateChain *VAR_3)
{
    BOOL VAR_4;

    if (VAR_2->context.cLowerQualityChainContext)
        VAR_2->context.rgpLowerQualityChainContext =
         FUNC_1(VAR_2->context.rgpLowerQualityChainContext,
         (VAR_2->context.cLowerQualityChainContext + 1) *
         sizeof(PCCERT_CHAIN_CONTEXT));
    else
        VAR_2->context.rgpLowerQualityChainContext =
         FUNC_0(sizeof(PCCERT_CHAIN_CONTEXT));
    if (VAR_2->context.rgpLowerQualityChainContext)
    {
        VAR_2->context.rgpLowerQualityChainContext[
         VAR_2->context.cLowerQualityChainContext++] =
         (PCCERT_CHAIN_CONTEXT)VAR_3;
        VAR_4 = VAR_1;
    }
    else
        VAR_4 = VAR_0;
    return VAR_4;
}
