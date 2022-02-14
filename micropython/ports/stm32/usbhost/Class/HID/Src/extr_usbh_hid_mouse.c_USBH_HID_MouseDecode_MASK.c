
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* int16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_7__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_9__ {void** buttons; void* y; void* x; } ;
struct TYPE_8__ {scalar_t__ length; int fifo; } ;
struct TYPE_6__ {TYPE_3__* pData; } ;
typedef int HID_Report_ItemTypedef ;
typedef TYPE_3__ HID_HandleTypeDef ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_2(USBH_HandleTypeDef *VAR_9)
{
  HID_HandleTypeDef *VAR_10 = VAR_9->pActiveClass->pData;

  if(VAR_10->length == 0)
  {
    return VAR_0;
  }

  if(FUNC_1(&VAR_10->fifo, &VAR_3, VAR_10->length) == VAR_10->length)
  {


    VAR_2.x = (int16_t )FUNC_0((HID_Report_ItemTypedef *) &VAR_7, 0);
    VAR_2.y = (int16_t )FUNC_0((HID_Report_ItemTypedef *) &VAR_8, 0);

    VAR_2.buttons[0]=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_4, 0);
    VAR_2.buttons[1]=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_5, 0);
    VAR_2.buttons[2]=(uint8_t)FUNC_0((HID_Report_ItemTypedef *) &VAR_6, 0);

    return VAR_1;
  }
  return VAR_0;
}
