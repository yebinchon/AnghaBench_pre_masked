
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int dwNameLen; int dwPropertyLen; int pProperty; int pName; int unk; int type; int dwStructLen; } ;
typedef TYPE_1__* PKULL_M_KEY_CNG_PROPERTY ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(DWORD VAR_0, PKULL_M_KEY_CNG_PROPERTY VAR_1)
{
 FUNC_0(L"%*s" L"**KEY CNG PROPERTY**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwStructLen     : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwStructLen, VAR_1->dwStructLen);
  FUNC_0(L"%*s" L"  type            : %08x - %u\n", VAR_0 << 1, L"", VAR_1->type, VAR_1->type);
  FUNC_0(L"%*s" L"  unk             : %08x - %u\n", VAR_0 << 1, L"", VAR_1->unk, VAR_1->unk);
  FUNC_0(L"%*s" L"  dwNameLen       : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwNameLen, VAR_1->dwNameLen);
  FUNC_0(L"%*s" L"  dwPropertyLen   : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwPropertyLen, VAR_1->dwPropertyLen);
  FUNC_0(L"%*s" L"  pName           : ", VAR_0 << 1, L""); FUNC_0(L"%.*s\n", VAR_1->dwNameLen / sizeof(wchar_t), VAR_1->pName);
  FUNC_0(L"%*s" L"  pProperty       : ", VAR_0 << 1, L""); FUNC_1(VAR_1->pProperty, VAR_1->dwPropertyLen, 0); FUNC_0(L"\n\n");
 }
}
