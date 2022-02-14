
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* pattern; TYPE_3__* client; } ;
typedef TYPE_1__ robj ;
typedef TYPE_1__ pubsubPattern ;
typedef int listNode ;
struct TYPE_13__ {int pubsub_patterns; } ;
typedef TYPE_3__ client ;
struct TYPE_14__ {int pubsub_patterns; } ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,TYPE_1__*) ;
 TYPE_4__ VAR_0 ;

int FUNC_5(client *VAR_1, robj *VAR_2, int VAR_3) {
    listNode *VAR_4;
    pubsubPattern VAR_5;
    int VAR_6 = 0;

    FUNC_2(VAR_2);
    if ((VAR_4 = FUNC_4(VAR_1->pubsub_patterns,VAR_2)) != ((void*)0)) {
        VAR_6 = 1;
        FUNC_3(VAR_1->pubsub_patterns,VAR_4);
        VAR_5.client = VAR_1;
        VAR_5.pattern = VAR_2;
        VAR_4 = FUNC_4(VAR_0.pubsub_patterns,&VAR_5);
        FUNC_3(VAR_0.pubsub_patterns,VAR_4);
    }

    if (VAR_3) FUNC_0(VAR_1,VAR_2);
    FUNC_1(VAR_2);
    return VAR_6;
}
