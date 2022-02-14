
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; TYPE_4__* link; int * runid; int sentinels; struct TYPE_7__* master; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_9__ {int refcount; } ;
struct TYPE_8__ {int masters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int ,int *,int ,int *) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 TYPE_3__ VAR_3 ;
 int FUNC_6 (int) ;

int FUNC_7(sentinelRedisInstance *VAR_4) {
    FUNC_6(VAR_4->flags & VAR_2);
    dictIterator *VAR_5;
    dictEntry *VAR_6;

    if (VAR_4->runid == ((void*)0)) return VAR_0;
    if (VAR_4->link->refcount > 1) return VAR_0;

    VAR_5 = FUNC_0(VAR_3.masters);
    while((VAR_6 = FUNC_2(VAR_5)) != ((void*)0)) {
        sentinelRedisInstance *VAR_7 = FUNC_1(VAR_6), *VAR_8;


        if (VAR_7 == VAR_4->master) continue;
        VAR_8 = FUNC_4(VAR_7->sentinels,
                                                       ((void*)0),0,VAR_4->runid);
        if (VAR_8 == ((void*)0)) continue;
        if (VAR_8 == VAR_4) continue;



        FUNC_5(VAR_4->link,((void*)0));
        VAR_4->link = VAR_8->link;
        VAR_8->link->refcount++;
        return VAR_1;
    }
    FUNC_3(VAR_5);
    return VAR_0;
}
