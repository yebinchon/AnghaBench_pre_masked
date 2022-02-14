
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwFlags; scalar_t__ dwSessionLifespan; scalar_t__ dwMaximumCipherStrength; scalar_t__ dwMinimumCipherStrength; scalar_t__ grbitEnabledProtocols; int * palgSupportedAlgs; scalar_t__ cSupportedAlgs; int * aphMappers; scalar_t__ cMappers; int * hRootStore; scalar_t__ paCred; scalar_t__ cCreds; int dwVersion; } ;
typedef TYPE_1__ SCHANNEL_CRED ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(SCHANNEL_CRED *VAR_1)
{
    VAR_1->dwVersion = VAR_0;
    VAR_1->cCreds = 0;
    VAR_1->paCred = 0;
    VAR_1->hRootStore = ((void*)0);
    VAR_1->cMappers = 0;
    VAR_1->aphMappers = ((void*)0);
    VAR_1->cSupportedAlgs = 0;
    VAR_1->palgSupportedAlgs = ((void*)0);
    VAR_1->grbitEnabledProtocols = 0;
    VAR_1->dwMinimumCipherStrength = 0;
    VAR_1->dwMaximumCipherStrength = 0;
    VAR_1->dwSessionLifespan = 0;
    VAR_1->dwFlags = 0;
}
