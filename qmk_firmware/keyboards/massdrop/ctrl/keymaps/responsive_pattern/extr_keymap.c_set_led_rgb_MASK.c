
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* r; int* g; int* b; } ;
struct TYPE_5__ {TYPE_1__ rgb; } ;
typedef TYPE_2__ issi3733_led_t ;


 TYPE_2__* VAR_0 ;

void FUNC_0(uint8_t VAR_1, uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4){
    issi3733_led_t *VAR_5 = (VAR_0 + VAR_1);
    *VAR_5->rgb.r = VAR_2;
    *VAR_5->rgb.g = VAR_3;
    *VAR_5->rgb.b = VAR_4;
}
