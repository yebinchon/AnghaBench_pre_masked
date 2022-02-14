
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_8__ {int id; } ;
typedef TYPE_1__ redisDb ;
struct TYPE_9__ {scalar_t__ lazyfree_lazy_expire; int stat_expiredkeys; int * masterhost; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,char*,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__) ;
 TYPE_2__ VAR_1 ;

int FUNC_5(redisDb *VAR_2, robj *VAR_3) {
    if (!FUNC_2(VAR_2,VAR_3)) return 0;
    if (VAR_1.masterhost != ((void*)0)) return 1;


    VAR_1.stat_expiredkeys++;
    FUNC_4(VAR_2,VAR_3,VAR_1.lazyfree_lazy_expire);
    FUNC_3(VAR_0,
        "expired",VAR_3,VAR_2->id);
    return VAR_1.lazyfree_lazy_expire ? FUNC_0(VAR_2,VAR_3) :
                                         FUNC_1(VAR_2,VAR_3);
}
