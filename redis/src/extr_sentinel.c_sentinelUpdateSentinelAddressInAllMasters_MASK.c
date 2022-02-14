
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int addr; TYPE_5__* link; int runid; int sentinels; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_10__ {int * pc; int * cc; } ;
struct TYPE_9__ {int masters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (int ) ;
 TYPE_4__ VAR_2 ;
 int FUNC_8 (int ,char*,TYPE_1__*,char*,int) ;
 int FUNC_9 (int) ;

int FUNC_10(sentinelRedisInstance *VAR_3) {
    FUNC_9(VAR_3->flags & VAR_1);
    dictIterator *VAR_4;
    dictEntry *VAR_5;
    int VAR_6 = 0;

    VAR_4 = FUNC_0(VAR_2.masters);
    while((VAR_5 = FUNC_2(VAR_4)) != ((void*)0)) {
        sentinelRedisInstance *VAR_7 = FUNC_1(VAR_5), *VAR_8;
        VAR_8 = FUNC_5(VAR_7->sentinels,
                                                       ((void*)0),0,VAR_3->runid);


        if (VAR_8 == ((void*)0)) continue;


        if (VAR_8->link->cc != ((void*)0))
            FUNC_6(VAR_8->link,VAR_8->link->cc);
        if (VAR_8->link->pc != ((void*)0))
            FUNC_6(VAR_8->link,VAR_8->link->pc);

        if (VAR_8 == VAR_3) continue;



        FUNC_7(VAR_8->addr);
        VAR_8->addr = FUNC_4(VAR_3->addr);
        VAR_6++;
    }
    FUNC_3(VAR_4);
    if (VAR_6)
        FUNC_8(VAR_0,"+sentinel-address-update", VAR_3,
                    "%@ %d additional matching instances", VAR_6);
    return VAR_6;
}
