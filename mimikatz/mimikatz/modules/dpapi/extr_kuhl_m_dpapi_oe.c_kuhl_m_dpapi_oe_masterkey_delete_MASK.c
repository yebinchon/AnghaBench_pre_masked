
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Blink; scalar_t__ Flink; } ;
struct TYPE_10__ {TYPE_1__ navigator; } ;
struct TYPE_8__ {scalar_t__ Blink; scalar_t__ Flink; } ;
struct TYPE_9__ {TYPE_2__ navigator; } ;
typedef TYPE_3__* PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY ;
typedef TYPE_4__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY VAR_0)
{
 if(VAR_0)
 {
  ((PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_0->navigator.Blink)->navigator.Flink = VAR_0->navigator.Flink;
  ((PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_0->navigator.Flink)->navigator.Blink = VAR_0->navigator.Blink;
  FUNC_0(VAR_0);
 }
}
