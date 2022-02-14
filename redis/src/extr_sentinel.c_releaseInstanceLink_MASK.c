
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_14__ {TYPE_1__* link; } ;
typedef TYPE_2__ sentinelRedisInstance ;
struct TYPE_15__ {TYPE_4__* head; } ;
typedef TYPE_3__ redisCallbackList ;
struct TYPE_16__ {struct TYPE_16__* next; TYPE_2__* privdata; int fn; } ;
typedef TYPE_4__ redisCallback ;
struct TYPE_17__ {scalar_t__ refcount; TYPE_11__* pc; TYPE_11__* cc; } ;
typedef TYPE_5__ instanceLink ;
struct TYPE_13__ {scalar_t__ cc; } ;
struct TYPE_12__ {TYPE_3__ replies; } ;


 int FUNC_0 (TYPE_5__*,TYPE_11__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;

instanceLink *FUNC_3(instanceLink *VAR_1, sentinelRedisInstance *VAR_2)
{
    FUNC_1(VAR_1->refcount > 0);
    VAR_1->refcount--;
    if (VAR_1->refcount != 0) {
        if (VAR_2 && VAR_2->link->cc) {





            redisCallback *VAR_3;
            redisCallbackList *VAR_4 = &VAR_1->cc->replies;

            VAR_3 = VAR_4->head;
            while(VAR_3) {
                if (VAR_3->privdata == VAR_2) {
                    VAR_3->fn = VAR_0;
                    VAR_3->privdata = ((void*)0);
                }
                VAR_3 = VAR_3->next;
            }
        }
        return VAR_1;
    }

    FUNC_0(VAR_1,VAR_1->cc);
    FUNC_0(VAR_1,VAR_1->pc);
    FUNC_2(VAR_1);
    return ((void*)0);
}
