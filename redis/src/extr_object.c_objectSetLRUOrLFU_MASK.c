
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lru; } ;
typedef TYPE_1__ robj ;
struct TYPE_5__ {int maxmemory_policy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int) ;

int FUNC_2(robj *VAR_4, long long VAR_5, long long VAR_6,
                       long long VAR_7) {
    if (VAR_3.maxmemory_policy & VAR_2) {
        if (VAR_5 >= 0) {
            FUNC_1(VAR_5 <= 255);
            VAR_4->lru = (FUNC_0()<<8) | VAR_5;
            return 1;
        }
    } else if (VAR_6 >= 0) {




        VAR_6 = VAR_6*1000/VAR_1;
        long VAR_8 = VAR_7 - VAR_6;





        if (VAR_8 < 0)
            VAR_8 = (VAR_7+(VAR_0/2)) % VAR_0;
        VAR_4->lru = VAR_8;
        return 1;
    }
    return 0;
}
