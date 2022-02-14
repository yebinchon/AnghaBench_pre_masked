
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_obj_t ;
typedef int mp_obj_iter_buf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,size_t*,scalar_t__**) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

void FUNC_7(mp_obj_t VAR_6, size_t VAR_7, mp_obj_t *VAR_8) {
    size_t VAR_9;
    if (FUNC_3(VAR_6, &VAR_5) || FUNC_3(VAR_6, &VAR_4)) {
        mp_obj_t *VAR_10;
        FUNC_2(VAR_6, &VAR_9, &VAR_10);
        if (VAR_9 < VAR_7) {
            goto too_short;
        } else if (VAR_9 > VAR_7) {
            goto too_long;
        }
        for (size_t VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
            VAR_8[VAR_11] = VAR_10[VAR_7 - 1 - VAR_11];
        }
    } else {
        mp_obj_iter_buf_t VAR_12;
        mp_obj_t VAR_13 = FUNC_0(VAR_6, &VAR_12);

        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
            mp_obj_t VAR_14 = FUNC_1(VAR_13);
            if (VAR_14 == VAR_2) {
                goto too_short;
            }
            VAR_8[VAR_7 - 1 - VAR_9] = VAR_14;
        }
        if (FUNC_1(VAR_13) != VAR_2) {
            goto too_long;
        }
    }
    return;

too_short:
    if (VAR_0 == VAR_1) {
        FUNC_5("wrong number of values to unpack");
    } else {
        FUNC_6(FUNC_4(&VAR_3,
            "need more than %d values to unpack", (int)VAR_9));
    }
too_long:
    if (VAR_0 == VAR_1) {
        FUNC_5("wrong number of values to unpack");
    } else {
        FUNC_6(FUNC_4(&VAR_3,
            "too many values to unpack (expected %d)", (int)VAR_7));
    }
}
