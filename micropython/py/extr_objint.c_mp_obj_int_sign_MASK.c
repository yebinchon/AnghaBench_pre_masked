
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_obj_t ;
typedef scalar_t__ mp_int_t ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(mp_obj_t VAR_0) {
    mp_int_t VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 < 0) {
        return -1;
    } else if (VAR_1 > 0) {
        return 1;
    } else {
        return 0;
    }
}
