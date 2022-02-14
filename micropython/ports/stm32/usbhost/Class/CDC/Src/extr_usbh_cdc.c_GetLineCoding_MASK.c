
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_14__ {int w; } ;
struct TYPE_13__ {scalar_t__ w; } ;
struct TYPE_12__ {scalar_t__ w; } ;
struct TYPE_15__ {int bmRequestType; TYPE_3__ wLength; TYPE_2__ wIndex; TYPE_1__ wValue; int bRequest; } ;
struct TYPE_16__ {TYPE_4__ b; } ;
struct TYPE_17__ {TYPE_5__ setup; } ;
struct TYPE_18__ {TYPE_6__ Control; } ;
typedef TYPE_7__ USBH_HandleTypeDef ;
struct TYPE_19__ {int Array; } ;
typedef TYPE_8__ CDC_LineCodingTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_5, CDC_LineCodingTypeDef *VAR_6)
{

  VAR_5->Control.setup.b.bmRequestType = VAR_2 | VAR_4 | VAR_3;


  VAR_5->Control.setup.b.bRequest = VAR_0;
  VAR_5->Control.setup.b.wValue.w = 0;
  VAR_5->Control.setup.b.wIndex.w = 0;
  VAR_5->Control.setup.b.wLength.w = VAR_1;

  return FUNC_0(VAR_5, VAR_6->Array, VAR_1);
}
