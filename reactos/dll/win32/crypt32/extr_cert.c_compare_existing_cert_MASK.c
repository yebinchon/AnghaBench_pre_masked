
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pCertInfo; int dwCertEncodingType; } ;
typedef TYPE_1__* PCCERT_CONTEXT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_1(PCCERT_CONTEXT VAR_0, DWORD VAR_1,
 DWORD VAR_2, const void *VAR_3)
{
    PCCERT_CONTEXT VAR_4 = VAR_3;
    return FUNC_0(VAR_0->dwCertEncodingType,
     VAR_0->pCertInfo, VAR_4->pCertInfo);
}
