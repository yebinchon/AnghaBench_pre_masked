
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_module {TYPE_5__* hw; } ;
struct TYPE_12__ {int reg; } ;
struct TYPE_10__ {TYPE_3__* DeviceEndpoint; } ;
struct TYPE_11__ {TYPE_4__ DEVICE; } ;
struct TYPE_8__ {int reg; } ;
struct TYPE_7__ {int reg; } ;
struct TYPE_9__ {TYPE_2__ EPINTFLAG; TYPE_1__ EPSTATUSSET; TYPE_6__ EPSTATUSCLR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(struct usb_module *VAR_6, uint8_t VAR_7) {
    uint8_t VAR_8;
    VAR_8 = VAR_7 & VAR_4;


    if (VAR_7 & VAR_5) {
        VAR_6->hw->DEVICE.DeviceEndpoint[VAR_8].EPSTATUSCLR.reg = VAR_2;

        VAR_6->hw->DEVICE.DeviceEndpoint[VAR_8].EPINTFLAG.reg = VAR_1;
    } else {
        VAR_6->hw->DEVICE.DeviceEndpoint[VAR_8].EPSTATUSSET.reg = VAR_3;

        VAR_6->hw->DEVICE.DeviceEndpoint[VAR_8].EPINTFLAG.reg = VAR_0;
    }
}
