
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* Itf_Desc; } ;
struct TYPE_7__ {size_t current_interface; TYPE_3__ CfgDesc; } ;
struct TYPE_9__ {scalar_t__ gState; TYPE_2__ device; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_6__ {scalar_t__ bInterfaceProtocol; } ;
typedef int HID_TypeTypeDef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

HID_TypeTypeDef FUNC_0(USBH_HandleTypeDef *VAR_6)
{
  HID_TypeTypeDef VAR_7 = VAR_4;

  if(VAR_6->gState == VAR_5)
  {

    if(VAR_6->device.CfgDesc.Itf_Desc[VAR_6->device.current_interface].bInterfaceProtocol == VAR_1)

    {
      VAR_7 = VAR_0;
    }
    else if(VAR_6->device.CfgDesc.Itf_Desc[VAR_6->device.current_interface].bInterfaceProtocol == VAR_3)

    {
      VAR_7= VAR_2;
    }
  }
  return VAR_7;
}
