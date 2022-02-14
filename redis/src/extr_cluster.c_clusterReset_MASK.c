
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sds ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_11__ {int name; scalar_t__ configEpoch; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_12__ {TYPE_1__* cluster; } ;
struct TYPE_10__ {int nodes; scalar_t__ lastVoteEpoch; scalar_t__ currentEpoch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int ,int *) ;
 int FUNC_12 (int ,int ) ;
 TYPE_2__* VAR_8 ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 TYPE_3__ VAR_9 ;
 int FUNC_18 (int ,char*,...) ;

void FUNC_19(int VAR_10) {
    dictIterator *VAR_11;
    dictEntry *VAR_12;
    int VAR_13;


    if (FUNC_13(VAR_8)) {
        FUNC_5(VAR_8);
        FUNC_14();
        FUNC_11(-1,VAR_5,((void*)0));
    }


    FUNC_1();
    FUNC_15();


    for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) FUNC_3(VAR_13);


    VAR_11 = FUNC_7(VAR_9.cluster->nodes);
    while((VAR_12 = FUNC_9(VAR_11)) != ((void*)0)) {
        clusterNode *VAR_14 = FUNC_8(VAR_12);

        if (VAR_14 == VAR_8) continue;
        FUNC_2(VAR_14);
    }
    FUNC_10(VAR_11);


    if (VAR_10) {
        sds VAR_15;

        VAR_9.cluster->currentEpoch = 0;
        VAR_9.cluster->lastVoteEpoch = 0;
        VAR_8->configEpoch = 0;
        FUNC_18(VAR_7, "configEpoch set to 0 via CLUSTER RESET HARD");



        VAR_15 = FUNC_17(VAR_8->name, VAR_0);
        FUNC_6(VAR_9.cluster->nodes,VAR_15);
        FUNC_16(VAR_15);
        FUNC_12(VAR_8->name, VAR_0);
        FUNC_0(VAR_8);
        FUNC_18(VAR_6,"Node hard reset, now I'm %.40s", VAR_8->name);
    }


    FUNC_4(VAR_3|
                         VAR_4|
                         VAR_2);
}
