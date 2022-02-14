
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {scalar_t__* b; scalar_t__* g; scalar_t__* r; } ;
struct TYPE_4__ {TYPE_1__ rgb; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(void) {
    for (uint8_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        *VAR_1[VAR_2].rgb.r = 0;
        *VAR_1[VAR_2].rgb.g = 0;
        *VAR_1[VAR_2].rgb.b = 0;
    }
}
