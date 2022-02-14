
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long usec_t ;
struct TYPE_3__ {unsigned long long monotonic; } ;
typedef TYPE_1__ heartbeat_t ;


 unsigned long long FUNC_0 () ;

inline usec_t FUNC_1(heartbeat_t *VAR_0) {
    if(!VAR_0 || !VAR_0->monotonic) return 0ULL;
    return FUNC_0() - VAR_0->monotonic;
}
