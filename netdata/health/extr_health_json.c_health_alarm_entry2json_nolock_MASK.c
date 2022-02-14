
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; char* units; char* info; int old_value; int new_value; scalar_t__ last_repeat; int old_value_string; int new_value_string; int updates_id; int updated_by_id; scalar_t__ delay_up_to_timestamp; int delay; int old_status; int new_status; scalar_t__ non_clear_duration; scalar_t__ duration; scalar_t__ when; int source; int exec_code; scalar_t__ recipient; scalar_t__ exec; scalar_t__ exec_run_timestamp; int family; int chart; int name; int alarm_event_id; int alarm_id; int unique_id; } ;
struct TYPE_5__ {scalar_t__ health_default_recipient; scalar_t__ health_default_exec; int hostname; } ;
typedef TYPE_1__ RRDHOST ;
typedef int BUFFER ;
typedef TYPE_2__ ALARM_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ,int ,int ,int ,char*,char*,unsigned long,char*,scalar_t__,scalar_t__,int ,int ,char*,unsigned long,unsigned long,unsigned long,int ,int ,int ,unsigned long,int ,int ,int ,int ,unsigned long,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,char*,char*,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6(BUFFER *VAR_5, ALARM_ENTRY *VAR_6, RRDHOST *VAR_7) {
    FUNC_1(VAR_5,
            "\n\t{\n"
                    "\t\t\"hostname\": \"%s\",\n"
                    "\t\t\"unique_id\": %u,\n"
                    "\t\t\"alarm_id\": %u,\n"
                    "\t\t\"alarm_event_id\": %u,\n"
                    "\t\t\"name\": \"%s\",\n"
                    "\t\t\"chart\": \"%s\",\n"
                    "\t\t\"family\": \"%s\",\n"
                    "\t\t\"processed\": %s,\n"
                    "\t\t\"updated\": %s,\n"
                    "\t\t\"exec_run\": %lu,\n"
                    "\t\t\"exec_failed\": %s,\n"
                    "\t\t\"exec\": \"%s\",\n"
                    "\t\t\"recipient\": \"%s\",\n"
                    "\t\t\"exec_code\": %d,\n"
                    "\t\t\"source\": \"%s\",\n"
                    "\t\t\"units\": \"%s\",\n"
                    "\t\t\"when\": %lu,\n"
                    "\t\t\"duration\": %lu,\n"
                    "\t\t\"non_clear_duration\": %lu,\n"
                    "\t\t\"status\": \"%s\",\n"
                    "\t\t\"old_status\": \"%s\",\n"
                    "\t\t\"delay\": %d,\n"
                    "\t\t\"delay_up_to_timestamp\": %lu,\n"
                    "\t\t\"updated_by_id\": %u,\n"
                    "\t\t\"updates_id\": %u,\n"
                    "\t\t\"value_string\": \"%s\",\n"
                    "\t\t\"old_value_string\": \"%s\",\n"
                    "\t\t\"last_repeat\": \"%lu\",\n"
                    "\t\t\"silenced\": \"%s\",\n"
                   , VAR_7->hostname
                   , VAR_6->unique_id
                   , VAR_6->alarm_id
                   , VAR_6->alarm_event_id
                   , VAR_6->name
                   , VAR_6->chart
                   , VAR_6->family
                   , (VAR_6->flags & VAR_2)?"true":"false"
                   , (VAR_6->flags & VAR_4)?"true":"false"
                   , (unsigned long)VAR_6->exec_run_timestamp
                   , (VAR_6->flags & VAR_0)?"true":"false"
                   , VAR_6->exec?VAR_6->exec:VAR_7->health_default_exec
                   , VAR_6->recipient?VAR_6->recipient:VAR_7->health_default_recipient
                   , VAR_6->exec_code
                   , VAR_6->source
                   , VAR_6->units?VAR_6->units:""
                   , (unsigned long)VAR_6->when
                   , (unsigned long)VAR_6->duration
                   , (unsigned long)VAR_6->non_clear_duration
                   , FUNC_4(VAR_6->new_status)
                   , FUNC_4(VAR_6->old_status)
                   , VAR_6->delay
                   , (unsigned long)VAR_6->delay_up_to_timestamp
                   , VAR_6->updated_by_id
                   , VAR_6->updates_id
                   , VAR_6->new_value_string
                   , VAR_6->old_value_string
                   , (unsigned long)VAR_6->last_repeat
                   , (VAR_6->flags & VAR_3)?"true":"false"
    );

    FUNC_3(VAR_5, "\t\t", "info", VAR_6->info?VAR_6->info:"", ",\n");

    if(FUNC_5(VAR_6->flags & VAR_1)) {
        FUNC_2(VAR_5, "\t\t\"no_clear_notification\": true,\n");
    }

    FUNC_2(VAR_5, "\t\t\"value\":");
    FUNC_0(VAR_5, VAR_6->new_value);
    FUNC_2(VAR_5, ",\n");

    FUNC_2(VAR_5, "\t\t\"old_value\":");
    FUNC_0(VAR_5, VAR_6->old_value);
    FUNC_2(VAR_5, "\n");

    FUNC_2(VAR_5, "\t}");
}
