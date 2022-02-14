
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
typedef size_t int8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_15__ {scalar_t__ wTotalLength; size_t bNumInterfaces; TYPE_2__* Itf_Desc; } ;
struct TYPE_16__ {TYPE_3__ CfgDesc; scalar_t__ CfgDesc_Raw; } ;
struct TYPE_17__ {TYPE_4__ device; TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_18__ {int bDescriptorType; } ;
typedef TYPE_6__ USBH_DescHeader_t ;
struct TYPE_12__ {scalar_t__ ASNum; scalar_t__ OutputTerminalNum; scalar_t__ InputTerminalNum; scalar_t__ FeatureUnitNum; } ;
struct TYPE_19__ {TYPE_11__ class_desc; } ;
struct TYPE_14__ {int bInterfaceSubClass; } ;
struct TYPE_13__ {TYPE_7__* pData; } ;
typedef TYPE_7__ AUDIO_HandleTypeDef ;


 int FUNC_0 (TYPE_11__*,int ,size_t*) ;
 size_t FUNC_1 (TYPE_5__*,size_t,size_t) ;
 TYPE_6__* FUNC_2 (void*,scalar_t__*) ;
 int VAR_0 ;


 scalar_t__ VAR_1 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_3(USBH_HandleTypeDef *VAR_2)
{
  USBH_DescHeader_t *VAR_3 ;
  uint16_t VAR_4;
  int8_t VAR_5 = 0;
  int8_t VAR_6 = 0;
  int8_t VAR_7;
  AUDIO_HandleTypeDef *VAR_8;

  VAR_8 = VAR_2->pActiveClass->pData;
  VAR_3 = (USBH_DescHeader_t *)(VAR_2->device.CfgDesc_Raw);
  VAR_4 = VAR_1;

  VAR_8->class_desc.FeatureUnitNum = 0;
  VAR_8->class_desc.InputTerminalNum = 0;
  VAR_8->class_desc.OutputTerminalNum = 0;
  VAR_8->class_desc.ASNum = 0;

  while(VAR_4 < VAR_2->device.CfgDesc.wTotalLength)
  {
    VAR_3 = FUNC_2((void *)VAR_3, &VAR_4);

    switch (VAR_3->bDescriptorType)
    {

    case 128:
      VAR_6 = *((uint8_t *)VAR_3 + 2);
      VAR_7 = *((uint8_t *)VAR_3 + 3);
      VAR_5 = FUNC_1 (VAR_2, VAR_6, VAR_7);
      break;

    case 129:
      if(VAR_6 <= VAR_2->device.CfgDesc.bNumInterfaces)
      {

        FUNC_0(&VAR_8->class_desc,
                           VAR_2->device.CfgDesc.Itf_Desc[VAR_5].bInterfaceSubClass,
                           (uint8_t *)VAR_3);
      }
      break;

    default:
      break;
    }
  }
  return VAR_0;
}
