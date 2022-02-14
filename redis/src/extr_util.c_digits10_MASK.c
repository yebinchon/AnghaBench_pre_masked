
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



uint32_t FUNC_0(uint64_t VAR_0) {
    if (VAR_0 < 10) return 1;
    if (VAR_0 < 100) return 2;
    if (VAR_0 < 1000) return 3;
    if (VAR_0 < 1000000000000UL) {
        if (VAR_0 < 100000000UL) {
            if (VAR_0 < 1000000) {
                if (VAR_0 < 10000) return 4;
                return 5 + (VAR_0 >= 100000);
            }
            return 7 + (VAR_0 >= 10000000UL);
        }
        if (VAR_0 < 10000000000UL) {
            return 9 + (VAR_0 >= 1000000000UL);
        }
        return 11 + (VAR_0 >= 100000000000UL);
    }
    return 12 + FUNC_0(VAR_0 / 1000000000000UL);
}
