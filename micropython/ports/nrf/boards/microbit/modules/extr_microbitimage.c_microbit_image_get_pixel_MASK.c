
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_obj_t ;
typedef scalar_t__ mp_int_t ;
typedef int microbit_image_obj_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;

mp_obj_t FUNC_6(mp_obj_t VAR_0, mp_obj_t VAR_1, mp_obj_t VAR_2) {
    microbit_image_obj_t *VAR_3 = (microbit_image_obj_t*)VAR_0;
    mp_int_t VAR_4 = FUNC_4(VAR_1);
    mp_int_t VAR_5 = FUNC_4(VAR_2);
    if (VAR_4 < 0 || VAR_5 < 0) {
        FUNC_5("index cannot be negative");
    }
    if (VAR_4 < FUNC_3(VAR_3) && VAR_5 < FUNC_2(VAR_3)) {
        return FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_5));
    }
    FUNC_5("index too large");
}
