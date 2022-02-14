
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dwAttributesMapSize; int __cbElements; int * attributes; TYPE_1__* attributesMap; int FriendlyName; int unk2; int unk1; int LastWritten; int unk0; int SchemaId; } ;
struct TYPE_4__ {int unk; int offset; int id; } ;
typedef TYPE_2__* PKULL_M_CRED_VAULT_CREDENTIAL ;
typedef int KULL_M_CRED_VAULT_CREDENTIAL_ATTRIBUTE_MAP ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(DWORD VAR_0, PKULL_M_CRED_VAULT_CREDENTIAL VAR_1)
{
 DWORD VAR_2;
 FUNC_0(L"%*s" L"**VAULT CREDENTIAL**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  SchemaId            : ", VAR_0 << 1, L""); FUNC_3(&VAR_1->SchemaId); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  unk0                : %08x - %u\n", VAR_0 << 1, L"", VAR_1->unk0, VAR_1->unk0);
  FUNC_0(L"%*s" L"  LastWritten         : ", VAR_0 << 1, L""); FUNC_2(&VAR_1->LastWritten); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  unk1                : %08x - %u\n", VAR_0 << 1, L"", VAR_1->unk1, VAR_1->unk1);
  FUNC_0(L"%*s" L"  unk2                : %08x - %u\n", VAR_0 << 1, L"", VAR_1->unk2, VAR_1->unk2);
  FUNC_0(L"%*s" L"  FriendlyName        : %s\n", VAR_0 << 1, L"", VAR_1->FriendlyName);
  FUNC_0(L"%*s" L"  dwAttributesMapSize : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwAttributesMapSize, VAR_1->dwAttributesMapSize);
  for(VAR_2 = 0; VAR_2 < (VAR_1->dwAttributesMapSize / sizeof(KULL_M_CRED_VAULT_CREDENTIAL_ATTRIBUTE_MAP)); VAR_2++)
   FUNC_0(L"%*s" L"  * Attribute %3u @ offset %08x - %u  (unk %08x - %u)\n", VAR_0 << 1, L"", VAR_1->attributesMap[VAR_2].id, VAR_1->attributesMap[VAR_2].offset, VAR_1->attributesMap[VAR_2].offset, VAR_1->attributesMap[VAR_2].unk, VAR_1->attributesMap[VAR_2].unk);
  for(VAR_2 = 0; VAR_2 < VAR_1->__cbElements; VAR_2++)
   FUNC_1(VAR_0 + 1, VAR_1->attributes[VAR_2]);
  FUNC_0(L"\n");
 }
}
