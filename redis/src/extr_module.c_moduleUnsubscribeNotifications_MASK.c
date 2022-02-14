
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_7__ {int * module; } ;
typedef TYPE_2__ RedisModuleKeyspaceSubscriber ;
typedef int RedisModule ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(RedisModule *VAR_1) {
    listIter VAR_2;
    listNode *VAR_3;
    FUNC_2(VAR_0,&VAR_2);
    while((VAR_3 = FUNC_1(&VAR_2))) {
        RedisModuleKeyspaceSubscriber *VAR_4 = VAR_3->value;
        if (VAR_4->module == VAR_1) {
            FUNC_0(VAR_0, VAR_3);
            FUNC_3(VAR_4);
        }
    }
}
