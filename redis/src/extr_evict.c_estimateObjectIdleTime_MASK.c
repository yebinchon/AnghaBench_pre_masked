
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long lru; } ;
typedef TYPE_1__ robj ;


 unsigned long long FUNC_0 () ;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;

unsigned long long FUNC_1(robj *VAR_2) {
    unsigned long long VAR_3 = FUNC_0();
    if (VAR_3 >= VAR_2->lru) {
        return (VAR_3 - VAR_2->lru) * VAR_1;
    } else {
        return (VAR_3 + (VAR_0 - VAR_2->lru)) *
                    VAR_1;
    }
}
