
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sentinelRedisInstance ;
struct TYPE_5__ {scalar_t__ type; int str; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_6__ {TYPE_3__* data; } ;
typedef TYPE_2__ redisAsyncContext ;
struct TYPE_7__ {int pending_commands; } ;
typedef TYPE_3__ instanceLink ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(redisAsyncContext *VAR_1, void *VAR_2, void *VAR_3) {
    sentinelRedisInstance *VAR_4 = VAR_3;
    instanceLink *VAR_5 = VAR_1->data;
    redisReply *VAR_6;

    if (!VAR_2 || !VAR_5) return;
    VAR_5->pending_commands--;
    VAR_6 = VAR_2;

    if (VAR_6->type == VAR_0)
        FUNC_0(VAR_4,VAR_6->str);
}
