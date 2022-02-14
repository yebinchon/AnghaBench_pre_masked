
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t cLowerQualityChainContext; int * rgpLowerQualityChainContext; } ;
struct TYPE_5__ {TYPE_1__ context; } ;
typedef size_t DWORD ;
typedef TYPE_2__ CertificateChain ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CertificateChain *VAR_0)
{
    DWORD VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->context.cLowerQualityChainContext; VAR_1++)
        FUNC_0(VAR_0->context.rgpLowerQualityChainContext[VAR_1]);
    FUNC_1(VAR_0->context.rgpLowerQualityChainContext);
    VAR_0->context.cLowerQualityChainContext = 0;
    VAR_0->context.rgpLowerQualityChainContext = ((void*)0);
}
