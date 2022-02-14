
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lru; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_10__ {int dict; } ;
typedef TYPE_2__ redisDb ;
typedef int dictEntry ;
struct TYPE_11__ {int maxmemory_policy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 () ;
 TYPE_4__ VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;

robj *FUNC_5(redisDb *VAR_3, robj *VAR_4, int VAR_5) {
    dictEntry *VAR_6 = FUNC_1(VAR_3->dict,VAR_4->ptr);
    if (VAR_6) {
        robj *VAR_7 = FUNC_2(VAR_6);




        if (!FUNC_3() && !(VAR_5 & VAR_0)){
            if (VAR_2.maxmemory_policy & VAR_1) {
                FUNC_4(VAR_7);
            } else {
                VAR_7->lru = FUNC_0();
            }
        }
        return VAR_7;
    } else {
        return ((void*)0);
    }
}
