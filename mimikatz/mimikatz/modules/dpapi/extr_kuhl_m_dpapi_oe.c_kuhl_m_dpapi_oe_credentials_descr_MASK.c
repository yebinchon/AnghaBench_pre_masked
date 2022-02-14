
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Flink; } ;
struct TYPE_5__ {scalar_t__ Flink; } ;
struct TYPE_6__ {TYPE_1__ navigator; } ;
typedef TYPE_2__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1()
{
 PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_1;
 for(VAR_1 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_0.Flink; VAR_1 != (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) &VAR_0; VAR_1 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_1->navigator.Flink)
  FUNC_0(VAR_1);
}
