
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_module {TYPE_4__* hw; } ;
struct TYPE_7__ {TYPE_2__* DeviceEndpoint; } ;
struct TYPE_8__ {TYPE_3__ DEVICE; } ;
struct TYPE_5__ {int reg; } ;
struct TYPE_6__ {TYPE_1__ EPSTATUSSET; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct usb_module *VAR_4, uint8_t VAR_5) {
    uint8_t VAR_6 = VAR_5 & VAR_2;


    if (VAR_5 & VAR_3) {
        VAR_4->hw->DEVICE.DeviceEndpoint[VAR_6].EPSTATUSSET.reg = VAR_1;
    } else {
        VAR_4->hw->DEVICE.DeviceEndpoint[VAR_6].EPSTATUSSET.reg = VAR_0;
    }
}
