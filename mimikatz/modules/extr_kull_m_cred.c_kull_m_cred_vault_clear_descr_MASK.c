
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; TYPE_1__** entries; int unk; int version; } ;
struct TYPE_4__ {int id; int size; int data; } ;
typedef TYPE_2__* PKULL_M_CRED_VAULT_CLEAR ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(DWORD VAR_0, PKULL_M_CRED_VAULT_CLEAR VAR_1)
{
 DWORD VAR_2;
 FUNC_0(L"%*s" L"**VAULT CREDENTIAL CLEAR ATTRIBUTES**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  version: %08x - %u\n", VAR_0 << 1, L"", VAR_1->version, VAR_1->version);
  FUNC_0(L"%*s" L"  count  : %08x - %u\n", VAR_0 << 1, L"", VAR_1->count, VAR_1->count);
  FUNC_0(L"%*s" L"  unk    : %08x - %u\n", VAR_0 << 1, L"", VAR_1->unk, VAR_1->unk);
  if(VAR_1->entries)
  {
   FUNC_0(L"\n");
   for(VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++)
   {
    FUNC_0(L"%*s" L"  * ", VAR_0 << 1, L"");
    switch(VAR_1->entries[VAR_2]->id)
    {
    case 1:
     FUNC_0(L"ressource     : ");
     break;
    case 2:
     FUNC_0(L"identity      : ");
     break;
    case 3:
     FUNC_0(L"authenticator : ");
     break;
    default:
     FUNC_0(L"property %3u  : ", VAR_1->entries[VAR_2]->id);
     break;
    }
    FUNC_1(VAR_1->entries[VAR_2]->data, VAR_1->entries[VAR_2]->size);
    FUNC_0(L"\n");
   }
  }
 }
}
