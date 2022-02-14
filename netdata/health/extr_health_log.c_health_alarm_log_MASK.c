
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ alarm_id; int flags; scalar_t__ new_status; scalar_t__ old_status; scalar_t__ non_clear_duration; scalar_t__ unique_id; scalar_t__ updates_id; scalar_t__ updated_by_id; struct TYPE_12__* next; } ;
struct TYPE_10__ {int alarm_log_rwlock; TYPE_3__* alarms; int count; } ;
struct TYPE_11__ {TYPE_1__ health_log; } ;
typedef TYPE_2__ RRDHOST ;
typedef TYPE_3__ ALARM_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

inline void FUNC_8(
        RRDHOST *VAR_4,
        ALARM_ENTRY *VAR_5
) {
    FUNC_1(VAR_0, "Health adding alarm log entry with id: %u", VAR_5->unique_id);

    if(FUNC_7(FUNC_0(VAR_4, VAR_5))) {
        FUNC_2("Repeating alarms cannot be added to host's alarm log entries. It seems somewhere in the logic, API is being misused. Alarm id: %u", VAR_5->alarm_id);
        return;
    }

    FUNC_6(&VAR_4->health_log.alarm_log_rwlock);
    VAR_5->next = VAR_4->health_log.alarms;
    VAR_4->health_log.alarms = VAR_5;
    VAR_4->health_log.count++;
    FUNC_5(&VAR_4->health_log.alarm_log_rwlock);


    FUNC_4(&VAR_4->health_log.alarm_log_rwlock);
    ALARM_ENTRY *VAR_6;
    for(VAR_6 = VAR_4->health_log.alarms ; VAR_6 ; VAR_6 = VAR_6->next) {
        if(VAR_6 != VAR_5 && VAR_6->alarm_id == VAR_5->alarm_id) {
            if(!(VAR_6->flags & VAR_1) && !VAR_6->updated_by_id) {
                VAR_6->flags |= VAR_1;
                VAR_6->updated_by_id = VAR_5->unique_id;
                VAR_5->updates_id = VAR_6->unique_id;

                if((VAR_6->new_status == VAR_3 || VAR_6->new_status == VAR_2) &&
                   (VAR_6->old_status == VAR_3 || VAR_6->old_status == VAR_2))
                    VAR_5->non_clear_duration += VAR_6->non_clear_duration;

                FUNC_3(VAR_4, VAR_6);
            }


            break;
        }
    }
    FUNC_5(&VAR_4->health_log.alarm_log_rwlock);

    FUNC_3(VAR_4, VAR_5);
}
