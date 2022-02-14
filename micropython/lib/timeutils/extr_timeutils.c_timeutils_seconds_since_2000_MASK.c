
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_uint_t ;


 int FUNC_0 (int,int,int) ;

mp_uint_t FUNC_1(mp_uint_t VAR_0, mp_uint_t VAR_1,
    mp_uint_t VAR_2, mp_uint_t VAR_3, mp_uint_t VAR_4, mp_uint_t VAR_5) {
    return
        VAR_5
        + VAR_4 * 60
        + VAR_3 * 3600
        + (FUNC_0(VAR_0, VAR_1, VAR_2) - 1
            + ((VAR_0 - 2000 + 3) / 4)
            - ((VAR_0 - 2000 + 99) / 100)
            + ((VAR_0 - 2000 + 399) / 400)
            ) * 86400
        + (VAR_0 - 2000) * 31536000;
}
