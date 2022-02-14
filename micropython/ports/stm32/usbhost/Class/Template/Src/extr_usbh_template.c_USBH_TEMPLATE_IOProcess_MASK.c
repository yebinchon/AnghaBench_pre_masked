
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_5__ {int is_connected; } ;
struct TYPE_6__ {scalar_t__ gState; TYPE_1__ device; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

USBH_StatusTypeDef FUNC_1 (USBH_HandleTypeDef *VAR_2)
{
  if (VAR_2->device.is_connected == 1)
  {
    if(VAR_2->gState == VAR_0)
    {
      FUNC_0(VAR_2);
    }
  }

  return VAR_1;
}
