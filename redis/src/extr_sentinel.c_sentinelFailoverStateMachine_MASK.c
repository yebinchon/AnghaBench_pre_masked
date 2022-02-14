
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int failover_state; } ;
typedef TYPE_1__ sentinelRedisInstance ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;

void FUNC_6(sentinelRedisInstance *VAR_2) {
    FUNC_5(VAR_2->flags & VAR_1);

    if (!(VAR_2->flags & VAR_0)) return;

    switch(VAR_2->failover_state) {
        case 128:
            FUNC_4(VAR_2);
            break;
        case 131:
            FUNC_1(VAR_2);
            break;
        case 130:
            FUNC_2(VAR_2);
            break;
        case 129:
            FUNC_3(VAR_2);
            break;
        case 132:
            FUNC_0(VAR_2);
            break;
    }
}
