
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t int8_t ;
struct TYPE_7__ {scalar_t__ bInterfaceNumber; scalar_t__ bAlternateSetting; } ;
typedef TYPE_2__ USBH_InterfaceDescTypeDef ;
struct TYPE_9__ {TYPE_2__* Itf_Desc; } ;
struct TYPE_6__ {TYPE_4__ CfgDesc; } ;
struct TYPE_8__ {TYPE_1__ device; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
typedef TYPE_4__ USBH_CfgDescTypeDef ;


 size_t VAR_0 ;

uint8_t FUNC_0(USBH_HandleTypeDef *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
  USBH_InterfaceDescTypeDef *VAR_4 ;
  USBH_CfgDescTypeDef *VAR_5 ;
  int8_t VAR_6 = 0;

  VAR_4 = (USBH_InterfaceDescTypeDef *)0;
  VAR_5 = &VAR_1->device.CfgDesc;

  while (VAR_6 < VAR_0)
  {
    VAR_4 = &VAR_5->Itf_Desc[VAR_6];
    if((VAR_4->bInterfaceNumber == VAR_2) && (VAR_4->bAlternateSetting == VAR_3))
    {
      return VAR_6;
    }
    VAR_6++;
  }
  return 0xFF;
}
