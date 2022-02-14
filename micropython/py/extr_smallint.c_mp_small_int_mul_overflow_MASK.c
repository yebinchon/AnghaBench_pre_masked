
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int_t ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(mp_int_t VAR_2, mp_int_t VAR_3) {

    if (VAR_2 > 0) {
        if (VAR_3 > 0) {
            if (VAR_2 > (VAR_0 / VAR_3)) {
                return 1;
            }
        } else {
            if (VAR_3 < (VAR_1 / VAR_2)) {
                return 1;
            }
        }
    } else {
        if (VAR_3 > 0) {
            if (VAR_2 < (VAR_1 / VAR_3)) {
                return 1;
            }
        } else {
            if (VAR_2 != 0 && VAR_3 < (VAR_0 / VAR_2)) {
                return 1;
            }
        }
    }
    return 0;
}
