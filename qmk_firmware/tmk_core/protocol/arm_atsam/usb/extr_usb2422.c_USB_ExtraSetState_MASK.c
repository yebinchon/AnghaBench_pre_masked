
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int E_DN1_N; scalar_t__ E_VBUS_1; scalar_t__ E_VBUS_2; } ;
struct TYPE_4__ {TYPE_1__ bit; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

void FUNC_2(uint8_t VAR_11) {
    uint8_t VAR_12 = VAR_11;

    if (VAR_11 == VAR_1) VAR_11 = VAR_0;

    if (VAR_10 == VAR_3)
        VAR_8.bit.E_VBUS_2 = VAR_11;
    else if (VAR_10 == VAR_4)
        VAR_8.bit.E_VBUS_1 = VAR_11;
    else
        return;

    VAR_8.bit.E_DN1_N = !VAR_11;
    FUNC_1();

    VAR_9 = VAR_12;

    if (VAR_9 == VAR_2)
        FUNC_0("USB: Extra enabled\r\n");
    else if (VAR_9 == VAR_0) {
        FUNC_0("USB: Extra disabled\r\n");



    } else if (VAR_9 == VAR_1)
        FUNC_0("USB: Extra disabled until replug\r\n");
    else
        FUNC_0("USB: Extra state unknown\r\n");
}
