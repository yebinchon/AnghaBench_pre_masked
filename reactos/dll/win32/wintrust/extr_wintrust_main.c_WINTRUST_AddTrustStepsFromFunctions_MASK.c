
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wintrust_step {int error_index; scalar_t__ func; } ;
struct TYPE_3__ {scalar_t__ pfnFinalPolicy; scalar_t__ pfnCertificateTrust; scalar_t__ pfnSignatureTrust; scalar_t__ pfnObjectTrust; scalar_t__ pfnInitialize; } ;
typedef size_t DWORD ;
typedef TYPE_1__ CRYPT_PROVIDER_FUNCTIONS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static DWORD FUNC_0(struct wintrust_step *VAR_5,
 const CRYPT_PROVIDER_FUNCTIONS *VAR_6)
{
    DWORD VAR_7 = 0;

    if (VAR_6->pfnInitialize)
    {
        VAR_5[VAR_7].func = VAR_6->pfnInitialize;
        VAR_5[VAR_7++].error_index = VAR_4;
    }
    if (VAR_6->pfnObjectTrust)
    {
        VAR_5[VAR_7].func = VAR_6->pfnObjectTrust;
        VAR_5[VAR_7++].error_index = VAR_1;
    }
    if (VAR_6->pfnSignatureTrust)
    {
        VAR_5[VAR_7].func = VAR_6->pfnSignatureTrust;
        VAR_5[VAR_7++].error_index = VAR_3;
    }
    if (VAR_6->pfnCertificateTrust)
    {
        VAR_5[VAR_7].func = VAR_6->pfnCertificateTrust;
        VAR_5[VAR_7++].error_index = VAR_0;
    }
    if (VAR_6->pfnFinalPolicy)
    {
        VAR_5[VAR_7].func = VAR_6->pfnFinalPolicy;
        VAR_5[VAR_7++].error_index = VAR_2;
    }
    return VAR_7;
}
