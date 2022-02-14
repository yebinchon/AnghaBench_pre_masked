
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {scalar_t__ w; } ;
struct TYPE_11__ {scalar_t__ w; } ;
struct TYPE_10__ {int w; } ;
struct TYPE_13__ {int bmRequestType; TYPE_3__ wLength; TYPE_2__ wIndex; TYPE_1__ wValue; int bRequest; } ;
struct TYPE_15__ {TYPE_4__ b; } ;
struct TYPE_14__ {TYPE_6__ setup; } ;
struct TYPE_16__ {TYPE_5__ Control; } ;
typedef TYPE_7__ USBH_HandleTypeDef ;


 int FUNC_0 (TYPE_7__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_4,
                                            uint8_t VAR_5)
{


  VAR_4->Control.setup.b.bmRequestType = VAR_0 | VAR_2 | VAR_3;



  VAR_4->Control.setup.b.bRequest = VAR_1;
  VAR_4->Control.setup.b.wValue.w = VAR_5 != 0 ? 0 : 1;
  VAR_4->Control.setup.b.wIndex.w = 0;
  VAR_4->Control.setup.b.wLength.w = 0;

  return FUNC_0(VAR_4, 0 , 0 );

}
