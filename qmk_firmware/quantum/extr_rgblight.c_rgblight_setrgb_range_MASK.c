
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ w; scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;
struct TYPE_3__ {int enable; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

void FUNC_2(uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7) {
    if (!VAR_2.enable || VAR_6 < 0 || VAR_6 >= VAR_7 || VAR_7 > VAR_0) {
        return;
    }

    for (uint8_t VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8++) {
        VAR_1[VAR_8].r = VAR_3;
        VAR_1[VAR_8].g = VAR_4;
        VAR_1[VAR_8].b = VAR_5;



    }
    FUNC_0();
    FUNC_1(1);
}
