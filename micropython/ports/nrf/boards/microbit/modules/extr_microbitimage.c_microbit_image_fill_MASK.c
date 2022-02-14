
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mp_obj_t ;
typedef scalar_t__ mp_int_t ;
struct TYPE_3__ {int greyscale; } ;
typedef TYPE_1__ microbit_image_obj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;

mp_obj_t FUNC_4(mp_obj_t VAR_2, mp_obj_t VAR_3) {
    microbit_image_obj_t *VAR_4 = (microbit_image_obj_t*)VAR_2;
    FUNC_0(VAR_4);
    mp_int_t VAR_5 = FUNC_2(VAR_3);
    if (VAR_5 < 0 || VAR_5 > VAR_0) {
        FUNC_3("brightness out of bounds.");
    }
    FUNC_1(&VAR_4->greyscale, VAR_5);
    return VAR_1;
}
