
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; void* ptr; } ;
struct TYPE_4__ {int flags; int amqueue_used; scalar_t__ amqueue_len; TYPE_2__* amqueue; } ;
typedef TYPE_1__ RedisModuleCtx ;






 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(RedisModuleCtx *VAR_1) {
    if (!(VAR_1->flags & VAR_0)) return;



    VAR_1->flags &= ~VAR_0;
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->amqueue_used; VAR_2++) {
        void *VAR_3 = VAR_1->amqueue[VAR_2].ptr;
        switch(VAR_1->amqueue[VAR_2].type) {
        case 128: FUNC_3(VAR_3); break;
        case 129: FUNC_1(VAR_3); break;
        case 130: FUNC_0(VAR_3); break;
        case 131: FUNC_2(((void*)0),VAR_3); break;
        }
    }
    VAR_1->flags |= VAR_0;
    FUNC_4(VAR_1->amqueue);
    VAR_1->amqueue = ((void*)0);
    VAR_1->amqueue_len = 0;
    VAR_1->amqueue_used = 0;
}
