
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sds ;
typedef int robj ;
struct TYPE_7__ {int id; } ;
typedef TYPE_1__ redisDb ;
typedef int dictEntry ;
struct TYPE_8__ {int stat_expiredkeys; scalar_t__ lazyfree_lazy_expire; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long long FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int *,int ) ;
 int FUNC_7 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_8 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_9 (int *) ;

int FUNC_10(redisDb *VAR_2, dictEntry *VAR_3, long long VAR_4) {
    long long VAR_5 = FUNC_5(VAR_3);
    if (VAR_4 > VAR_5) {
        sds VAR_6 = FUNC_4(VAR_3);
        robj *VAR_7 = FUNC_0(VAR_6,FUNC_8(VAR_6));

        FUNC_7(VAR_2,VAR_7,VAR_1.lazyfree_lazy_expire);
        if (VAR_1.lazyfree_lazy_expire)
            FUNC_1(VAR_2,VAR_7);
        else
            FUNC_2(VAR_2,VAR_7);
        FUNC_6(VAR_0,
            "expired",VAR_7,VAR_2->id);
        FUNC_9(VAR_7);
        FUNC_3(VAR_7);
        VAR_1.stat_expiredkeys++;
        return 1;
    } else {
        return 0;
    }
}
