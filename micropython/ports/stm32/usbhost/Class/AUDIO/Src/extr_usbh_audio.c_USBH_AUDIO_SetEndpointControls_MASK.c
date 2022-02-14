
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


typedef void* uint8_t ;
typedef void* uint16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {void* w; } ;
struct TYPE_11__ {void* w; } ;
struct TYPE_10__ {void* w; } ;
struct TYPE_13__ {int bmRequestType; TYPE_3__ wLength; TYPE_2__ wIndex; TYPE_1__ wValue; int bRequest; } ;
struct TYPE_14__ {TYPE_4__ b; } ;
struct TYPE_15__ {TYPE_5__ setup; } ;
struct TYPE_16__ {TYPE_6__ Control; } ;
typedef TYPE_7__ USBH_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,void**,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_5,
                                               uint8_t VAR_6,
                                               uint8_t *VAR_7)
{
  uint16_t VAR_8, VAR_9, VAR_10;


  VAR_8 = VAR_0 << 8;
  VAR_9 = VAR_6;
  VAR_10 = 3;

  VAR_5->Control.setup.b.bmRequestType = VAR_2 | VAR_3 | VAR_4;


  VAR_5->Control.setup.b.bRequest = VAR_1;
  VAR_5->Control.setup.b.wValue.w = VAR_8;
  VAR_5->Control.setup.b.wIndex.w = VAR_9;
  VAR_5->Control.setup.b.wLength.w = VAR_10;

  return(FUNC_0(VAR_5, (uint8_t *)VAR_7, VAR_10 ));

}
