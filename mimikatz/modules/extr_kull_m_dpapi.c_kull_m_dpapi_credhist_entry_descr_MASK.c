
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwNextLen; int guid; int dwVersion; } ;
struct TYPE_5__ {int __dwSecretLen; int pSecret; int pSid; int salt; int md4Len; int sha1Len; int algCrypt; int sidLen; int rounds; int algHash; int dwType; TYPE_1__ header; } ;
typedef TYPE_2__* PKULL_M_DPAPI_CREDHIST_ENTRY ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;

void FUNC_5(DWORD VAR_0, PKULL_M_DPAPI_CREDHIST_ENTRY VAR_1)
{
 FUNC_0(L"%*s" L"**CREDHIST ENTRY**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwVersion : %08x - %u\n", VAR_0 << 1, L"", VAR_1->header.dwVersion, VAR_1->header.dwVersion);
  FUNC_0(L"%*s" L"  guid      : ", VAR_0 << 1, L""); FUNC_2(&VAR_1->header.guid); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  dwNextLen : %08x - %u\n", VAR_0 << 1, L"", VAR_1->header.dwNextLen, VAR_1->header.dwNextLen);

  FUNC_0(L"%*s" L"  dwType    : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwType, VAR_1->dwType);
  FUNC_0(L"%*s" L"  algHash   : %08x - %u (%s)\n", VAR_0 << 1, L"", VAR_1->algHash, VAR_1->algHash, FUNC_1(VAR_1->algHash));
  FUNC_0(L"%*s" L"  rounds    : %08x - %u\n", VAR_0 << 1, L"", VAR_1->rounds, VAR_1->rounds);
  FUNC_0(L"%*s" L"  sidLen    : %08x - %u\n", VAR_0 << 1, L"", VAR_1->sidLen, VAR_1->sidLen);
  FUNC_0(L"%*s" L"  algCrypt  : %08x - %u (%s)\n", VAR_0 << 1, L"", VAR_1->algCrypt, VAR_1->algCrypt, FUNC_1(VAR_1->algCrypt));
  FUNC_0(L"%*s" L"  sha1Len   : %08x - %u\n", VAR_0 << 1, L"", VAR_1->sha1Len, VAR_1->sha1Len);
  FUNC_0(L"%*s" L"  md4Len    : %08x - %u\n", VAR_0 << 1, L"", VAR_1->md4Len, VAR_1->md4Len);

  FUNC_0(L"%*s" L"  Salt      : ", VAR_0 << 1, L""); FUNC_4(VAR_1->salt, sizeof(VAR_1->salt), 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  Sid       : ", VAR_0 << 1, L""); FUNC_3(VAR_1->pSid); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  pSecret   : ", VAR_0 << 1, L""); FUNC_4(VAR_1->pSecret, VAR_1->__dwSecretLen, 0); FUNC_0(L"\n\n");
 }
}
