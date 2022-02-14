
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ status; TYPE_3__* rrdset; struct TYPE_15__* next; } ;
struct TYPE_11__ {scalar_t__ next_log_id; } ;
struct TYPE_14__ {TYPE_5__* alarms; scalar_t__ health_enabled; TYPE_1__ health_log; int hostname; } ;
struct TYPE_12__ {int tv_sec; } ;
struct TYPE_13__ {TYPE_2__ last_collected_time; } ;
typedef TYPE_4__ RRDHOST ;
typedef TYPE_5__ RRDCALC ;
typedef int BUFFER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int ,scalar_t__,char*,unsigned long) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_4__*,int *,TYPE_5__*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(RRDHOST *VAR_2, BUFFER *VAR_3, int VAR_4) {
    int VAR_5;

    FUNC_5(VAR_2);
    FUNC_0(VAR_3, "{\n\t\"hostname\": \"%s\","
                    "\n\t\"latest_alarm_log_unique_id\": %u,"
                    "\n\t\"status\": %s,"
                    "\n\t\"now\": %lu,"
                    "\n\t\"alarms\": {\n",
            VAR_2->hostname,
            (VAR_2->health_log.next_log_id > 0)?(VAR_2->health_log.next_log_id - 1):0,
            VAR_2->health_enabled?"true":"false",
            (unsigned long)FUNC_4());

    RRDCALC *VAR_6;
    for(VAR_5 = 0, VAR_6 = VAR_2->alarms; VAR_6 ; VAR_6 = VAR_6->next) {
        if(FUNC_7(!VAR_6->rrdset || !VAR_6->rrdset->last_collected_time.tv_sec))
            continue;

        if(FUNC_3(!VAR_4 && !(VAR_6->status == VAR_1 || VAR_6->status == VAR_0)))
            continue;

        if(FUNC_3(VAR_5)) FUNC_1(VAR_3, ",\n");
        FUNC_2(VAR_2, VAR_3, VAR_6);
        VAR_5++;
    }






    FUNC_1(VAR_3, "\n\t}\n}\n");
    FUNC_6(VAR_2);
}
