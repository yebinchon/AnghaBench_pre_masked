
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwNextLen; int guid; int dwVersion; } ;
struct TYPE_5__ {int __dwCount; int * entries; TYPE_1__ current; } ;
typedef TYPE_2__* PKULL_M_DPAPI_CREDHIST ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(DWORD VAR_0, PKULL_M_DPAPI_CREDHIST VAR_1)
{
 DWORD VAR_2;
 FUNC_0(L"%*s" L"**CREDHIST**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwVersion : %08x - %u\n", VAR_0 << 1, L"", VAR_1->current.dwVersion, VAR_1->current.dwVersion);
  FUNC_0(L"%*s" L"  guid      : ", VAR_0 << 1, L""); FUNC_2(&VAR_1->current.guid); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  dwNextLen : %08x - %u\n", VAR_0 << 1, L"", VAR_1->current.dwNextLen, VAR_1->current.dwNextLen);
  for(VAR_2 = 0; VAR_2 < VAR_1->__dwCount; VAR_2++)
   FUNC_1(VAR_0 + 1, VAR_1->entries[VAR_2]);
  FUNC_0(L"\n");
 }
}
