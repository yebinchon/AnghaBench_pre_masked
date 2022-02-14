
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* Blink; } ;
struct TYPE_6__ {TYPE_4__* Flink; void* Blink; } ;
struct TYPE_5__ {int keyLen; int * key; int isNewKey; int guid; } ;
struct TYPE_7__ {TYPE_2__ navigator; TYPE_1__ data; } ;
typedef void* PLIST_ENTRY ;
typedef TYPE_3__* PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY ;
typedef int LPCVOID ;
typedef int LPCGUID ;
typedef int KUHL_M_DPAPI_OE_DOMAINKEY_ENTRY ;
typedef int GUID ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_3 (int ) ;

BOOL FUNC_4(LPCGUID VAR_4, LPCVOID VAR_5, DWORD VAR_6, BOOL VAR_7)
{
 BOOL VAR_8 = VAR_0;
 PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY VAR_9;
 if(VAR_4 && VAR_5 && VAR_6)
 {
  if(!FUNC_3(VAR_4))
  {
   if((VAR_9 = (PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY) FUNC_0(VAR_1, sizeof(KUHL_M_DPAPI_OE_DOMAINKEY_ENTRY))))
   {
    FUNC_2(&VAR_9->data.guid, VAR_4, sizeof(GUID));
    VAR_9->data.isNewKey = VAR_7;
    if((VAR_9->data.key = (BYTE *) FUNC_0(VAR_1, VAR_6)))
    {
     FUNC_2(VAR_9->data.key, VAR_5, VAR_6);
     VAR_9->data.keyLen = VAR_6;
     VAR_8 = VAR_2;
    }
    VAR_9->navigator.Blink = VAR_3.Blink;
    VAR_9->navigator.Flink = &VAR_3;
    ((PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY) VAR_3.Blink)->navigator.Flink = (PLIST_ENTRY) VAR_9;
    VAR_3.Blink= (PLIST_ENTRY) VAR_9;
   }
  }
 }
 else FUNC_1(L"No GUID or Key?");
 return VAR_8;
}
