
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ v; void* s; int h; } ;
struct TYPE_4__ {TYPE_1__ hsv; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_0(uint16_t VAR_2, uint8_t VAR_3, uint8_t VAR_4) {
    VAR_1.hsv.h = VAR_2;
    VAR_1.hsv.s = VAR_3;
    VAR_1.hsv.v = VAR_4;
    if (VAR_1.hsv.v > VAR_0) VAR_1.hsv.v = VAR_0;
}
