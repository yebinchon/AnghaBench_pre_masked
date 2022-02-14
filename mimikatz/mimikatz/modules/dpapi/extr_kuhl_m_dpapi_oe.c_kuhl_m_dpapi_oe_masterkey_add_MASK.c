
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int digest ;
struct TYPE_8__ {void* Blink; } ;
struct TYPE_6__ {TYPE_4__* Flink; void* Blink; } ;
struct TYPE_5__ {int * keyHash; int guid; } ;
struct TYPE_7__ {TYPE_2__ navigator; TYPE_1__ data; } ;
typedef void* PLIST_ENTRY ;
typedef TYPE_3__* PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY ;
typedef int * LPCVOID ;
typedef int * LPCGUID ;
typedef int KUHL_M_DPAPI_OE_MASTERKEY_ENTRY ;
typedef int GUID ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int,int *,int) ;

BOOL FUNC_5(LPCGUID VAR_6, LPCVOID VAR_7, DWORD VAR_8)
{
 BOOL VAR_9 = VAR_1;
 PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY VAR_10;
 BYTE VAR_11[VAR_3];

 if(VAR_6 && VAR_7 && VAR_8)
 {
  if(!FUNC_3(VAR_6))
  {
   if(VAR_8 != VAR_3)
    FUNC_4(VAR_0, VAR_7, VAR_8, VAR_11, sizeof(VAR_11));

   if((VAR_10 = (PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY) FUNC_0(VAR_2, sizeof(KUHL_M_DPAPI_OE_MASTERKEY_ENTRY))))
   {
    FUNC_2(&VAR_10->data.guid, VAR_6, sizeof(GUID));
    FUNC_2(VAR_10->data.keyHash, (VAR_8 == VAR_3) ? VAR_7 : VAR_11, VAR_3);
    VAR_10->navigator.Blink = VAR_5.Blink;
    VAR_10->navigator.Flink = &VAR_5;
    ((PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY) VAR_5.Blink)->navigator.Flink = (PLIST_ENTRY) VAR_10;
    VAR_5.Blink= (PLIST_ENTRY) VAR_10;
    VAR_9 = VAR_4;
   }
  }
 }
 else FUNC_1(L"No GUID or Key Hash?");
 return VAR_9;
}
