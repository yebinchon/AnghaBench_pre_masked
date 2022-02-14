
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct AutoMemEntry {int dummy; } ;
struct TYPE_6__ {int type; void* ptr; } ;
struct TYPE_5__ {int flags; int amqueue_used; int amqueue_len; TYPE_2__* amqueue; } ;
typedef TYPE_1__ RedisModuleCtx ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int) ;

void FUNC_1(RedisModuleCtx *VAR_1, int VAR_2, void *VAR_3) {
    if (!(VAR_1->flags & VAR_0)) return;
    if (VAR_1->amqueue_used == VAR_1->amqueue_len) {
        VAR_1->amqueue_len *= 2;
        if (VAR_1->amqueue_len < 16) VAR_1->amqueue_len = 16;
        VAR_1->amqueue = FUNC_0(VAR_1->amqueue,sizeof(struct AutoMemEntry)*VAR_1->amqueue_len);
    }
    VAR_1->amqueue[VAR_1->amqueue_used].type = VAR_2;
    VAR_1->amqueue[VAR_1->amqueue_used].ptr = VAR_3;
    VAR_1->amqueue_used++;
}
