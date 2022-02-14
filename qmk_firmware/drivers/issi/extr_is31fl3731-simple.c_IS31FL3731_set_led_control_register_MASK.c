
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int v; size_t driver; } ;
typedef TYPE_1__ is31_led ;


 TYPE_1__* VAR_0 ;
 int** VAR_1 ;
 int VAR_2 ;

void FUNC_0(uint8_t VAR_3, bool VAR_4) {
    is31_led VAR_5 = VAR_0[VAR_3];

    uint8_t VAR_6 = (VAR_5.v - 0x24) / 8;
    uint8_t VAR_7 = (VAR_5.v - 0x24) % 8;

    if (VAR_4) {
        VAR_1[VAR_5.driver][VAR_6] |= (1 << VAR_7);
    } else {
        VAR_1[VAR_5.driver][VAR_6] &= ~(1 << VAR_7);
    }

    VAR_2 = 1;
}
