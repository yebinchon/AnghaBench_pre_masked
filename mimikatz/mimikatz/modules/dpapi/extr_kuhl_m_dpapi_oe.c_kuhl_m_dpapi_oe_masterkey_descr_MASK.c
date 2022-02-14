
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int keyHash; int guid; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__* PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int ) ;

void FUNC_3(PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY VAR_0)
{
 if(VAR_0)
 {
  FUNC_0(L"GUID:");
  FUNC_1(&VAR_0->data.guid);
  FUNC_0(L";");

  FUNC_0(L"KeyHash:");
  FUNC_2(VAR_0->data.keyHash, sizeof(VAR_0->data.keyHash), 0);
  FUNC_0(L"\n");
 }
}
