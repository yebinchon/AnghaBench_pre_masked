
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sds ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_8__ {TYPE_1__* cluster; } ;
struct TYPE_6__ {int nodes; } ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 TYPE_3__ VAR_0 ;

sds FUNC_9(int VAR_1) {
    sds VAR_2 = FUNC_7(), VAR_3;
    dictIterator *VAR_4;
    dictEntry *VAR_5;

    VAR_4 = FUNC_1(VAR_0.cluster->nodes);
    while((VAR_5 = FUNC_3(VAR_4)) != ((void*)0)) {
        clusterNode *VAR_6 = FUNC_2(VAR_5);

        if (VAR_6->flags & VAR_1) continue;
        VAR_3 = FUNC_0(VAR_6);
        VAR_2 = FUNC_6(VAR_2,VAR_3);
        FUNC_8(VAR_3);
        VAR_2 = FUNC_5(VAR_2,"\n",1);
    }
    FUNC_4(VAR_4);
    return VAR_2;
}
