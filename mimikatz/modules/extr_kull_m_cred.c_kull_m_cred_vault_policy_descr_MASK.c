
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ key; int unk2; int unk1; int unk0; int Name; int vault; int version; } ;
typedef TYPE_1__* PKULL_M_CRED_VAULT_POLICY ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(DWORD VAR_0, PKULL_M_CRED_VAULT_POLICY VAR_1)
{
 FUNC_0(L"%*s" L"**VAULT POLICY**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  version : %08x - %u\n", VAR_0 << 1, L"", VAR_1->version, VAR_1->version);
  FUNC_0(L"%*s" L"  vault   : ", VAR_0 << 1, L""); FUNC_2(&VAR_1->vault); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  Name    : %s\n", VAR_0 << 1, L"", VAR_1->Name);
  FUNC_0(L"%*s" L"  unk0/1/2: %08x/%08x/%08x\n", VAR_0 << 1, L"", VAR_1->unk0, VAR_1->unk1, VAR_1->unk2);
  if(VAR_1->key)
   FUNC_1(VAR_0 + 1, VAR_1->key);
  FUNC_0(L"\n");
 }
}
