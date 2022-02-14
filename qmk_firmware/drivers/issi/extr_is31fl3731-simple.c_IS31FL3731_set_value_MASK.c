
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t driver; int v; } ;
typedef TYPE_1__ is31_led ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;

void FUNC_0(int VAR_4, uint8_t VAR_5) {
    if (VAR_4 >= 0 && VAR_4 < VAR_0) {
        is31_led VAR_6 = VAR_1[VAR_4];


        VAR_2[VAR_6.driver][VAR_6.v - 0x24] = VAR_5;
        VAR_3 = 1;
    }
}
