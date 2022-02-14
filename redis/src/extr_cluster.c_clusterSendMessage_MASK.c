
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_7__ {int type; } ;
typedef TYPE_2__ clusterMsg ;
struct TYPE_8__ {int sndbuf; int conn; } ;
typedef TYPE_3__ clusterLink ;
struct TYPE_9__ {TYPE_1__* cluster; } ;
struct TYPE_6__ {int * stats_bus_messages_sent; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__ VAR_2 ;

void FUNC_4(clusterLink *VAR_3, unsigned char *VAR_4, size_t VAR_5) {
    if (FUNC_3(VAR_3->sndbuf) == 0 && VAR_5 != 0)
        FUNC_0(VAR_3->conn, VAR_1, 1);

    VAR_3->sndbuf = FUNC_2(VAR_3->sndbuf, VAR_4, VAR_5);


    clusterMsg *VAR_6 = (clusterMsg*) VAR_4;
    uint16_t VAR_7 = FUNC_1(VAR_6->type);
    if (VAR_7 < VAR_0)
        VAR_2.cluster->stats_bus_messages_sent[VAR_7]++;
}
