
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ DomainKey; scalar_t__ CredHist; scalar_t__ BackupKey; scalar_t__ MasterKey; scalar_t__ dwDomainKeyLen; scalar_t__ dwCredHistLen; scalar_t__ dwBackupKeyLen; scalar_t__ dwMasterKeyLen; int dwFlags; int szGuid; int dwVersion; } ;
typedef TYPE_1__* PKULL_M_DPAPI_MASTERKEYS ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(DWORD VAR_0, PKULL_M_DPAPI_MASTERKEYS VAR_1)
{
 FUNC_0(L"%*s" L"**MASTERKEYS**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwVersion          : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwVersion, VAR_1->dwVersion);
  FUNC_0(L"%*s" L"  szGuid             : {%.36s}\n", VAR_0 << 1, L"", VAR_1->szGuid);
  FUNC_0(L"%*s" L"  dwFlags            : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwFlags, VAR_1->dwFlags);
  FUNC_0(L"%*s" L"  dwMasterKeyLen     : %08x - %u\n", VAR_0 << 1, L"", (DWORD) VAR_1->dwMasterKeyLen, (DWORD) VAR_1->dwMasterKeyLen);
  FUNC_0(L"%*s" L"  dwBackupKeyLen     : %08x - %u\n", VAR_0 << 1, L"", (DWORD) VAR_1->dwBackupKeyLen, (DWORD) VAR_1->dwBackupKeyLen);
  FUNC_0(L"%*s" L"  dwCredHistLen      : %08x - %u\n", VAR_0 << 1, L"", (DWORD) VAR_1->dwCredHistLen, (DWORD) VAR_1->dwCredHistLen);
  FUNC_0(L"%*s" L"  dwDomainKeyLen     : %08x - %u\n", VAR_0 << 1, L"", (DWORD) VAR_1->dwDomainKeyLen, (DWORD) VAR_1->dwDomainKeyLen);

  if(VAR_1->MasterKey)
  {
   FUNC_0(L"%*s" L"[masterkey]\n", VAR_0 << 1, L"");
   FUNC_1(VAR_0 + 1, VAR_1->MasterKey);
  }
  if(VAR_1->BackupKey)
  {
   FUNC_0(L"%*s" L"[backupkey]\n", VAR_0 << 1, L"");
   FUNC_1(VAR_0 + 1, VAR_1->BackupKey);
  }
  if(VAR_1->CredHist)
  {
   FUNC_0(L"%*s" L"[credhist]\n", VAR_0 << 1, L"");
   FUNC_2(VAR_0 + 1, VAR_1->CredHist);
  }
  if(VAR_1->DomainKey)
  {
   FUNC_0(L"%*s" L"[domainkey]\n", VAR_0 << 1, L"");
   FUNC_3(VAR_0 + 1, VAR_1->DomainKey);
  }
  FUNC_0(L"\n");
 }
}
