
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int toport ;
struct TYPE_6__ {int name; int * client_reconfig_script; } ;
typedef TYPE_1__ sentinelRedisInstance ;
struct TYPE_7__ {int ip; int port; } ;
typedef TYPE_2__ sentinelAddr ;
typedef int fromport ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int *,int ,char*,char*,int ,char*,int ,char*,int *) ;

void FUNC_2(sentinelRedisInstance *VAR_1, int VAR_2, char *VAR_3, sentinelAddr *VAR_4, sentinelAddr *VAR_5) {
    char VAR_6[32], VAR_7[32];

    if (VAR_1->client_reconfig_script == ((void*)0)) return;
    FUNC_0(VAR_6,sizeof(VAR_6),VAR_4->port);
    FUNC_0(VAR_7,sizeof(VAR_7),VAR_5->port);
    FUNC_1(VAR_1->client_reconfig_script,
        VAR_1->name,
        (VAR_2 == VAR_0) ? "leader" : "observer",
        VAR_3, VAR_4->ip, VAR_6, VAR_5->ip, VAR_7, ((void*)0));
}
