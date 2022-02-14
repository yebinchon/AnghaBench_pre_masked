
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int robj ;
struct TYPE_7__ {int * value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_8__ {int pubsub_patterns; } ;
typedef TYPE_2__ client ;


 int FUNC_0 (TYPE_2__*,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int) ;

int FUNC_4(client *VAR_0, int VAR_1) {
    listNode *VAR_2;
    listIter VAR_3;
    int VAR_4 = 0;

    FUNC_2(VAR_0->pubsub_patterns,&VAR_3);
    while ((VAR_2 = FUNC_1(&VAR_3)) != ((void*)0)) {
        robj *VAR_5 = VAR_2->value;

        VAR_4 += FUNC_3(VAR_0,VAR_5,VAR_1);
    }
    if (VAR_1 && VAR_4 == 0) FUNC_0(VAR_0,((void*)0));
    return VAR_4;
}
