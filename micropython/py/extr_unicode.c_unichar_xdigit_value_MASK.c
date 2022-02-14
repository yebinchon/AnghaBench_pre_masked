
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unichar ;
typedef int mp_uint_t ;



mp_uint_t FUNC_0(unichar VAR_0) {

    mp_uint_t VAR_1 = VAR_0 - '0';
    if (VAR_1 > 9) {
        VAR_1 &= ~('a' - 'A');
        VAR_1 -= ('A' - ('9' + 1));
    }
    return VAR_1;
}
