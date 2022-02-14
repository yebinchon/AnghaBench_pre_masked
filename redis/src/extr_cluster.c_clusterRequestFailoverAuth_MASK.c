
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union clusterMsgData {int dummy; } clusterMsgData ;
typedef int uint32_t ;
struct TYPE_7__ {int totlen; int * mflags; } ;
typedef TYPE_2__ clusterMsg ;
struct TYPE_8__ {TYPE_1__* cluster; } ;
struct TYPE_6__ {scalar_t__ mf_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int) ;
 TYPE_3__ VAR_2 ;

void FUNC_3(void) {
    clusterMsg VAR_3[1];
    clusterMsg *VAR_4 = (clusterMsg*) VAR_3;
    uint32_t VAR_5;

    FUNC_1(VAR_4,VAR_1);



    if (VAR_2.cluster->mf_end) VAR_4->mflags[0] |= VAR_0;
    VAR_5 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
    VAR_4->totlen = FUNC_2(VAR_5);
    FUNC_0(VAR_3,VAR_5);
}
