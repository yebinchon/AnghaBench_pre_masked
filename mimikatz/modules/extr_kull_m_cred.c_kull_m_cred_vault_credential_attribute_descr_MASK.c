
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ szData; scalar_t__ data; scalar_t__ szIV; scalar_t__ IV; int unk2; int unk1; int unk0; int id; } ;
typedef TYPE_1__* PKULL_M_CRED_VAULT_CREDENTIAL_ATTRIBUTE ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;

void FUNC_2(DWORD VAR_0, PKULL_M_CRED_VAULT_CREDENTIAL_ATTRIBUTE VAR_1)
{
 FUNC_0(L"%*s" L"**VAULT CREDENTIAL ATTRIBUTE**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  id      : %08x - %u\n", VAR_0 << 1, L"", VAR_1->id, VAR_1->id);
  FUNC_0(L"%*s" L"  unk0/1/2: %08x/%08x/%08x\n", VAR_0 << 1, L"", VAR_1->unk0, VAR_1->unk1, VAR_1->unk2);
  if(VAR_1->szIV && VAR_1->IV)
  {
   FUNC_0(L"%*s" L"  IV      : ", VAR_0 << 1, L"");
   FUNC_1(VAR_1->IV, VAR_1->szIV, 0);
   FUNC_0(L"\n");
  }
  if(VAR_1->szData && VAR_1->data)
  {
   FUNC_0(L"%*s" L"  Data    : ", VAR_0 << 1, L"");
   FUNC_1(VAR_1->data, VAR_1->szData, 0);
   FUNC_0(L"\n");
  }
 }
}
