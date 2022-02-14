
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct redisCommand {scalar_t__ getkeys_proc; } ;
typedef int robj ;
struct TYPE_7__ {int (* func ) (TYPE_1__*,void**,int) ;int module; } ;
struct TYPE_6__ {int* keys_pos; int keys_count; int flags; int * client; int module; } ;
typedef TYPE_1__ RedisModuleCtx ;
typedef TYPE_2__ RedisModuleCommandProxy ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void**,int) ;

int *FUNC_2(struct redisCommand *VAR_2, robj **VAR_3, int VAR_4, int *VAR_5) {
    RedisModuleCommandProxy *VAR_6 = (void*)(unsigned long)VAR_2->getkeys_proc;
    RedisModuleCtx VAR_7 = VAR_0;

    VAR_7.module = VAR_6->module;
    VAR_7.client = ((void*)0);
    VAR_7.flags |= VAR_1;
    VAR_6->func(&VAR_7,(void**)VAR_3,VAR_4);
    int *VAR_8 = VAR_7.keys_pos;
    if (VAR_5) *VAR_5 = VAR_7.keys_count;
    FUNC_0(&VAR_7);
    return VAR_8;
}
