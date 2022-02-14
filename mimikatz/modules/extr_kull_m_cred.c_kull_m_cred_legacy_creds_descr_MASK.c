
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int __count; int * Credentials; int structSize; int dwVersion; } ;
typedef TYPE_1__* PKULL_M_CRED_LEGACY_CREDS_BLOB ;
typedef int DWORD ;


 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(DWORD VAR_0, PKULL_M_CRED_LEGACY_CREDS_BLOB VAR_1)
{
 DWORD VAR_2;
 FUNC_0(L"%*s" L"**LEGACY CREDENTIALS GROUP**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwVersion      : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwVersion, VAR_1->dwVersion);
  FUNC_0(L"%*s" L"  structSize     : %08x - %u\n", VAR_0 << 1, L"", VAR_1->structSize, VAR_1->structSize);
  FUNC_0(L"%*s" L"  Credentials    : %u\n", VAR_0 << 1, L"", VAR_1->__count);
  for(VAR_2 = 0; VAR_2 < VAR_1->__count; VAR_2++)
   FUNC_1(VAR_0 + 1, VAR_1->Credentials[VAR_2]);
 }
}
