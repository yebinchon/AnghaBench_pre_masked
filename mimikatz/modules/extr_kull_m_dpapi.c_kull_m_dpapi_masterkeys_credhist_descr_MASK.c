
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int guid; int dwVersion; } ;
typedef TYPE_1__* PKULL_M_DPAPI_MASTERKEY_CREDHIST ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;

void FUNC_2(DWORD VAR_0, PKULL_M_DPAPI_MASTERKEY_CREDHIST VAR_1)
{
 FUNC_0(L"%*s" L"**CREDHIST INFO**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwVersion        : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwVersion, VAR_1->dwVersion);
  FUNC_0(L"%*s" L"  guid             : ", VAR_0 << 1, L""); FUNC_1(&VAR_1->guid); FUNC_0(L"\n\n");
 }
}
