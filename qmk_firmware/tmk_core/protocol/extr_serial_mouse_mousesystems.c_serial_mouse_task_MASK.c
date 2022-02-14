
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {void* y; void* x; int buttons; void* v; void* h; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ report_mouse_t ;
typedef int int8_t ;
typedef int int16_t ;


 void* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;

void FUNC_5(void) {

    static uint8_t VAR_4[5];
    static int VAR_5 = 0;

    int16_t VAR_6;

    report_mouse_t VAR_7 = {0, 0, 0, 0, 0};

    VAR_6 = FUNC_3();
    if (VAR_6 < 0)
        return;

    if (VAR_3) FUNC_4("serial_mouse: byte: %04X\n", VAR_6);
    if (VAR_5 == 0 && (VAR_6 >> 3) != 0x10) return;

    VAR_4[VAR_5++] = (uint8_t)VAR_6;

    if (VAR_5 < 5) return;
    VAR_5 = 0;
    if (!(VAR_4[0] & (1 << 2))) VAR_7.buttons |= VAR_0;
    if (!(VAR_4[0] & (1 << 1))) VAR_7.buttons |= VAR_2;
    if (!(VAR_4[0] & (1 << 0))) VAR_7.buttons |= VAR_1;


    VAR_7.x = FUNC_0((int8_t)VAR_4[1], -127);
    VAR_7.y = FUNC_0(-(int8_t)VAR_4[2], -127);

    FUNC_2(&VAR_7);
    FUNC_1(&VAR_7);

    if (VAR_4[3] || VAR_4[4]) {
        VAR_7.x = FUNC_0((int8_t)VAR_4[3], -127);
        VAR_7.y = FUNC_0(-(int8_t)VAR_4[4], -127);

        FUNC_2(&VAR_7);
        FUNC_1(&VAR_7);
    }
}
