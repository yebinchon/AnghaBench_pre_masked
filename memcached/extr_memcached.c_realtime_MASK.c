
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int rel_time_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;

__attribute__((used)) static rel_time_t FUNC_0(const time_t VAR_3) {


    if (VAR_3 == 0) return 0;

    if (VAR_3 > VAR_0) {






        if (VAR_3 <= VAR_2)
            return (rel_time_t)1;
        return (rel_time_t)(VAR_3 - VAR_2);
    } else {
        return (rel_time_t)(VAR_3 + VAR_1);
    }
}
