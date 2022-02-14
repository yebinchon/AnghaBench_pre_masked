
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_7__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_9__ {int lctrl; int lshift; int lalt; int lgui; int rctrl; int rshift; int ralt; int rgui; int* keys; } ;
struct TYPE_8__ {scalar_t__ length; int fifo; } ;
struct TYPE_6__ {TYPE_3__* pData; } ;
typedef int HID_Report_ItemTypedef ;
typedef TYPE_3__ HID_HandleTypeDef ;


 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_4__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_2(USBH_HandleTypeDef *VAR_13)
{
  uint8_t VAR_14;

  HID_HandleTypeDef *VAR_15 = VAR_13->pActiveClass->pData;
  if(VAR_15->length == 0)
  {
    return VAR_0;
  }

  if(FUNC_1(&VAR_15->fifo, &VAR_12, VAR_15->length) == VAR_15->length)
  {

    VAR_11.lctrl=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_4, 0);
    VAR_11.lshift=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_6, 0);
    VAR_11.lalt=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_3, 0);
    VAR_11.lgui=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_5, 0);
    VAR_11.rctrl=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_8, 0);
    VAR_11.rshift=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_10, 0);
    VAR_11.ralt=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_7, 0);
    VAR_11.rgui=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_9, 0);

    for(VAR_14=0; VAR_14 < sizeof(VAR_11.keys); VAR_14++)
    {
      VAR_11.keys[VAR_14]=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_2, VAR_14);
    }

    return VAR_1;
  }
  return VAR_0;
}
