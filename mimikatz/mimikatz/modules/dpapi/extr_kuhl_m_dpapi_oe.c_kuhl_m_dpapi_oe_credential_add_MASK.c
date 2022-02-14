
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {void* Blink; } ;
struct TYPE_8__ {TYPE_6__* Flink; void* Blink; } ;
struct TYPE_7__ {int sid; } ;
struct TYPE_9__ {TYPE_2__ navigator; TYPE_1__ data; } ;
typedef void* PLIST_ENTRY ;
typedef TYPE_3__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;
typedef scalar_t__ LPCWSTR ;
typedef int LPCVOID ;
typedef int LPCGUID ;
typedef int KUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_6__ VAR_2 ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,int ,scalar_t__) ;
 TYPE_3__* FUNC_4 (scalar_t__,int ) ;

BOOL FUNC_5(LPCWSTR VAR_3, LPCGUID VAR_4, LPCVOID VAR_5, LPCVOID VAR_6, LPCVOID VAR_7, LPCWSTR VAR_8)
{
 BOOL VAR_9 = VAR_0;
 PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_10;

 if(VAR_3)
 {
  if(!(VAR_10 = FUNC_4(VAR_3, VAR_4)))
  {
   if((VAR_10 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) FUNC_0(VAR_1, sizeof(KUHL_M_DPAPI_OE_CREDENTIAL_ENTRY))))
   {
    VAR_10->data.sid = FUNC_2(VAR_3);
    VAR_10->navigator.Blink = VAR_2.Blink;
    VAR_10->navigator.Flink = &VAR_2;
    ((PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_2.Blink)->navigator.Flink = (PLIST_ENTRY) VAR_10;
    VAR_2.Blink= (PLIST_ENTRY) VAR_10;
   }
  }
  if(VAR_10)
   VAR_9 = FUNC_3(VAR_10, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 }
 else FUNC_1(L"No SID?");
 return VAR_9;
}
