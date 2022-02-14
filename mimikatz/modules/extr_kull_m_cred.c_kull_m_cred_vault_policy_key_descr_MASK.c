
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int KeyBlob; int unk1; int unk0; } ;
typedef TYPE_1__* PKULL_M_CRED_VAULT_POLICY_KEY ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(DWORD VAR_0, PKULL_M_CRED_VAULT_POLICY_KEY VAR_1)
{
 FUNC_0(L"%*s" L"**VAULT POLICY KEY**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  unk0  : ", VAR_0 << 1, L""); FUNC_2(&VAR_1->unk0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  unk1  : ", VAR_0 << 1, L""); FUNC_2(&VAR_1->unk1); FUNC_0(L"\n");
  FUNC_1(VAR_0 + 1, VAR_1->KeyBlob);
  FUNC_0(L"\n");
 }
}
