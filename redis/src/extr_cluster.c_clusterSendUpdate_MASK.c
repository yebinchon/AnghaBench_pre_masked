
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int slots; int configEpoch; int name; } ;
typedef TYPE_4__ clusterNode ;
struct TYPE_8__ {int slots; int configEpoch; int nodename; } ;
struct TYPE_10__ {TYPE_1__ nodecfg; } ;
struct TYPE_9__ {TYPE_3__ update; } ;
struct TYPE_12__ {int totlen; TYPE_2__ data; } ;
typedef TYPE_5__ clusterMsg ;
typedef int clusterLink ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int *,unsigned char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

void FUNC_5(clusterLink *VAR_2, clusterNode *VAR_3) {
    clusterMsg VAR_4[1];
    clusterMsg *VAR_5 = (clusterMsg*) VAR_4;

    if (VAR_2 == ((void*)0)) return;
    FUNC_0(VAR_5,VAR_0);
    FUNC_3(VAR_5->data.update.nodecfg.nodename,VAR_3->name,VAR_1);
    VAR_5->data.update.nodecfg.configEpoch = FUNC_2(VAR_3->configEpoch);
    FUNC_3(VAR_5->data.update.nodecfg.slots,VAR_3->slots,sizeof(VAR_3->slots));
    FUNC_1(VAR_2,(unsigned char*)VAR_4,FUNC_4(VAR_5->totlen));
}
