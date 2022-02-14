
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
struct usb_module {TYPE_6__* hw; } ;
struct TYPE_11__ {TYPE_4__* DeviceEndpoint; } ;
struct TYPE_12__ {TYPE_5__ DEVICE; } ;
struct TYPE_9__ {int reg; } ;
struct TYPE_8__ {int reg; } ;
struct TYPE_7__ {int reg; } ;
struct TYPE_10__ {TYPE_3__ EPSTATUSCLR; TYPE_2__ EPINTFLAG; TYPE_1__ EPSTATUS; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_0(struct usb_module *VAR_10, uint8_t VAR_11) {
    uint8_t VAR_12 = VAR_11 & VAR_8;

    if (VAR_11 & VAR_9) {
        if (VAR_10->hw->DEVICE.DeviceEndpoint[VAR_12].EPSTATUS.reg & VAR_7) {

            VAR_10->hw->DEVICE.DeviceEndpoint[VAR_12].EPSTATUSCLR.reg = VAR_3;
            if (VAR_10->hw->DEVICE.DeviceEndpoint[VAR_12].EPINTFLAG.reg & VAR_1) {
                VAR_10->hw->DEVICE.DeviceEndpoint[VAR_12].EPINTFLAG.reg = VAR_1;

                VAR_10->hw->DEVICE.DeviceEndpoint[VAR_12].EPSTATUSCLR.reg = VAR_4;
            }
        }
    } else {
        if (VAR_10->hw->DEVICE.DeviceEndpoint[VAR_12].EPSTATUS.reg & VAR_6) {

            VAR_10->hw->DEVICE.DeviceEndpoint[VAR_12].EPSTATUSCLR.reg = VAR_2;
            if (VAR_10->hw->DEVICE.DeviceEndpoint[VAR_12].EPINTFLAG.reg & VAR_0) {
                VAR_10->hw->DEVICE.DeviceEndpoint[VAR_12].EPINTFLAG.reg = VAR_0;

                VAR_10->hw->DEVICE.DeviceEndpoint[VAR_12].EPSTATUSCLR.reg = VAR_5;
            }
        }
    }
}
