
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t mp_uint_t ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ mp_obj_type_t ;
typedef int mp_obj_t ;
typedef size_t mp_int_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

size_t FUNC_8(const mp_obj_type_t *VAR_4, size_t VAR_5, mp_obj_t VAR_6, bool VAR_7) {
    mp_int_t VAR_8;
    if (FUNC_3(VAR_6)) {
        VAR_8 = FUNC_0(VAR_6);
    } else if (!FUNC_1(VAR_6, &VAR_8)) {
        if (VAR_0 == VAR_1) {
            FUNC_5("indices must be integers");
        } else {
            FUNC_7(FUNC_4(&VAR_3,
                "%q indices must be integers, not %s",
                VAR_4->name, FUNC_2(VAR_6)));
        }
    }

    if (VAR_8 < 0) {
        VAR_8 += VAR_5;
    }
    if (VAR_7) {
        if (VAR_8 < 0) {
            VAR_8 = 0;
        } else if ((mp_uint_t)VAR_8 > VAR_5) {
            VAR_8 = VAR_5;
        }
    } else {
        if (VAR_8 < 0 || (mp_uint_t)VAR_8 >= VAR_5) {
            if (VAR_0 == VAR_1) {
                FUNC_6(&VAR_2, "index out of range");
            } else {
                FUNC_7(FUNC_4(&VAR_2,
                    "%q index out of range", VAR_4->name));
            }
        }
    }


    return (size_t)VAR_8;
}
