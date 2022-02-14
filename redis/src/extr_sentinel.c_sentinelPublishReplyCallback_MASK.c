
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int last_pub_time; } ;
typedef TYPE_1__ sentinelRedisInstance ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_8__ {TYPE_4__* data; } ;
typedef TYPE_3__ redisAsyncContext ;
struct TYPE_9__ {int pending_commands; } ;
typedef TYPE_4__ instanceLink ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(redisAsyncContext *VAR_1, void *VAR_2, void *VAR_3) {
    sentinelRedisInstance *VAR_4 = VAR_3;
    instanceLink *VAR_5 = VAR_1->data;
    redisReply *VAR_6;

    if (!VAR_2 || !VAR_5) return;
    VAR_5->pending_commands--;
    VAR_6 = VAR_2;



    if (VAR_6->type != VAR_0)
        VAR_4->last_pub_time = FUNC_0();
}
