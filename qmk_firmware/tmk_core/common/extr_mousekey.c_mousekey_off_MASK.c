
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ y; scalar_t__ x; scalar_t__ v; scalar_t__ h; int buttons; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_1__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;

void FUNC_0(uint8_t VAR_24) {
    if (VAR_24 == VAR_11 && VAR_21.y < 0)
        VAR_21.y = 0;
    else if (VAR_24 == VAR_8 && VAR_21.y > 0)
        VAR_21.y = 0;
    else if (VAR_24 == VAR_9 && VAR_21.x < 0)
        VAR_21.x = 0;
    else if (VAR_24 == VAR_10 && VAR_21.x > 0)
        VAR_21.x = 0;
    else if (VAR_24 == VAR_15 && VAR_21.v > 0)
        VAR_21.v = 0;
    else if (VAR_24 == VAR_12 && VAR_21.v < 0)
        VAR_21.v = 0;
    else if (VAR_24 == VAR_13 && VAR_21.h < 0)
        VAR_21.h = 0;
    else if (VAR_24 == VAR_14 && VAR_21.h > 0)
        VAR_21.h = 0;
    else if (VAR_24 == VAR_3)
        VAR_21.buttons &= ~VAR_16;
    else if (VAR_24 == VAR_4)
        VAR_21.buttons &= ~VAR_17;
    else if (VAR_24 == VAR_5)
        VAR_21.buttons &= ~VAR_18;
    else if (VAR_24 == VAR_6)
        VAR_21.buttons &= ~VAR_19;
    else if (VAR_24 == VAR_7)
        VAR_21.buttons &= ~VAR_20;
    else if (VAR_24 == VAR_0)
        VAR_22 &= ~(1 << 0);
    else if (VAR_24 == VAR_1)
        VAR_22 &= ~(1 << 1);
    else if (VAR_24 == VAR_2)
        VAR_22 &= ~(1 << 2);
    if (VAR_21.x == 0 && VAR_21.y == 0 && VAR_21.v == 0 && VAR_21.h == 0) VAR_23 = 0;
}
