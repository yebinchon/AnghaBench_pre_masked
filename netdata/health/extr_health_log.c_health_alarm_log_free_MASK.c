
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* next; } ;
struct TYPE_7__ {int alarm_log_rwlock; TYPE_3__* alarms; } ;
struct TYPE_8__ {TYPE_1__ health_log; } ;
typedef TYPE_2__ RRDHOST ;
typedef TYPE_3__ ALARM_ENTRY ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

inline void FUNC_4(RRDHOST *VAR_0) {
    FUNC_3(VAR_0);

    FUNC_2(&VAR_0->health_log.alarm_log_rwlock);

    ALARM_ENTRY *VAR_1;
    while((VAR_1 = VAR_0->health_log.alarms)) {
        VAR_0->health_log.alarms = VAR_1->next;
        FUNC_0(VAR_1);
    }

    FUNC_1(&VAR_0->health_log.alarm_log_rwlock);
}
