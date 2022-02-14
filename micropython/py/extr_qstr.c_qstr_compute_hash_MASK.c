
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_uint_t ;
typedef int byte ;


 int VAR_0 ;

mp_uint_t FUNC_0(const byte *VAR_1, size_t VAR_2) {

    mp_uint_t VAR_3 = 5381;
    for (const byte *VAR_4 = VAR_1 + VAR_2; VAR_1 < VAR_4; VAR_1++) {
        VAR_3 = ((VAR_3 << 5) + VAR_3) ^ (*VAR_1);
    }
    VAR_3 &= VAR_0;

    if (VAR_3 == 0) {
        VAR_3++;
    }
    return VAR_3;
}
