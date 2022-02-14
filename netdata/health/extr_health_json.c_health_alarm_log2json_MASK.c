
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ unique_id; struct TYPE_9__* next; } ;
struct TYPE_7__ {unsigned int max; int alarm_log_rwlock; TYPE_3__* alarms; } ;
struct TYPE_8__ {TYPE_1__ health_log; } ;
typedef TYPE_2__ RRDHOST ;
typedef int BUFFER ;
typedef TYPE_3__ ALARM_ENTRY ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(RRDHOST *VAR_0, BUFFER *VAR_1, uint32_t VAR_2) {
    FUNC_3(&VAR_0->health_log.alarm_log_rwlock);

    FUNC_0(VAR_1, "[");

    unsigned int VAR_3 = VAR_0->health_log.max;
    unsigned int VAR_4 = 0;
    ALARM_ENTRY *VAR_5;
    for(VAR_5 = VAR_0->health_log.alarms; VAR_5 && VAR_4 < VAR_3 ; VAR_4++, VAR_5 = VAR_5->next) {
        if(VAR_5->unique_id > VAR_2) {
            if(FUNC_2(VAR_4)) FUNC_0(VAR_1, ",");
            FUNC_1(VAR_1, VAR_5, VAR_0);
        }
    }

    FUNC_0(VAR_1, "\n]\n");

    FUNC_4(&VAR_0->health_log.alarm_log_rwlock);
}
