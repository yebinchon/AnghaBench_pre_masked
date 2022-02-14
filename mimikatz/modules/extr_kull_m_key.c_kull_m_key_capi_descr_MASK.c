
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pExExportFlag; scalar_t__ dwExExportFlagLen; scalar_t__ pExPrivateKey; scalar_t__ dwExPrivateKeyLen; int dwExPublicKeyLen; int pExPublicKey; scalar_t__ pSiExportFlag; scalar_t__ dwSiExportFlagLen; scalar_t__ pSiPrivateKey; scalar_t__ dwSiPrivateKeyLen; int dwSiPublicKeyLen; int pSiPublicKey; int dwHashLen; int pHash; int pName; int dwNameLen; int dwVersion; } ;
typedef TYPE_1__* PKULL_M_KEY_CAPI_BLOB ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(DWORD VAR_0, PKULL_M_KEY_CAPI_BLOB VAR_1)
{
 FUNC_0(L"%*s" L"**KEY (capi)**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwVersion          : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwVersion, VAR_1->dwVersion);
  FUNC_0(L"%*s" L"  dwUniqueNameLen    : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwNameLen, VAR_1->dwNameLen);
  FUNC_0(L"%*s" L"  dwSiPublicKeyLen   : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwSiPublicKeyLen, VAR_1->dwSiPublicKeyLen);
  FUNC_0(L"%*s" L"  dwSiPrivateKeyLen  : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwSiPrivateKeyLen, VAR_1->dwSiPrivateKeyLen);
  FUNC_0(L"%*s" L"  dwExPublicKeyLen   : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwExPublicKeyLen, VAR_1->dwExPublicKeyLen);
  FUNC_0(L"%*s" L"  dwExPrivateKeyLen  : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwExPrivateKeyLen, VAR_1->dwExPrivateKeyLen);
  FUNC_0(L"%*s" L"  dwHashLen          : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwHashLen, VAR_1->dwHashLen);
  FUNC_0(L"%*s" L"  dwSiExportFlagLen  : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwSiExportFlagLen, VAR_1->dwSiExportFlagLen);
  FUNC_0(L"%*s" L"  dwExExportFlagLen  : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwExExportFlagLen, VAR_1->dwExExportFlagLen);


  FUNC_0(L"%*s" L"  pUniqueName        : ", VAR_0 << 1, L""); FUNC_0(L"%S\n", VAR_1->pName);
  FUNC_0(L"%*s" L"  pHash              : ", VAR_0 << 1, L""); FUNC_2(VAR_1->pHash, VAR_1->dwHashLen, 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  pSiPublicKey       : ", VAR_0 << 1, L""); FUNC_2(VAR_1->pSiPublicKey, VAR_1->dwSiPublicKeyLen, 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  pSiPrivateKey      :\n", VAR_0 << 1, L"");
  if(VAR_1->pSiPrivateKey && VAR_1->dwSiPrivateKeyLen)
   FUNC_1(VAR_0 + 1, VAR_1->pSiPrivateKey);
  FUNC_0(L"%*s" L"  pSiExportFlag      :\n", VAR_0 << 1, L"");
  if(VAR_1->pSiExportFlag && VAR_1->dwSiExportFlagLen)
   FUNC_1(VAR_0 + 1, VAR_1->pSiExportFlag);
  FUNC_0(L"%*s" L"  pExPublicKey       : ", VAR_0 << 1, L""); FUNC_2(VAR_1->pExPublicKey, VAR_1->dwExPublicKeyLen, 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  pExPrivateKey      :\n", VAR_0 << 1, L"");
  if(VAR_1->pExPrivateKey && VAR_1->dwExPrivateKeyLen)
   FUNC_1(VAR_0 + 1, VAR_1->pExPrivateKey);
  FUNC_0(L"%*s" L"  pExExportFlag      :\n", VAR_0 << 1, L"");
  if(VAR_1->pExExportFlag && VAR_1->dwExExportFlagLen)
   FUNC_1(VAR_0 + 1, VAR_1->pExExportFlag);

 }
}
