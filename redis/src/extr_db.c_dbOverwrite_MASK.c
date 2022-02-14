
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int lru; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_12__ {int dict; } ;
typedef TYPE_2__ redisDb ;
typedef int dictEntry ;
struct TYPE_13__ {int maxmemory_policy; scalar_t__ lazyfree_lazy_server_del; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_4__ VAR_1 ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;

void FUNC_6(redisDb *VAR_2, robj *VAR_3, robj *VAR_4) {
    dictEntry *VAR_5 = FUNC_0(VAR_2->dict,VAR_3->ptr);

    FUNC_5(((void*)0),VAR_3,VAR_5 != ((void*)0));
    dictEntry VAR_6 = *VAR_5;
    robj *VAR_7 = FUNC_2(VAR_5);
    if (VAR_1.maxmemory_policy & VAR_0) {
        VAR_4->lru = VAR_7->lru;
    }
    FUNC_3(VAR_2->dict, VAR_5, VAR_4);

    if (VAR_1.lazyfree_lazy_server_del) {
        FUNC_4(VAR_7);
        FUNC_3(VAR_2->dict, &VAR_6, ((void*)0));
    }

    FUNC_1(VAR_2->dict, &VAR_6);
}
