
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int expires; int dict; } ;
typedef TYPE_1__ redisDb ;
struct TYPE_9__ {int dbnum; scalar_t__ cluster_enabled; } ;
struct TYPE_8__ {int member_1; int member_2; int member_0; } ;
typedef TYPE_2__ RedisModuleFlushInfoV1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,void (*) (void*)) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 TYPE_3__ VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

long long FUNC_8(redisDb *VAR_8, int VAR_9, int VAR_10, void(VAR_11)(void*)) {
    int VAR_12 = (VAR_10 & VAR_1);
    long long VAR_13 = 0;

    if (VAR_9 < -1 || VAR_9 >= VAR_7.dbnum) {
        VAR_6 = VAR_0;
        return -1;
    }


    RedisModuleFlushInfoV1 VAR_14 = {VAR_3,!VAR_12,VAR_9};
    FUNC_4(VAR_2,
                          VAR_5,
                          &VAR_14);




    FUNC_5(VAR_9);

    int VAR_15, VAR_16;
    if (VAR_9 == -1) {
        VAR_15 = 0;
        VAR_16 = VAR_7.dbnum-1;
    } else {
        VAR_15 = VAR_16 = VAR_9;
    }

    for (int VAR_17 = VAR_15; VAR_17 <= VAR_16; VAR_17++) {
        VAR_13 += FUNC_1(VAR_8[VAR_17].dict);
        if (VAR_12) {
            FUNC_2(&VAR_8[VAR_17]);
        } else {
            FUNC_0(VAR_8[VAR_17].dict,VAR_11);
            FUNC_0(VAR_8[VAR_17].expires,VAR_11);
        }
    }
    if (VAR_7.cluster_enabled) {
        if (VAR_12) {
            FUNC_7();
        } else {
            FUNC_6();
        }
    }
    if (VAR_9 == -1) FUNC_3();



    FUNC_4(VAR_2,
                          VAR_4,
                          &VAR_14);

    return VAR_13;
}
