
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dwCertEncodingType; TYPE_1__* pCertInfo; } ;
struct TYPE_4__ {int Issuer; int Subject; } ;
typedef TYPE_2__* PCCERT_CONTEXT ;
typedef int DWORD ;
typedef int CERT_NAME_BLOB ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_1(PCCERT_CONTEXT VAR_1, DWORD VAR_2,
 DWORD VAR_3, const void *VAR_4)
{
    CERT_NAME_BLOB *VAR_5 = (CERT_NAME_BLOB *)VAR_4, *VAR_6;
    BOOL VAR_7;

    if (VAR_2 & VAR_0)
        VAR_6 = &VAR_1->pCertInfo->Subject;
    else
        VAR_6 = &VAR_1->pCertInfo->Issuer;
    VAR_7 = FUNC_0(VAR_1->dwCertEncodingType,
     VAR_6, VAR_5);
    return VAR_7;
}
