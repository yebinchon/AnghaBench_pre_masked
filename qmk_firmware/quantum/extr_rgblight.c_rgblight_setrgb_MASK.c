
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {size_t r; size_t g; size_t b; scalar_t__ w; } ;
struct TYPE_3__ {int enable; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 () ;

void FUNC_1(uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6) {
    if (!VAR_3.enable) {
        return;
    }

    for (uint8_t VAR_7 = VAR_1; VAR_7 < VAR_0; VAR_7++) {
        VAR_2[VAR_7].r = VAR_4;
        VAR_2[VAR_7].g = VAR_5;
        VAR_2[VAR_7].b = VAR_6;



    }
    FUNC_0();
}
