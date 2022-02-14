
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t int8_t ;
struct TYPE_7__ {int bInterfaceClass; int bInterfaceSubClass; int bInterfaceProtocol; } ;
typedef TYPE_2__ USBH_InterfaceDescTypeDef ;
struct TYPE_9__ {TYPE_2__* Itf_Desc; } ;
struct TYPE_6__ {TYPE_4__ CfgDesc; } ;
struct TYPE_8__ {TYPE_1__ device; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
typedef TYPE_4__ USBH_CfgDescTypeDef ;


 size_t VAR_0 ;

uint8_t FUNC_0(USBH_HandleTypeDef *VAR_1, uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{
  USBH_InterfaceDescTypeDef *VAR_5 ;
  USBH_CfgDescTypeDef *VAR_6 ;
  int8_t VAR_7 = 0;

  VAR_5 = (USBH_InterfaceDescTypeDef *)0;
  VAR_6 = &VAR_1->device.CfgDesc;

  if((VAR_5->bInterfaceClass == 0xFF) &&(VAR_5->bInterfaceSubClass == 0xFF) && (VAR_5->bInterfaceProtocol == 0xFF))
  {
    return 0xFF;
  }

  while (VAR_7 < VAR_0)
  {
    VAR_5 = &VAR_6->Itf_Desc[VAR_7];
    if(((VAR_5->bInterfaceClass == VAR_2) || (VAR_2 == 0xFF))&&
       ((VAR_5->bInterfaceSubClass == VAR_3) || (VAR_3 == 0xFF))&&
         ((VAR_5->bInterfaceProtocol == VAR_4) || (VAR_4 == 0xFF)))
    {
      return VAR_7;
    }
    VAR_7++;
  }
  return 0xFF;
}
