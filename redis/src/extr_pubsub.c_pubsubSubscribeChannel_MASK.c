
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int robj ;
typedef int list ;
typedef int dictEntry ;
struct TYPE_6__ {int pubsub_channels; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int pubsub_channels; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int * FUNC_6 () ;
 TYPE_2__ VAR_1 ;

int FUNC_7(client *VAR_2, robj *VAR_3) {
    dictEntry *VAR_4;
    list *VAR_5 = ((void*)0);
    int VAR_6 = 0;


    if (FUNC_1(VAR_2->pubsub_channels,VAR_3,((void*)0)) == VAR_0) {
        VAR_6 = 1;
        FUNC_4(VAR_3);

        VAR_4 = FUNC_2(VAR_1.pubsub_channels,VAR_3);
        if (VAR_4 == ((void*)0)) {
            VAR_5 = FUNC_6();
            FUNC_1(VAR_1.pubsub_channels,VAR_3,VAR_5);
            FUNC_4(VAR_3);
        } else {
            VAR_5 = FUNC_3(VAR_4);
        }
        FUNC_5(VAR_5,VAR_2);
    }

    FUNC_0(VAR_2,VAR_3);
    return VAR_6;
}
