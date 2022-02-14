
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int robj ;
typedef int listNode ;
typedef int list ;
typedef int dictEntry ;
struct TYPE_7__ {int pubsub_channels; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int pubsub_channels; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *,TYPE_1__*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_9 (TYPE_1__*,int *,int ) ;

int FUNC_10(client *VAR_2, robj *VAR_3, int VAR_4) {
    dictEntry *VAR_5;
    list *VAR_6;
    listNode *VAR_7;
    int VAR_8 = 0;


    FUNC_5(VAR_3);

    if (FUNC_2(VAR_2->pubsub_channels,VAR_3) == VAR_0) {
        VAR_8 = 1;

        VAR_5 = FUNC_3(VAR_1.pubsub_channels,VAR_3);
        FUNC_9(VAR_2,((void*)0),VAR_5 != ((void*)0));
        VAR_6 = FUNC_4(VAR_5);
        VAR_7 = FUNC_8(VAR_6,VAR_2);
        FUNC_9(VAR_2,((void*)0),VAR_7 != ((void*)0));
        FUNC_6(VAR_6,VAR_7);
        if (FUNC_7(VAR_6) == 0) {



            FUNC_2(VAR_1.pubsub_channels,VAR_3);
        }
    }

    if (VAR_4) FUNC_0(VAR_2,VAR_3);
    FUNC_1(VAR_3);
    return VAR_8;
}
