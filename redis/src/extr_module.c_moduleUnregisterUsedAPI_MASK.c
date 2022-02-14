
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_9__ {int using; int usedby; } ;
typedef TYPE_2__ RedisModule ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int ,TYPE_2__*) ;

int FUNC_4(RedisModule *VAR_0) {
    listIter VAR_1;
    listNode *VAR_2;
    int VAR_3 = 0;

    FUNC_2(VAR_0->using,&VAR_1);
    while((VAR_2 = FUNC_1(&VAR_1))) {
        RedisModule *VAR_4 = VAR_2->value;
        listNode *VAR_5 = FUNC_3(VAR_4->usedby,VAR_0);
        if (VAR_5) {
            FUNC_0(VAR_0->using,VAR_5);
            VAR_3++;
        }
    }
    return VAR_3;
}
