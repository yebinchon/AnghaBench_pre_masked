
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_4__ {int (* send_func ) (TYPE_1__*,int,int,int,int) ;} ;
typedef TYPE_1__ MidiDevice ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int,int,int) ;

void FUNC_1(MidiDevice* VAR_2, uint8_t VAR_3, int16_t VAR_4) {
    uint16_t VAR_5;

    if (VAR_4 > 0x1fff) {
        VAR_5 = 0x3FFF;
    } else if (VAR_4 < -0x2000) {
        VAR_5 = 0;
    } else {
        VAR_5 = VAR_4 + 0x2000;
    }
    VAR_2->send_func(VAR_2, 3, VAR_1 | (VAR_3 & VAR_0), VAR_5 & 0x7F, (VAR_5 >> 7) & 0x7F);
}
