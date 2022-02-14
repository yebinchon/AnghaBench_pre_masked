
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_uint_t ;
typedef scalar_t__ mp_obj_t ;
typedef scalar_t__ mp_int_t ;
struct TYPE_4__ {int greyscale; } ;
typedef TYPE_1__ microbit_image_obj_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__ const) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 int VAR_2 ;

mp_obj_t FUNC_6(mp_uint_t VAR_3, const mp_obj_t *VAR_4) {
    microbit_image_obj_t *VAR_5 = (microbit_image_obj_t*)VAR_4[0];
    FUNC_0(VAR_5);

    mp_obj_t VAR_6 = VAR_4[1];
    if (FUNC_3(VAR_6) != &VAR_0) {
        FUNC_5(&VAR_2, "expecting an image");
    }
    if (VAR_3 == 7) {
        FUNC_5(&VAR_2, "must specify both offsets");
    }
    mp_int_t VAR_7 = FUNC_2(VAR_4[2]);
    mp_int_t VAR_8 = FUNC_2(VAR_4[3]);
    mp_int_t VAR_9 = FUNC_2(VAR_4[4]);
    mp_int_t VAR_10 = FUNC_2(VAR_4[5]);
    if (VAR_9 < 0 || VAR_10 < 0) {
        FUNC_4("size cannot be negative");
    }
    mp_int_t VAR_11;
    mp_int_t VAR_12;
    if (VAR_3 == 6) {
        VAR_11 = 0;
        VAR_12 = 0;
    } else {
        VAR_11 = FUNC_2(VAR_4[6]);
        VAR_12 = FUNC_2(VAR_4[7]);
    }
    FUNC_1((microbit_image_obj_t *)VAR_6, &(VAR_5->greyscale), VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    return VAR_1;
}
