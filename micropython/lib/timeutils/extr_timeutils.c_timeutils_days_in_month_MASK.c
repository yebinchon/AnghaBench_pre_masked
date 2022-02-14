
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mp_uint_t ;


 size_t* VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;

mp_uint_t FUNC_1(mp_uint_t VAR_1, mp_uint_t VAR_2) {
    mp_uint_t VAR_3 = VAR_0[VAR_2] - VAR_0[VAR_2 - 1];
    if (VAR_2 == 2 && FUNC_0(VAR_1)) {
        VAR_3++;
    }
    return VAR_3;
}
