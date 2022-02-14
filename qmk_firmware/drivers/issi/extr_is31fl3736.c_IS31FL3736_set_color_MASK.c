
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t driver; size_t r; size_t g; size_t b; } ;
typedef TYPE_1__ is31_led ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;

void FUNC_0(int VAR_4, uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7) {
    if (VAR_4 >= 0 && VAR_4 < VAR_0) {
        is31_led VAR_8 = VAR_1[VAR_4];

        VAR_2[VAR_8.driver][VAR_8.r] = VAR_5;
        VAR_2[VAR_8.driver][VAR_8.g] = VAR_6;
        VAR_2[VAR_8.driver][VAR_8.b] = VAR_7;
        VAR_3 = 1;
    }
}
