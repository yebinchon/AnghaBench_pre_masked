
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pCertInfo; int dwCertEncodingType; } ;
struct TYPE_4__ {int SubjectPublicKeyInfo; } ;
typedef TYPE_2__* PCCERT_CONTEXT ;
typedef int DWORD ;
typedef int CERT_PUBLIC_KEY_INFO ;
typedef int BOOL ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_1(PCCERT_CONTEXT VAR_0,
 DWORD VAR_1, DWORD VAR_2, const void *VAR_3)
{
    CERT_PUBLIC_KEY_INFO *VAR_4 = (CERT_PUBLIC_KEY_INFO *)VAR_3;
    BOOL VAR_5;

    VAR_5 = FUNC_0(VAR_0->dwCertEncodingType,
     &VAR_0->pCertInfo->SubjectPublicKeyInfo, VAR_4);
    return VAR_5;
}
