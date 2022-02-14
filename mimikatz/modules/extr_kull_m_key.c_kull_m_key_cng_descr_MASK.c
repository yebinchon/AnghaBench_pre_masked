
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int dwNameLen; char* pName; scalar_t__ pPrivateKey; scalar_t__ dwPrivateKeyLen; scalar_t__ pPrivateProperties; scalar_t__ dwPrivatePropertiesLen; int cbPublicProperties; int pPublicProperties; int unkArray; int dwPublicPropertiesLen; int type; int unk; int dwVersion; } ;
typedef TYPE_1__* PKULL_M_KEY_CNG_BLOB ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int,int ) ;

void FUNC_4(DWORD VAR_0, PKULL_M_KEY_CNG_BLOB VAR_1)
{
 FUNC_0(L"%*s" L"**KEY (cng)**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwVersion             : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwVersion, VAR_1->dwVersion);
  FUNC_0(L"%*s" L"  unk                   : %08x - %u\n", VAR_0 << 1, L"", VAR_1->unk, VAR_1->unk);
  FUNC_0(L"%*s" L"  dwNameLen             : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwNameLen, VAR_1->dwNameLen);
  FUNC_0(L"%*s" L"  type                  : %08x - %u\n", VAR_0 << 1, L"", VAR_1->type, VAR_1->type);
  FUNC_0(L"%*s" L"  dwPublicPropertiesLen : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwPublicPropertiesLen, VAR_1->dwPublicPropertiesLen);
  FUNC_0(L"%*s" L"  dwPrivatePropertiesLen: %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwPrivatePropertiesLen, VAR_1->dwPrivatePropertiesLen);
  FUNC_0(L"%*s" L"  dwPrivateKeyLen       : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwPrivateKeyLen, VAR_1->dwPrivateKeyLen);
  FUNC_0(L"%*s" L"  unkArray[16]          : ", VAR_0 << 1, L""); FUNC_3(VAR_1->unkArray, sizeof(VAR_1->unkArray), 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  pName                 : ", VAR_0 << 1, L""); FUNC_0(L"%.*s\n", VAR_1->dwNameLen / sizeof(wchar_t), VAR_1->pName);
  FUNC_0(L"%*s" L"  pPublicProperties     : ", VAR_0 << 1, L""); FUNC_2(VAR_0 + 1, VAR_1->pPublicProperties, VAR_1->cbPublicProperties);
  FUNC_0(L"%*s" L"  pPrivateProperties    :\n", VAR_0 << 1, L"");
  if(VAR_1->pPrivateProperties && VAR_1->dwPrivatePropertiesLen)
   FUNC_1(VAR_0 + 1, VAR_1->pPrivateProperties);
  FUNC_0(L"%*s" L"  pPrivateKey           :\n", VAR_0 << 1, L"");
  if(VAR_1->pPrivateKey && VAR_1->dwPrivateKeyLen)
   FUNC_1(VAR_0 + 1, VAR_1->pPrivateKey);
 }
}
