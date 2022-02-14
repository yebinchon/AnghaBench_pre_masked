
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef int susec_t ;
struct timeval {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct timeval*) ;

inline susec_t FUNC_2(struct timeval *VAR_0, struct timeval *VAR_1) {
    usec_t VAR_2 = FUNC_1(VAR_0);
    usec_t VAR_3 = FUNC_1(VAR_1);

    if(FUNC_0(VAR_2 >= VAR_3)) return (susec_t)(VAR_2 - VAR_3);
    return -((susec_t)(VAR_3 - VAR_2));
}
