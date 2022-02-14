
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ neg; } ;
struct TYPE_5__ {TYPE_1__ mpz; } ;
typedef TYPE_2__ mp_obj_int_t ;
typedef scalar_t__ mp_int_t ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(mp_obj_t VAR_0) {
    if (FUNC_2(VAR_0)) {
        mp_int_t VAR_1 = FUNC_0(VAR_0);
        if (VAR_1 < 0) {
            return -1;
        } else if (VAR_1 > 0) {
            return 1;
        } else {
            return 0;
        }
    }
    mp_obj_int_t *VAR_2 = FUNC_1(VAR_0);
    if (VAR_2->mpz.len == 0) {
        return 0;
    } else if (VAR_2->mpz.neg == 0) {
        return 1;
    } else {
        return -1;
    }
}
