
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ pressed; } ;
struct TYPE_4__ {TYPE_1__ event; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((unused)) bool FUNC_0(void) {
    for (uint8_t VAR_4 = VAR_3; VAR_4 != VAR_2; VAR_4 = (VAR_4 + 1) % VAR_0) {
        if (VAR_1[VAR_4].event.pressed) return 1;
    }
    return 0;
}
