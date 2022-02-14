
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union clusterMsgData {int dummy; } clusterMsgData ;
typedef int uint32_t ;
struct TYPE_5__ {int link; } ;
typedef TYPE_1__ clusterNode ;
struct TYPE_6__ {int totlen; } ;
typedef TYPE_2__ clusterMsg ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(clusterNode *VAR_1) {
    clusterMsg VAR_2[1];
    clusterMsg *VAR_3 = (clusterMsg*) VAR_2;
    uint32_t VAR_4;

    if (!VAR_1->link) return;
    FUNC_0(VAR_3,VAR_0);
    VAR_4 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
    VAR_3->totlen = FUNC_2(VAR_4);
    FUNC_1(VAR_1->link,(unsigned char*)VAR_2,VAR_4);
}
