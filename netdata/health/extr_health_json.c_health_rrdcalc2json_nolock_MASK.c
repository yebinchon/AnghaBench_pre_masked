
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {char* units; int rrdcalc_flags; char* info; int options; int value; int red; int green; TYPE_4__* critical; TYPE_3__* warning; TYPE_2__* calculation; int before; int after; int group; scalar_t__ db_before; scalar_t__ db_after; scalar_t__* dimensions; scalar_t__ last_repeat; int crit_repeat_every; int warn_repeat_every; scalar_t__ delay_up_to_timestamp; int delay_last; int delay_multiplier; int delay_max_duration; int delay_down_duration; int delay_up_duration; int update_every; scalar_t__ next_update; scalar_t__ last_updated; scalar_t__ last_status_change; int status; int source; scalar_t__ recipient; scalar_t__ exec; TYPE_1__* rrdset; int chart; int name; scalar_t__ id; } ;
struct TYPE_14__ {scalar_t__ health_default_recipient; scalar_t__ health_default_exec; } ;
struct TYPE_13__ {scalar_t__* parsed_as; scalar_t__* source; } ;
struct TYPE_12__ {scalar_t__* parsed_as; scalar_t__* source; } ;
struct TYPE_11__ {scalar_t__* parsed_as; scalar_t__* source; } ;
struct TYPE_10__ {char* family; } ;
typedef TYPE_5__ RRDHOST ;
typedef TYPE_6__ RRDCALC ;
typedef int BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,unsigned long,unsigned long,unsigned long,int ,int ,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,int,int ,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,char*,scalar_t__*,char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static inline void FUNC_10(RRDHOST *VAR_3, BUFFER *VAR_4, RRDCALC *VAR_5) {
    char VAR_6[100 + 1];
    FUNC_5(VAR_6, 100, VAR_5->value, VAR_5->units, -1);

    FUNC_3(VAR_4,
            "\t\t\"%s.%s\": {\n"
                    "\t\t\t\"id\": %lu,\n"
                    "\t\t\t\"name\": \"%s\",\n"
                    "\t\t\t\"chart\": \"%s\",\n"
                    "\t\t\t\"family\": \"%s\",\n"
                    "\t\t\t\"active\": %s,\n"
                    "\t\t\t\"disabled\": %s,\n"
                    "\t\t\t\"silenced\": %s,\n"
                    "\t\t\t\"exec\": \"%s\",\n"
                    "\t\t\t\"recipient\": \"%s\",\n"
                    "\t\t\t\"source\": \"%s\",\n"
                    "\t\t\t\"units\": \"%s\",\n"
                    "\t\t\t\"info\": \"%s\",\n"
                    "\t\t\t\"status\": \"%s\",\n"
                    "\t\t\t\"last_status_change\": %lu,\n"
                    "\t\t\t\"last_updated\": %lu,\n"
                    "\t\t\t\"next_update\": %lu,\n"
                    "\t\t\t\"update_every\": %d,\n"
                    "\t\t\t\"delay_up_duration\": %d,\n"
                    "\t\t\t\"delay_down_duration\": %d,\n"
                    "\t\t\t\"delay_max_duration\": %d,\n"
                    "\t\t\t\"delay_multiplier\": %f,\n"
                    "\t\t\t\"delay\": %d,\n"
                    "\t\t\t\"delay_up_to_timestamp\": %lu,\n"
                    "\t\t\t\"warn_repeat_every\": \"%u\",\n"
                    "\t\t\t\"crit_repeat_every\": \"%u\",\n"
                    "\t\t\t\"value_string\": \"%s\",\n"
                    "\t\t\t\"last_repeat\": \"%lu\",\n"
                   , VAR_5->chart, VAR_5->name
                   , (unsigned long)VAR_5->id
                   , VAR_5->name
                   , VAR_5->chart
                   , (VAR_5->rrdset && VAR_5->rrdset->family)?VAR_5->rrdset->family:""
                   , (VAR_5->rrdset)?"true":"false"
                   , (VAR_5->rrdcalc_flags & VAR_0)?"true":"false"
                   , (VAR_5->rrdcalc_flags & VAR_2)?"true":"false"
                   , VAR_5->exec?VAR_5->exec:VAR_3->health_default_exec
                   , VAR_5->recipient?VAR_5->recipient:VAR_3->health_default_recipient
                   , VAR_5->source
                   , VAR_5->units?VAR_5->units:""
                   , VAR_5->info?VAR_5->info:""
                   , FUNC_8(VAR_5->status)
                   , (unsigned long)VAR_5->last_status_change
                   , (unsigned long)VAR_5->last_updated
                   , (unsigned long)VAR_5->next_update
                   , VAR_5->update_every
                   , VAR_5->delay_up_duration
                   , VAR_5->delay_down_duration
                   , VAR_5->delay_max_duration
                   , VAR_5->delay_multiplier
                   , VAR_5->delay_last
                   , (unsigned long)VAR_5->delay_up_to_timestamp
                   , VAR_5->warn_repeat_every
                   , VAR_5->crit_repeat_every
                   , VAR_6
                   , (unsigned long)VAR_5->last_repeat
    );

    if(FUNC_9(VAR_5->options & VAR_1)) {
        FUNC_4(VAR_4, "\t\t\t\"no_clear_notification\": true,\n");
    }

    if(FUNC_0(VAR_5)) {
        if(VAR_5->dimensions && *VAR_5->dimensions)
            FUNC_7(VAR_4, "\t\t\t", "lookup_dimensions", VAR_5->dimensions, ",\n");

        FUNC_3(VAR_4,
                "\t\t\t\"db_after\": %lu,\n"
                        "\t\t\t\"db_before\": %lu,\n"
                        "\t\t\t\"lookup_method\": \"%s\",\n"
                        "\t\t\t\"lookup_after\": %d,\n"
                        "\t\t\t\"lookup_before\": %d,\n"
                        "\t\t\t\"lookup_options\": \"",
                (unsigned long) VAR_5->db_after,
                (unsigned long) VAR_5->db_before,
                FUNC_6(VAR_5->group),
                VAR_5->after,
                VAR_5->before
        );
        FUNC_1(VAR_4, VAR_5->options);
        FUNC_4(VAR_4, "\",\n");
    }

    if(VAR_5->calculation) {
        FUNC_7(VAR_4, "\t\t\t", "calc", VAR_5->calculation->source, ",\n");
        FUNC_7(VAR_4, "\t\t\t", "calc_parsed", VAR_5->calculation->parsed_as, ",\n");
    }

    if(VAR_5->warning) {
        FUNC_7(VAR_4, "\t\t\t", "warn", VAR_5->warning->source, ",\n");
        FUNC_7(VAR_4, "\t\t\t", "warn_parsed", VAR_5->warning->parsed_as, ",\n");
    }

    if(VAR_5->critical) {
        FUNC_7(VAR_4, "\t\t\t", "crit", VAR_5->critical->source, ",\n");
        FUNC_7(VAR_4, "\t\t\t", "crit_parsed", VAR_5->critical->parsed_as, ",\n");
    }

    FUNC_4(VAR_4, "\t\t\t\"green\":");
    FUNC_2(VAR_4, VAR_5->green);
    FUNC_4(VAR_4, ",\n");

    FUNC_4(VAR_4, "\t\t\t\"red\":");
    FUNC_2(VAR_4, VAR_5->red);
    FUNC_4(VAR_4, ",\n");

    FUNC_4(VAR_4, "\t\t\t\"value\":");
    FUNC_2(VAR_4, VAR_5->value);
    FUNC_4(VAR_4, "\n");

    FUNC_4(VAR_4, "\t\t}");
}
