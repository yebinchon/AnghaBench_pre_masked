
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * module_blocked_pipe; } ;
struct TYPE_5__ {int unblocked; void* privdata; int blocked_on_keys; } ;
typedef TYPE_1__ RedisModuleBlockedClient ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4(RedisModuleBlockedClient *VAR_4, void *VAR_5) {
    FUNC_1(&VAR_2);
    if (!VAR_4->blocked_on_keys) VAR_4->privdata = VAR_5;
    VAR_4->unblocked = 1;
    FUNC_0(VAR_1,VAR_4);
    if (FUNC_3(VAR_3.module_blocked_pipe[1],"A",1) != 1) {

    }
    FUNC_2(&VAR_2);
    return VAR_0;
}
