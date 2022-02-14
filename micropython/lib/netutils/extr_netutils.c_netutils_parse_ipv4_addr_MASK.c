
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ netutils_endian_t ;
typedef int mp_uint_t ;
typedef int mp_obj_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 char* FUNC_1 (int ,size_t*) ;
 int FUNC_2 (char*) ;

void FUNC_3(mp_obj_t VAR_2, uint8_t *VAR_3, netutils_endian_t VAR_4) {
    size_t VAR_5;
    const char *VAR_6 = FUNC_1(VAR_2, &VAR_5);
    if (VAR_5 == 0) {

        FUNC_0(VAR_3, 0, VAR_0);
        return;
    }
    const char *VAR_7 = VAR_6;
    const char *VAR_8 = VAR_6 + VAR_5;
    for (mp_uint_t VAR_9 = 3 ; ; VAR_9--) {
        mp_uint_t VAR_10 = 0;
        for (; VAR_7 < VAR_8 && *VAR_7 != '.'; VAR_7++) {
            VAR_10 = VAR_10 * 10 + *VAR_7 - '0';
        }
        if (VAR_4 == VAR_1) {
            VAR_3[VAR_9] = VAR_10;
        } else {
            VAR_3[VAR_0 - 1 - VAR_9] = VAR_10;
        }
        if (VAR_9 == 0 && VAR_7 == VAR_8) {
            return;
        } else if (VAR_9 > 0 && VAR_7 < VAR_8 && *VAR_7 == '.') {
            VAR_7++;
        } else {
            FUNC_2("invalid arguments");
        }
    }
}
