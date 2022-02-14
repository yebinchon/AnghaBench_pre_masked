
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int_t ;



mp_int_t FUNC_0(mp_int_t VAR_0, mp_int_t VAR_1) {

    VAR_0 %= VAR_1;
    if ((VAR_0 < 0 && VAR_1 > 0) || (VAR_0 > 0 && VAR_1 < 0)) {
        VAR_0 += VAR_1;
    }
    return VAR_0;
}
