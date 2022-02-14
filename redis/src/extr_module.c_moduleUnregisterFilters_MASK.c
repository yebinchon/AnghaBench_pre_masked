
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_8__ {int filters; } ;
typedef int RedisModuleCommandFilter ;
typedef TYPE_2__ RedisModule ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

int FUNC_5(RedisModule *VAR_1) {
    listIter VAR_2;
    listNode *VAR_3;
    int VAR_4 = 0;

    FUNC_2(VAR_1->filters,&VAR_2);
    while((VAR_3 = FUNC_1(&VAR_2))) {
        RedisModuleCommandFilter *VAR_5 = VAR_3->value;
        listNode *VAR_6 = FUNC_3(VAR_0,VAR_5);
        if (VAR_6) {
            FUNC_0(VAR_0,VAR_6);
            VAR_4++;
        }
        FUNC_4(VAR_5);
    }
    return VAR_4;
}
