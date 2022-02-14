
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_uint_t ;
struct TYPE_4__ {int previous_brightness; } ;
typedef TYPE_1__ microbit_display_obj_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__ VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int32_t FUNC_2(void) {
    microbit_display_obj_t *VAR_4 = &VAR_2;
    mp_uint_t VAR_5 = VAR_4->previous_brightness;
    FUNC_1(VAR_4, VAR_5);
    VAR_5 += 1;
    if (VAR_5 == VAR_1) {
        FUNC_0(VAR_0);
        return -1;
    }
    VAR_4->previous_brightness = VAR_5;

    return VAR_3[VAR_5];
}
