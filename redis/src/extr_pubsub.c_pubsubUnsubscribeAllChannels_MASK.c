
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int robj ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_5__ {int pubsub_channels; } ;
typedef TYPE_1__ client ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int) ;

int FUNC_6(client *VAR_0, int VAR_1) {
    dictIterator *VAR_2 = FUNC_2(VAR_0->pubsub_channels);
    dictEntry *VAR_3;
    int VAR_4 = 0;

    while((VAR_3 = FUNC_3(VAR_2)) != ((void*)0)) {
        robj *VAR_5 = FUNC_1(VAR_3);

        VAR_4 += FUNC_5(VAR_0,VAR_5,VAR_1);
    }

    if (VAR_1 && VAR_4 == 0) FUNC_0(VAR_0,((void*)0));
    FUNC_4(VAR_2);
    return VAR_4;
}
