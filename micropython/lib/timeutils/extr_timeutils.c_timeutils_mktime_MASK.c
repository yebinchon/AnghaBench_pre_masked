
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_uint_t ;
typedef int mp_int_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int,int,int,int) ;

mp_uint_t FUNC_2(mp_uint_t VAR_0, mp_int_t VAR_1, mp_int_t VAR_2,
    mp_int_t VAR_3, mp_int_t VAR_4, mp_int_t VAR_5) {
    VAR_4 += VAR_5 / 60;
    if ((VAR_5 = VAR_5 % 60) < 0) {
        VAR_5 += 60;
        VAR_4--;
    }

    VAR_3 += VAR_4 / 60;
    if ((VAR_4 = VAR_4 % 60) < 0) {
        VAR_4 += 60;
        VAR_3--;
    }

    VAR_2 += VAR_3 / 24;
    if ((VAR_3 = VAR_3 % 24) < 0) {
        VAR_3 += 24;
        VAR_2--;
    }

    VAR_1--;
    VAR_0 += VAR_1 / 12;
    if ((VAR_1 = VAR_1 % 12) < 0) {
        VAR_1 += 12;
        VAR_0--;
    }
    VAR_1++;

    while (VAR_2 < 1) {
        if (--VAR_1 == 0) {
            VAR_1 = 12;
            VAR_0--;
        }
        VAR_2 += FUNC_0(VAR_0, VAR_1);
    }
    while ((mp_uint_t)VAR_2 > FUNC_0(VAR_0, VAR_1)) {
        VAR_2 -= FUNC_0(VAR_0, VAR_1);
        if (++VAR_1 == 13) {
            VAR_1 = 1;
            VAR_0++;
        }
    }
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
