
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int x; int y; int buttons; } ;
typedef TYPE_1__ report_mouse_t ;
typedef int int16_t ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;

void FUNC_5(void) {

    static uint8_t VAR_4[3];
    static int VAR_5 = 0;

    static report_mouse_t VAR_6 = {};

    int16_t VAR_7;

    VAR_7 = FUNC_3();
    if (VAR_7 < 0)
        return;

    if (VAR_3) FUNC_4("serial_mouse: byte: %04X\n", VAR_7);





    if (VAR_7 & (1 << 6)) VAR_5 = 0;

    VAR_4[VAR_5] = (uint8_t)VAR_7;

    if (VAR_5 == 0 && VAR_4[VAR_5] == 0x20) {




        VAR_6.buttons |= VAR_2;
        VAR_6.x = VAR_6.y = 0;

        FUNC_2(&VAR_6);
        FUNC_1(&VAR_6);
        return;
    }

    VAR_5++;

    if (VAR_5 < 3) return;
    VAR_5 = 0;







    VAR_6.buttons = 0;
    if (VAR_4[0] & (1 << 5)) VAR_6.buttons |= VAR_0;
    if (VAR_4[0] & (1 << 4)) VAR_6.buttons |= VAR_1;

    VAR_6.x = (VAR_4[0] << 6) | VAR_4[1];
    VAR_6.y = ((VAR_4[0] << 4) & 0xC0) | VAR_4[2];


    VAR_6.x = FUNC_0(VAR_6.x, -127);
    VAR_6.y = FUNC_0(VAR_6.y, -127);
    FUNC_2(&VAR_6);
    FUNC_1(&VAR_6);
}
