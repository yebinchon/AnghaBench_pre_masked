
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; TYPE_1__* master; int renamed_commands; int addr; int info; int auth_pass; int leader; int slave_master_host; int client_reconfig_script; int notification_script; int runid; int name; int link; int slaves; int sentinels; } ;
typedef TYPE_2__ sentinelRedisInstance ;
struct TYPE_6__ {int * promoted_slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(sentinelRedisInstance *VAR_2) {

    FUNC_0(VAR_2->sentinels);
    FUNC_0(VAR_2->slaves);


    FUNC_1(VAR_2->link,VAR_2);


    FUNC_3(VAR_2->name);
    FUNC_3(VAR_2->runid);
    FUNC_3(VAR_2->notification_script);
    FUNC_3(VAR_2->client_reconfig_script);
    FUNC_3(VAR_2->slave_master_host);
    FUNC_3(VAR_2->leader);
    FUNC_3(VAR_2->auth_pass);
    FUNC_3(VAR_2->info);
    FUNC_2(VAR_2->addr);
    FUNC_0(VAR_2->renamed_commands);


    if ((VAR_2->flags & VAR_1) && (VAR_2->flags & VAR_0) && VAR_2->master)
        VAR_2->master->promoted_slave = ((void*)0);

    FUNC_4(VAR_2);
}
