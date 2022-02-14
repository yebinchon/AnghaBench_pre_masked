
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ Flink; } ;
struct TYPE_7__ {int guid; } ;
struct TYPE_6__ {scalar_t__ Flink; } ;
struct TYPE_8__ {TYPE_2__ data; TYPE_1__ navigator; } ;
typedef TYPE_3__* PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY ;
typedef int LPCGUID ;


 scalar_t__ FUNC_0 (int ,int *) ;
 TYPE_5__ VAR_0 ;

PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY FUNC_1(LPCGUID VAR_1)
{
 PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY VAR_2;
 for(VAR_2 = (PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY) VAR_0.Flink; VAR_2 != (PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY) &VAR_0; VAR_2 = (PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY) VAR_2->navigator.Flink)
  if(FUNC_0(VAR_1, &VAR_2->data.guid))
   return VAR_2;
 return ((void*)0);
}
