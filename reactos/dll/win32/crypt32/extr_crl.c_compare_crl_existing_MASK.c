
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pCrlInfo; int dwCertEncodingType; } ;
struct TYPE_4__ {int Issuer; } ;
typedef TYPE_2__* PCCRL_CONTEXT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static BOOL FUNC_1(PCCRL_CONTEXT VAR_1, DWORD VAR_2,
 DWORD VAR_3, const void *VAR_4)
{
    BOOL VAR_5;

    if (VAR_4)
    {
        PCCRL_CONTEXT VAR_6 = VAR_4;

        VAR_5 = FUNC_0(VAR_1->dwCertEncodingType,
         &VAR_1->pCrlInfo->Issuer, &VAR_6->pCrlInfo->Issuer);
    }
    else
        VAR_5 = VAR_0;
    return VAR_5;
}
