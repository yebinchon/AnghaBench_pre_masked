
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* addr; int name; struct TYPE_7__* promoted_slave; } ;
typedef TYPE_2__ sentinelRedisInstance ;
struct TYPE_6__ {int port; int ip; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,TYPE_2__*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

void FUNC_2(sentinelRedisInstance *VAR_1) {
    sentinelRedisInstance *VAR_2 = VAR_1->promoted_slave ?
                                 VAR_1->promoted_slave : VAR_1;

    FUNC_0(VAR_0,"+switch-master",VAR_1,"%s %s %d %s %d",
        VAR_1->name, VAR_1->addr->ip, VAR_1->addr->port,
        VAR_2->addr->ip, VAR_2->addr->port);

    FUNC_1(VAR_1,VAR_2->addr->ip,VAR_2->addr->port);
}
