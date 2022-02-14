
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct redisCommand {scalar_t__ proc; scalar_t__ getkeys_proc; } ;
struct RedisModule {int dummy; } ;
typedef int sds ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_5__ {int orig_commands; int commands; } ;
struct TYPE_4__ {struct TYPE_4__* rediscmd; struct RedisModule* module; int name; } ;
typedef TYPE_1__ RedisModuleCommandProxy ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ) ;
 struct redisCommand* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(struct RedisModule *VAR_2) {

    dictIterator *VAR_3 = FUNC_1(VAR_1.commands);
    dictEntry *VAR_4;
    while ((VAR_4 = FUNC_3(VAR_3)) != ((void*)0)) {
        struct redisCommand *VAR_5 = FUNC_2(VAR_4);
        if (VAR_5->proc == VAR_0) {
            RedisModuleCommandProxy *VAR_6 =
                (void*)(unsigned long)VAR_5->getkeys_proc;
            sds VAR_7 = VAR_6->rediscmd->name;
            if (VAR_6->module == VAR_2) {
                FUNC_0(VAR_1.commands,VAR_7);
                FUNC_0(VAR_1.orig_commands,VAR_7);
                FUNC_5(VAR_7);
                FUNC_6(VAR_6->rediscmd);
                FUNC_6(VAR_6);
            }
        }
    }
    FUNC_4(VAR_3);
}
