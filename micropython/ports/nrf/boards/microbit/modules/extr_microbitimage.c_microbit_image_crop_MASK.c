
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_uint_t ;
typedef scalar_t__ mp_obj_t ;
typedef int mp_int_t ;
typedef int microbit_image_obj_t ;


 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__ const) ;

mp_obj_t FUNC_2(mp_uint_t VAR_0, const mp_obj_t *VAR_1) {
    (void)VAR_0;
    microbit_image_obj_t *VAR_2 = (microbit_image_obj_t*)VAR_1[0];
    mp_int_t VAR_3 = FUNC_1(VAR_1[1]);
    mp_int_t VAR_4 = FUNC_1(VAR_1[2]);
    mp_int_t VAR_5 = FUNC_1(VAR_1[3]);
    mp_int_t VAR_6 = FUNC_1(VAR_1[4]);
    return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
