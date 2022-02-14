
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(uint64_t VAR_3, int64_t VAR_4, uint64_t VAR_5, int VAR_6, uint64_t *VAR_7) {
    uint64_t VAR_8 = (VAR_5 == 64) ? VAR_2 : (((uint64_t)1<<VAR_5)-1);
    int64_t VAR_9 = VAR_8-VAR_3;
    int64_t VAR_10 = -VAR_3;

    if (VAR_3 > VAR_8 || (VAR_4 > 0 && VAR_4 > VAR_9)) {
        if (VAR_7) {
            if (VAR_6 == VAR_1) {
                goto handle_wrap;
            } else if (VAR_6 == VAR_0) {
                *VAR_7 = VAR_8;
            }
        }
        return 1;
    } else if (VAR_4 < 0 && VAR_4 < VAR_10) {
        if (VAR_7) {
            if (VAR_6 == VAR_1) {
                goto handle_wrap;
            } else if (VAR_6 == VAR_0) {
                *VAR_7 = 0;
            }
        }
        return -1;
    }
    return 0;

handle_wrap:
    {
        uint64_t VAR_11 = ((uint64_t)-1) << VAR_5;
        uint64_t VAR_12 = VAR_3+VAR_4;

        VAR_12 &= ~VAR_11;
        *VAR_7 = VAR_12;
    }
    return 1;
}
