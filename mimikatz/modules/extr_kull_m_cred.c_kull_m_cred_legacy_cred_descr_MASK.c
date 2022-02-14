
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int AttributeCount; int Attributes; int CredentialBlobSize; int CredentialBlob; int UserName; int TargetAlias; int Comment; int TargetName; int unk1; int unk0; int Persist; int unkFlagsOrSize; int LastWritten; int Type; int Flags; int credSize; } ;
typedef TYPE_1__* PKULL_M_CRED_LEGACY_CRED_BLOB ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(DWORD VAR_0, PKULL_M_CRED_LEGACY_CRED_BLOB VAR_1)
{
 FUNC_0(L"%*s" L"**LEGACY CREDENTIAL**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  credSize       : %08x - %u\n\n", VAR_0 << 1, L"", VAR_1->credSize, VAR_1->credSize);
  FUNC_0(L"%*s" L"  Flags          : %08x - %u\n", VAR_0 << 1, L"", VAR_1->Flags, VAR_1->Flags);
  FUNC_0(L"%*s" L"  Type           : %08x - %u - %s\n", VAR_0 << 1, L"", VAR_1->Type, VAR_1->Type, FUNC_2(VAR_1->Type));
  FUNC_0(L"%*s" L"  LastWritten    : ", VAR_0 << 1, L""); FUNC_4(&VAR_1->LastWritten); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  unkFlagsOrSize : %08x - %u\n", VAR_0 << 1, L"", VAR_1->unkFlagsOrSize, VAR_1->unkFlagsOrSize);
  FUNC_0(L"%*s" L"  Persist        : %08x - %u - %s\n", VAR_0 << 1, L"", VAR_1->Persist, VAR_1->Persist, FUNC_1(VAR_1->Persist));
  FUNC_0(L"%*s" L"  AttributeCount : %08x - %u\n", VAR_0 << 1, L"", VAR_1->AttributeCount, VAR_1->AttributeCount);
  FUNC_0(L"%*s" L"  unk0           : %08x - %u\n", VAR_0 << 1, L"", VAR_1->unk0, VAR_1->unk0);
  FUNC_0(L"%*s" L"  unk1           : %08x - %u\n", VAR_0 << 1, L"", VAR_1->unk1, VAR_1->unk1);
  FUNC_0(L"%*s" L"  TargetName     : %s\n", VAR_0 << 1, L"", VAR_1->TargetName);
  FUNC_0(L"%*s" L"  Comment        : %s\n", VAR_0 << 1, L"", VAR_1->Comment);
  FUNC_0(L"%*s" L"  TargetAlias    : %s\n", VAR_0 << 1, L"", VAR_1->TargetAlias);
  FUNC_0(L"%*s" L"  UserName       : %s\n", VAR_0 << 1, L"", VAR_1->UserName);
  FUNC_0(L"%*s" L"  CredentialBlob : ", VAR_0 << 1, L"");
  FUNC_5(VAR_1->CredentialBlob, VAR_1->CredentialBlobSize);
  FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  Attributes     : %u\n", VAR_0 << 1, L"", VAR_1->AttributeCount);
  FUNC_3(VAR_0 + 1, VAR_1->Attributes, VAR_1->AttributeCount);
 }
}
