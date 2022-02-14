
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ValueSize; int Value; int Keyword; int Flags; } ;
typedef TYPE_1__* PKULL_M_CRED_ATTRIBUTE ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(DWORD VAR_0, PKULL_M_CRED_ATTRIBUTE VAR_1)
{
 FUNC_0(L"%*s" L"**ATTRIBUTE**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  Flags   : %08x - %u\n", VAR_0 << 1, L"", VAR_1->Flags, VAR_1->Flags);
  FUNC_0(L"%*s" L"  Keyword : %s\n", VAR_0 << 1, L"", VAR_1->Keyword);
  FUNC_0(L"%*s" L"  Value   : ", VAR_0 << 1, L"");
  FUNC_1(VAR_1->Value, VAR_1->ValueSize);
  FUNC_0(L"\n");
 }
}
