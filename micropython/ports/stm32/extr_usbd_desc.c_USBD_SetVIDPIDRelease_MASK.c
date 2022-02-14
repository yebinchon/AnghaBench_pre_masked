
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* usbd_device_desc; } ;
typedef TYPE_1__ usbd_cdc_msc_hid_state_t ;
typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_2(usbd_cdc_msc_hid_state_t *VAR_7, uint16_t VAR_8, uint16_t VAR_9, uint16_t VAR_10, int VAR_11) {
    uint8_t *VAR_12 = &VAR_7->usbd_device_desc[0];

    VAR_12[0] = VAR_5;
    VAR_12[1] = VAR_4;
    VAR_12[2] = 0x00;
    VAR_12[3] = 0x02;
    if (VAR_11) {



        VAR_12[4] = 0x02;
        VAR_12[5] = 0x00;
        VAR_12[6] = 0x00;
    } else {

        VAR_12[4] = 0xef;
        VAR_12[5] = 0x02;
        VAR_12[6] = 0x01;
    }
    VAR_12[7] = VAR_6;
    VAR_12[8] = FUNC_1(VAR_8);
    VAR_12[9] = FUNC_0(VAR_8);
    VAR_12[10] = FUNC_1(VAR_9);
    VAR_12[11] = FUNC_0(VAR_9);
    VAR_12[12] = FUNC_1(VAR_10);
    VAR_12[13] = FUNC_0(VAR_10);
    VAR_12[14] = VAR_0;
    VAR_12[15] = VAR_1;
    VAR_12[16] = VAR_2;
    VAR_12[17] = VAR_3;
}
