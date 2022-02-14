
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

uint32_t FUNC_1(int64_t VAR_2) {
    if (VAR_2 < 0) {

        uint64_t VAR_3 = (VAR_2 != VAR_1) ?
                      (uint64_t)-VAR_2 : ((uint64_t) VAR_0)+1;
        return FUNC_0(VAR_3)+1;
    } else {
        return FUNC_0(VAR_2);
    }
}
