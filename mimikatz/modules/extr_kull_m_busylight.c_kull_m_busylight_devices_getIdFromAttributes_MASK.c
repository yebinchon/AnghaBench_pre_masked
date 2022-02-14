
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Vid; scalar_t__ Pid; } ;
struct TYPE_7__ {scalar_t__ VendorID; scalar_t__ ProductID; } ;
typedef TYPE_1__* PHIDD_ATTRIBUTES ;
typedef TYPE_2__* PCBUSYLIGHT_DEVICE_ID ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;

PCBUSYLIGHT_DEVICE_ID FUNC_1(PHIDD_ATTRIBUTES VAR_1)
{
 DWORD VAR_2;
 if(VAR_1)
  for(VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
   if((VAR_0[VAR_2].Vid == VAR_1->VendorID) && (VAR_0[VAR_2].Pid == VAR_1->ProductID))
    return &VAR_0[VAR_2];
 return ((void*)0);
}
