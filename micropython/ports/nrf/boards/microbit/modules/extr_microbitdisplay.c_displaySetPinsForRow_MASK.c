
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int* pins_for_brightness; } ;
typedef TYPE_1__ microbit_display_obj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void FUNC_2(microbit_display_obj_t * VAR_2, uint8_t VAR_3) {
    if (VAR_3 == 0) {
        FUNC_1(VAR_1, VAR_0 & ~VAR_2->pins_for_brightness[VAR_3]);
    } else {
        FUNC_0(VAR_2->pins_for_brightness[VAR_3]);
    }
}
