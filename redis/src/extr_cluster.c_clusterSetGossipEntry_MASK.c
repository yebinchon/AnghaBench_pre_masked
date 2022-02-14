
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ping_sent; int pong_received; int flags; int cport; int port; int ip; int name; } ;
typedef TYPE_3__ clusterNode ;
struct TYPE_11__ {scalar_t__ notused1; void* flags; void* cport; void* port; int ip; void* pong_received; void* ping_sent; int nodename; } ;
typedef TYPE_4__ clusterMsgDataGossip ;
struct TYPE_8__ {TYPE_4__* gossip; } ;
struct TYPE_9__ {TYPE_1__ ping; } ;
struct TYPE_12__ {TYPE_2__ data; } ;
typedef TYPE_5__ clusterMsg ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(clusterMsg *VAR_1, int VAR_2, clusterNode *VAR_3) {
    clusterMsgDataGossip *VAR_4;
    VAR_4 = &(VAR_1->data.ping.gossip[VAR_2]);
    FUNC_2(VAR_4->nodename,VAR_3->name,VAR_0);
    VAR_4->ping_sent = FUNC_0(VAR_3->ping_sent/1000);
    VAR_4->pong_received = FUNC_0(VAR_3->pong_received/1000);
    FUNC_2(VAR_4->ip,VAR_3->ip,sizeof(VAR_3->ip));
    VAR_4->port = FUNC_1(VAR_3->port);
    VAR_4->cport = FUNC_1(VAR_3->cport);
    VAR_4->flags = FUNC_1(VAR_3->flags);
    VAR_4->notused1 = 0;
}
