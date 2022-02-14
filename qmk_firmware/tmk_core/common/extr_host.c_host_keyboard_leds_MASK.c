
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int (* keyboard_leds ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

uint8_t FUNC_1(void) {
    if (!VAR_0) return 0;
    return (*VAR_0->keyboard_leds)();
}
