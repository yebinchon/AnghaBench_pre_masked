
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* pIssuerCert; } ;
struct TYPE_10__ {TYPE_3__* pCrlInfo; } ;
struct TYPE_9__ {int Issuer; } ;
struct TYPE_8__ {TYPE_1__* pCertInfo; int dwCertEncodingType; } ;
struct TYPE_7__ {int Issuer; } ;
typedef TYPE_4__* PCCRL_CONTEXT ;
typedef int DWORD ;
typedef TYPE_5__ CRL_FIND_ISSUED_FOR_PARA ;
typedef int BOOL ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_1(PCCRL_CONTEXT VAR_0, DWORD VAR_1,
 DWORD VAR_2, const void *VAR_3)
{
    const CRL_FIND_ISSUED_FOR_PARA *VAR_4 = VAR_3;
    BOOL VAR_5;

    VAR_5 = FUNC_0(VAR_4->pIssuerCert->dwCertEncodingType,
     &VAR_4->pIssuerCert->pCertInfo->Issuer, &VAR_0->pCrlInfo->Issuer);
    return VAR_5;
}
