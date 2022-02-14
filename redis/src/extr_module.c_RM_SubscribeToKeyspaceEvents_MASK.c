
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int module; } ;
struct TYPE_6__ {int event_mask; scalar_t__ active; int notify_callback; int module; } ;
typedef int RedisModuleNotificationFunc ;
typedef TYPE_1__ RedisModuleKeyspaceSubscriber ;
typedef TYPE_2__ RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;

int FUNC_2(RedisModuleCtx *VAR_2, int VAR_3, RedisModuleNotificationFunc VAR_4) {
    RedisModuleKeyspaceSubscriber *VAR_5 = FUNC_1(sizeof(*VAR_5));
    VAR_5->module = VAR_2->module;
    VAR_5->event_mask = VAR_3;
    VAR_5->notify_callback = VAR_4;
    VAR_5->active = 0;

    FUNC_0(VAR_1, VAR_5);
    return VAR_0;
}
