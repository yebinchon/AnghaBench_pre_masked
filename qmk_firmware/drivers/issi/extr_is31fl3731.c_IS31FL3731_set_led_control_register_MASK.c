
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int r; int g; int b; size_t driver; } ;
typedef TYPE_1__ is31_led ;


 TYPE_1__* VAR_0 ;
 int** VAR_1 ;
 int* VAR_2 ;

void FUNC_0(uint8_t VAR_3, bool VAR_4, bool VAR_5, bool VAR_6) {
    is31_led VAR_7 = VAR_0[VAR_3];

    uint8_t VAR_8 = (VAR_7.r - 0x24) / 8;
    uint8_t VAR_9 = (VAR_7.g - 0x24) / 8;
    uint8_t VAR_10 = (VAR_7.b - 0x24) / 8;
    uint8_t VAR_11 = (VAR_7.r - 0x24) % 8;
    uint8_t VAR_12 = (VAR_7.g - 0x24) % 8;
    uint8_t VAR_13 = (VAR_7.b - 0x24) % 8;

    if (VAR_4) {
        VAR_1[VAR_7.driver][VAR_8] |= (1 << VAR_11);
    } else {
        VAR_1[VAR_7.driver][VAR_8] &= ~(1 << VAR_11);
    }
    if (VAR_5) {
        VAR_1[VAR_7.driver][VAR_9] |= (1 << VAR_12);
    } else {
        VAR_1[VAR_7.driver][VAR_9] &= ~(1 << VAR_12);
    }
    if (VAR_6) {
        VAR_1[VAR_7.driver][VAR_10] |= (1 << VAR_13);
    } else {
        VAR_1[VAR_7.driver][VAR_10] &= ~(1 << VAR_13);
    }

    VAR_2[VAR_7.driver] = 1;
}
