
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_obj_t ;
typedef int mp_longint_impl_t ;
typedef int byte ;


 int FUNC_0 (int) ;

mp_obj_t FUNC_1(bool VAR_0, size_t VAR_1, const byte *VAR_2) {
    int VAR_3 = 1;
    if (!VAR_0) {
        VAR_2 += VAR_1 - 1;
        VAR_3 = -1;
    }

    mp_longint_impl_t VAR_4 = 0;
    for (; VAR_1--; VAR_2 += VAR_3) {
        VAR_4 = (VAR_4 << 8) | *VAR_2;
    }
    return FUNC_0(VAR_4);
}
