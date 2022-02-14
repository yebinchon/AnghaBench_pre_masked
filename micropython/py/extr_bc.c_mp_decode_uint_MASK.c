
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_uint_t ;
typedef int byte ;



mp_uint_t FUNC_0(const byte **VAR_0) {
    mp_uint_t VAR_1 = 0;
    byte VAR_2;
    const byte *VAR_3 = *VAR_0;
    do {
        VAR_2 = *VAR_3++;
        VAR_1 = (VAR_1 << 7) | (VAR_2 & 0x7f);
    } while ((VAR_2 & 0x80) != 0);
    *VAR_0 = VAR_3;
    return VAR_1;
}
