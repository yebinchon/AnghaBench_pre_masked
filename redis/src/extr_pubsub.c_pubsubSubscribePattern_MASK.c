
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* client; int pattern; } ;
typedef TYPE_1__ robj ;
typedef TYPE_1__ pubsubPattern ;
struct TYPE_15__ {int pubsub_patterns; } ;
typedef TYPE_3__ client ;
struct TYPE_16__ {int pubsub_patterns; } ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int * FUNC_4 (int ,TYPE_1__*) ;
 TYPE_5__ VAR_0 ;
 TYPE_1__* FUNC_5 (int) ;

int FUNC_6(client *VAR_1, robj *VAR_2) {
    int VAR_3 = 0;

    if (FUNC_4(VAR_1->pubsub_patterns,VAR_2) == ((void*)0)) {
        VAR_3 = 1;
        pubsubPattern *VAR_4;
        FUNC_3(VAR_1->pubsub_patterns,VAR_2);
        FUNC_2(VAR_2);
        VAR_4 = FUNC_5(sizeof(*VAR_4));
        VAR_4->pattern = FUNC_1(VAR_2);
        VAR_4->client = VAR_1;
        FUNC_3(VAR_0.pubsub_patterns,VAR_4);
    }

    FUNC_0(VAR_1,VAR_2);
    return VAR_3;
}
