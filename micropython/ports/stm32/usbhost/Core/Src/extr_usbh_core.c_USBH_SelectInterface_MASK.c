
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_7__ {size_t bNumInterfaces; TYPE_1__* Itf_Desc; } ;
struct TYPE_8__ {size_t current_interface; TYPE_2__ CfgDesc; } ;
struct TYPE_9__ {TYPE_3__ device; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_6__ {size_t bInterfaceClass; size_t bInterfaceSubClass; size_t bInterfaceProtocol; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,size_t) ;

USBH_StatusTypeDef FUNC_2(USBH_HandleTypeDef *VAR_2, uint8_t VAR_3)
{
  USBH_StatusTypeDef VAR_4 = VAR_1;

  if(VAR_3 < VAR_2->device.CfgDesc.bNumInterfaces)
  {
    VAR_2->device.current_interface = VAR_3;
    FUNC_1 ("Switching to Interface (#%d)", VAR_3);
    FUNC_1 ("Class    : %xh", VAR_2->device.CfgDesc.Itf_Desc[VAR_3].bInterfaceClass );
    FUNC_1 ("SubClass : %xh", VAR_2->device.CfgDesc.Itf_Desc[VAR_3].bInterfaceSubClass );
    FUNC_1 ("Protocol : %xh", VAR_2->device.CfgDesc.Itf_Desc[VAR_3].bInterfaceProtocol );
  }
  else
  {
    FUNC_0 ("Cannot Select This Interface.");
    VAR_4 = VAR_0;
  }
  return VAR_4;
}
