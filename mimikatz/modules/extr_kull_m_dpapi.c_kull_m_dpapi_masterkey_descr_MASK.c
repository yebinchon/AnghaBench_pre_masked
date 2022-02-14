
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int __dwKeyLen; int pbKey; int algCrypt; int algHash; int rounds; int salt; int dwVersion; } ;
typedef TYPE_1__* PKULL_M_DPAPI_MASTERKEY ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;

void FUNC_3(DWORD VAR_0, PKULL_M_DPAPI_MASTERKEY VAR_1)
{
 FUNC_0(L"%*s" L"**MASTERKEY**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwVersion        : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwVersion, VAR_1->dwVersion);
  FUNC_0(L"%*s" L"  salt             : ", VAR_0 << 1, L""); FUNC_2(VAR_1->salt, sizeof(VAR_1->salt), 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  rounds           : %08x - %u\n", VAR_0 << 1, L"", VAR_1->rounds, VAR_1->rounds);
  FUNC_0(L"%*s" L"  algHash          : %08x - %u (%s)\n", VAR_0 << 1, L"", VAR_1->algHash, VAR_1->algHash, FUNC_1(VAR_1->algHash));
  FUNC_0(L"%*s" L"  algCrypt         : %08x - %u (%s)\n", VAR_0 << 1, L"", VAR_1->algCrypt, VAR_1->algCrypt, FUNC_1(VAR_1->algCrypt));
  FUNC_0(L"%*s" L"  pbKey            : ", VAR_0 << 1, L""); FUNC_2(VAR_1->pbKey, VAR_1->__dwKeyLen, 0); FUNC_0(L"\n\n");
 }
}
