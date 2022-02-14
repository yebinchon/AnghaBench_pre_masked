
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
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;

void FUNC_1(uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6) {
    if (!VAR_2.enable || VAR_6 >= VAR_0) {
        return;
    }

    VAR_1[VAR_6].r = VAR_3;
    VAR_1[VAR_6].g = VAR_4;
    VAR_1[VAR_6].b = VAR_5;



    FUNC_0();
}
