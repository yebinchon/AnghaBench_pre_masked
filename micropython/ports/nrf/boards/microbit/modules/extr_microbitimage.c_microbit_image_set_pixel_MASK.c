
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mp_uint_t ;
typedef scalar_t__ mp_obj_t ;
typedef scalar_t__ mp_int_t ;
struct TYPE_5__ {int greyscale; } ;
typedef TYPE_1__ microbit_image_obj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__ const) ;
 int FUNC_5 (char*) ;

mp_obj_t FUNC_6(mp_uint_t VAR_2, const mp_obj_t *VAR_3) {
    (void)VAR_2;
    microbit_image_obj_t *VAR_4 = (microbit_image_obj_t*)VAR_3[0];
    FUNC_0(VAR_4);
    mp_int_t VAR_5 = FUNC_4(VAR_3[1]);
    mp_int_t VAR_6 = FUNC_4(VAR_3[2]);
    if (VAR_5 < 0 || VAR_6 < 0) {
        FUNC_5("index cannot be negative");
    }
    mp_int_t VAR_7 = FUNC_4(VAR_3[3]);
    if (VAR_7 < 0 || VAR_7 > VAR_0)
        FUNC_5("brightness out of bounds.");
    if (VAR_5 < FUNC_3(VAR_4) && VAR_6 < FUNC_2(VAR_4)) {
        FUNC_1(&(VAR_4->greyscale), VAR_5, VAR_6, VAR_7);
        return VAR_1;
    }
    FUNC_5("index too large");
}
