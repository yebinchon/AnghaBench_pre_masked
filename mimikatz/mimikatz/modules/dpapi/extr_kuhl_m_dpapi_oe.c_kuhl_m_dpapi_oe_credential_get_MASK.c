
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ Flink; } ;
struct TYPE_7__ {int flags; int guid; int sid; } ;
struct TYPE_6__ {scalar_t__ Flink; } ;
struct TYPE_8__ {TYPE_2__ data; TYPE_1__ navigator; } ;
typedef TYPE_3__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ LPCGUID ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 TYPE_5__ VAR_1 ;

PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY FUNC_2(LPCWSTR VAR_2, LPCGUID VAR_3)
{
 PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_4;
 BOOL VAR_5, VAR_6;
 for(VAR_4 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_1.Flink; VAR_4 != (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) &VAR_1; VAR_4 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_4->navigator.Flink)
 {
  VAR_6 = VAR_2 && (FUNC_1(VAR_2, VAR_4->data.sid) == 0);
  VAR_5 = VAR_3 && (VAR_4->data.flags & VAR_0) && FUNC_0(VAR_3, &VAR_4->data.guid);

  if(VAR_2 && VAR_3)
  {
   if(VAR_6 && VAR_5)
    return VAR_4;
  }
  else if (VAR_2)
  {
   if(VAR_6 && !(VAR_4->data.flags & VAR_0))
    return VAR_4;
  }
  else if(VAR_3)
  {
   if(VAR_5)
    return VAR_4;
  }
 }
 return ((void*)0);
}
