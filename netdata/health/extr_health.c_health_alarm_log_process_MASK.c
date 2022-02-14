
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct TYPE_12__ {scalar_t__ unique_id; int flags; scalar_t__ delay_up_to_timestamp; struct TYPE_12__* next; } ;
struct TYPE_10__ {int count; int max; int alarm_log_rwlock; TYPE_3__* alarms; } ;
struct TYPE_11__ {scalar_t__ health_last_processed_id; TYPE_1__ health_log; } ;
typedef TYPE_2__ RRDHOST ;
typedef TYPE_3__ ALARM_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static inline void FUNC_10(RRDHOST *VAR_3) {
    uint32_t VAR_4 = (VAR_3->health_log.alarms)?VAR_3->health_log.alarms->unique_id:0;
    time_t VAR_5 = FUNC_8();

    FUNC_5(&VAR_3->health_log.alarm_log_rwlock);

    ALARM_ENTRY *VAR_6;
    for(VAR_6 = VAR_3->health_log.alarms; VAR_6 && VAR_6->unique_id >= VAR_3->health_last_processed_id; VAR_6 = VAR_6->next) {
        if(FUNC_4(!FUNC_0(VAR_3, VAR_6))) {
            if(FUNC_9(
                    !(VAR_6->flags & VAR_1) &&
                    !(VAR_6->flags & VAR_2)
            )) {
                if(FUNC_9(VAR_6->unique_id < VAR_4))
                    VAR_4 = VAR_6->unique_id;

                if(FUNC_4(VAR_5 >= VAR_6->delay_up_to_timestamp))
                    FUNC_3(VAR_3, VAR_6);
            }
        }
    }


    VAR_3->health_last_processed_id = VAR_4;

    FUNC_6(&VAR_3->health_log.alarm_log_rwlock);

    if(VAR_3->health_log.count <= VAR_3->health_log.max)
        return;


    FUNC_7(&VAR_3->health_log.alarm_log_rwlock);

    ALARM_ENTRY *VAR_7 = ((void*)0);
    unsigned int VAR_8 = VAR_3->health_log.max * 2 / 3;
    for(VAR_6 = VAR_3->health_log.alarms; VAR_6 && VAR_8 ; VAR_8--, VAR_7 = VAR_6, VAR_6 = VAR_6->next) ;

    if(VAR_6 && VAR_7 && VAR_7->next == VAR_6)
        VAR_7->next = ((void*)0);
    else
        VAR_6 = ((void*)0);

    while(VAR_6) {
        FUNC_1(VAR_0, "Health removing alarm log entry with id: %u", VAR_6->unique_id);

        ALARM_ENTRY *VAR_9 = VAR_6->next;

        if(FUNC_4(!FUNC_0(VAR_3, VAR_6))) {
            FUNC_2(VAR_6);
            VAR_3->health_log.count--;
        }

        VAR_6 = VAR_9;
    }

    FUNC_6(&VAR_3->health_log.alarm_log_rwlock);
}
