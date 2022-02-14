
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sid; } ;
struct TYPE_7__ {scalar_t__ Blink; scalar_t__ Flink; } ;
struct TYPE_8__ {TYPE_1__ data; TYPE_2__ navigator; } ;
typedef TYPE_3__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_0)
{
 PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_1 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_0->navigator.Blink, VAR_2 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_0->navigator.Flink;

 if(VAR_0)
 {
  ((PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_0->navigator.Blink)->navigator.Flink = VAR_0->navigator.Flink;
  ((PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_0->navigator.Flink)->navigator.Blink = VAR_0->navigator.Blink;
  if(VAR_0->data.sid)
   FUNC_1(VAR_0->data.sid);
  FUNC_0(VAR_0);
 }
}
