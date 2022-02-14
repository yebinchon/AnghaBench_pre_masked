
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int name; } ;
typedef TYPE_4__ clusterNode ;
struct TYPE_9__ {TYPE_1__* gossip; } ;
struct TYPE_10__ {TYPE_2__ ping; } ;
struct TYPE_12__ {TYPE_3__ data; } ;
typedef TYPE_5__ clusterMsg ;
struct TYPE_8__ {int nodename; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

int FUNC_1(clusterMsg *VAR_1, int VAR_2, clusterNode *VAR_3) {
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        if (FUNC_0(VAR_1->data.ping.gossip[VAR_4].nodename,VAR_3->name,
                VAR_0) == 0) break;
    }
    return VAR_4 != VAR_2;
}
