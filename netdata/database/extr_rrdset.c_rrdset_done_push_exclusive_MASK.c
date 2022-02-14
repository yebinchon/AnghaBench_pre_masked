
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int tv_sec; } ;
struct TYPE_10__ {int counter_done; TYPE_1__ last_collected_time; } ;
typedef TYPE_2__ RRDSET ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6(RRDSET *VAR_0) {
    if(FUNC_5(!VAR_0->last_collected_time.tv_sec)) {


        FUNC_1(VAR_0);
    }
    else {


        FUNC_4(VAR_0);
    }

    VAR_0->counter_done++;

    FUNC_2(VAR_0);
    FUNC_0(VAR_0);
    FUNC_3(VAR_0);
}
