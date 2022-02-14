
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int Issuer; int SerialNumber; } ;
struct TYPE_6__ {TYPE_1__* pCertInfo; int dwCertEncodingType; } ;
struct TYPE_5__ {int Issuer; int SerialNumber; int Subject; } ;
typedef TYPE_2__* PCCERT_CONTEXT ;
typedef int DWORD ;
typedef TYPE_3__ CERT_INFO ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_3(PCCERT_CONTEXT VAR_0,
 DWORD VAR_1, DWORD VAR_2, const void *VAR_3)
{
    CERT_INFO *VAR_4 = (CERT_INFO *)VAR_3;
    BOOL VAR_5;


    VAR_5 = FUNC_0(VAR_0->dwCertEncodingType,
     &VAR_0->pCertInfo->Subject, &VAR_4->Issuer);
    if (VAR_5)
        VAR_5 = FUNC_1(&VAR_0->pCertInfo->SerialNumber,
         &VAR_4->SerialNumber);
    else
    {

        VAR_5 = FUNC_1(&VAR_0->pCertInfo->SerialNumber,
         &VAR_4->SerialNumber);
        if (VAR_5)
            VAR_5 = FUNC_0(VAR_0->dwCertEncodingType,
             &VAR_0->pCertInfo->Issuer, &VAR_4->Issuer);
    }
    FUNC_2("returning %d\n", VAR_5);
    return VAR_5;
}
