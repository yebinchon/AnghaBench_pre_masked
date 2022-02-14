
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_9__ {TYPE_2__* Itf_Desc; } ;
struct TYPE_10__ {TYPE_3__ CfgDesc; } ;
struct TYPE_11__ {TYPE_4__ device; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_8__ {scalar_t__ bInterfaceClass; TYPE_1__* Ep_Desc; } ;
struct TYPE_7__ {int bEndpointAddress; scalar_t__ wMaxPacketSize; int bmAttributes; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static uint8_t FUNC_0(USBH_HandleTypeDef *VAR_4)
{
  uint8_t VAR_5, VAR_6;

  for (VAR_5 = 0; VAR_5 < VAR_2 ; VAR_5 ++ )
  {
    if(VAR_4->device.CfgDesc.Itf_Desc[VAR_5].bInterfaceClass == VAR_3)
    {
      for (VAR_6 = 0; VAR_6 < VAR_1 ; VAR_6 ++ )
      {

        if((VAR_4->device.CfgDesc.Itf_Desc[VAR_5].Ep_Desc[VAR_6].bEndpointAddress & 0x80)&&
           (VAR_4->device.CfgDesc.Itf_Desc[VAR_5].Ep_Desc[VAR_6].wMaxPacketSize > 0)&&
             ((VAR_4->device.CfgDesc.Itf_Desc[VAR_5].Ep_Desc[VAR_6].bmAttributes & VAR_0) == VAR_0))
        {
          return VAR_6;
        }
      }
    }
  }

  return 0xFF;
}
