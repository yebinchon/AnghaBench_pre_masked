
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* link; } ;
typedef TYPE_2__ sentinelRedisInstance ;
typedef int redisAsyncContext ;
typedef int name ;
struct TYPE_9__ {char* myid; } ;
struct TYPE_7__ {int pending_commands; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_2__*,char*,int ,char*) ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;

void FUNC_3(sentinelRedisInstance *VAR_3, redisAsyncContext *VAR_4, char *VAR_5) {
    char VAR_6[64];

    FUNC_2(VAR_6,sizeof(VAR_6),"sentinel-%.8s-%s",VAR_1.myid,VAR_5);
    if (FUNC_0(VAR_4, VAR_2, VAR_3,
        "%s SETNAME %s",
        FUNC_1(VAR_3,"CLIENT"),
        VAR_6) == VAR_0)
    {
        VAR_3->link->pending_commands++;
    }
}
