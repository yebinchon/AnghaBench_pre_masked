
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {size_t cNumObjects; TYPE_4__* pObjects; } ;
struct TYPE_10__ {size_t cbAttributes; TYPE_3__* pAttributes; int szObjectDN; } ;
struct TYPE_8__ {scalar_t__ valCount; } ;
struct TYPE_9__ {int * pszValue; TYPE_2__ AttrVal; TYPE_1__* pAttribute; } ;
struct TYPE_7__ {int szAttributeName; } ;
typedef TYPE_5__* PDCSHADOW_PUSH_REQUEST ;
typedef int NTSTATUS ;
typedef size_t DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

NTSTATUS FUNC_1(PDCSHADOW_PUSH_REQUEST VAR_1)
{
 DWORD VAR_2, VAR_3, VAR_4;
 for(VAR_2 = 0; VAR_2 < VAR_1->cNumObjects; VAR_2++)
 {
  FUNC_0(L"[%u] Object DN: %s\n", VAR_2, VAR_1->pObjects[VAR_2].szObjectDN);
  for(VAR_3 = 0; VAR_3 < VAR_1->pObjects[VAR_2].cbAttributes; VAR_3++)
  {
   FUNC_0(L"  [%u] Attribute: %s\n", VAR_3, VAR_1->pObjects[VAR_2].pAttributes[VAR_3].pAttribute->szAttributeName);
   if(VAR_1->pObjects[VAR_2].pAttributes[VAR_3].AttrVal.valCount == 0)
    FUNC_0(L"  Attribute is empty (existing value will be removed)\n");
   else for(VAR_4 = 0; VAR_4 < VAR_1->pObjects[VAR_2].pAttributes[VAR_3].AttrVal.valCount; VAR_4++)
     FUNC_0(L"    [%u] %s\n", VAR_4, VAR_1->pObjects[VAR_2].pAttributes[VAR_3].pszValue[VAR_4]);
  }
 }
 return VAR_0;
}
