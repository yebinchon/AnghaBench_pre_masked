
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ battery_led_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(battery_led_t VAR_6)
{
    if (VAR_6 == VAR_3) {

        VAR_0 |= (1<<5);
        VAR_4 |= (1<<5);
    } else if (VAR_6 == VAR_2) {

        VAR_0 |= (1<<5);
        VAR_5 &= ~(1<<5);
    } else if (VAR_6 == VAR_1) {

        VAR_0 |= (1<<5);
        VAR_5 |= (1<<5);
    } else {

        VAR_0 &= ~(1<<5);
        VAR_5 &= ~(1<<5);
    }
}
