
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; scalar_t__ DevicePath; int * hDevice; } ;
typedef TYPE_1__* PRDM_DEVICE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(PRDM_DEVICE VAR_0)
{
 PRDM_DEVICE VAR_1;
 while(VAR_0)
 {
  if(VAR_0->hDevice)
  {
   FUNC_0(VAR_0->hDevice);
   VAR_0->hDevice = ((void*)0);
  }
  if(VAR_0->DevicePath)
   FUNC_2(VAR_0->DevicePath);
  VAR_1 = VAR_0->next;
  FUNC_1(VAR_0);
  VAR_0 = VAR_1;
 }
}
