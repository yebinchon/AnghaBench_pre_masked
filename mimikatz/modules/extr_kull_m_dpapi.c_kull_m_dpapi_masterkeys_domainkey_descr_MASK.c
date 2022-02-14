
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwAccesscheckLen; int pbAccesscheck; int dwSecretLen; int pbSecret; int guidMasterKey; int dwVersion; } ;
typedef TYPE_1__* PKULL_M_DPAPI_MASTERKEY_DOMAINKEY ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(DWORD VAR_0, PKULL_M_DPAPI_MASTERKEY_DOMAINKEY VAR_1)
{
 FUNC_0(L"%*s" L"**DOMAINKEY**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwVersion        : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwVersion, VAR_1->dwVersion);
  FUNC_0(L"%*s" L"  dwSecretLen      : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwSecretLen, VAR_1->dwSecretLen);
  FUNC_0(L"%*s" L"  dwAccesscheckLen : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwAccesscheckLen, VAR_1->dwAccesscheckLen);
  FUNC_0(L"%*s" L"  guidMasterKey    : ", VAR_0 << 1, L""); FUNC_1(&VAR_1->guidMasterKey); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  pbSecret         : ", VAR_0 << 1, L""); FUNC_2(VAR_1->pbSecret, VAR_1->dwSecretLen, 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  pbAccesscheck    : ", VAR_0 << 1, L""); FUNC_2(VAR_1->pbAccesscheck, VAR_1->dwAccesscheckLen, 0); FUNC_0(L"\n\n");
 }
}
