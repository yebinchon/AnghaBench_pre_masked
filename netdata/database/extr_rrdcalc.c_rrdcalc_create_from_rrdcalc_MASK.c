
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int next_event_id; char const* chart; char* name; char const* exec; char const* recipient; char const* source; char const* units; char const* info; TYPE_3__* critical; TYPE_2__* warning; TYPE_1__* calculation; int options; int update_every; int before; int after; int group; int crit_repeat_every; int warn_repeat_every; scalar_t__ last_repeat; int delay_multiplier; int delay_max_duration; int delay_down_duration; int delay_up_duration; void* old_value; void* value; int red; int green; scalar_t__ foreachcounter; int * foreachdim; void* dimensions; void* hash_chart; void* hash; int id; } ;
struct TYPE_10__ {int source; } ;
struct TYPE_9__ {int source; } ;
struct TYPE_8__ {int source; } ;
typedef int RRDHOST ;
typedef TYPE_4__ RRDCALC ;


 void* VAR_0 ;
 TYPE_4__* FUNC_0 (int,int) ;
 int FUNC_1 (char*,char const*,char const*,int ) ;
 void* FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *,char const*,char const*,int*) ;
 void* FUNC_4 (char const*) ;
 void* FUNC_5 (char const*) ;

inline RRDCALC *FUNC_6(RRDCALC *VAR_1, RRDHOST *VAR_2, const char *VAR_3, const char *VAR_4) {
    RRDCALC *VAR_5 = FUNC_0(1, sizeof(RRDCALC));

    VAR_5->next_event_id = 1;
    VAR_5->id = FUNC_3(VAR_2, VAR_1->chart, VAR_3, &VAR_1->next_event_id);
    VAR_5->name = (char *)VAR_3;
    VAR_5->hash = FUNC_4(VAR_5->name);
    VAR_5->chart = FUNC_5(VAR_1->chart);
    VAR_5->hash_chart = FUNC_4(VAR_1->chart);

    VAR_5->dimensions = FUNC_5(VAR_4);
    VAR_5->foreachdim = ((void*)0);
    VAR_1->foreachcounter++;
    VAR_5->foreachcounter = VAR_1->foreachcounter;

    VAR_5->green = VAR_1->green;
    VAR_5->red = VAR_1->red;
    VAR_5->value = VAR_0;
    VAR_5->old_value = VAR_0;

    VAR_5->delay_up_duration = VAR_1->delay_up_duration;
    VAR_5->delay_down_duration = VAR_1->delay_down_duration;
    VAR_5->delay_max_duration = VAR_1->delay_max_duration;
    VAR_5->delay_multiplier = VAR_1->delay_multiplier;

    VAR_5->last_repeat = 0;
    VAR_5->warn_repeat_every = VAR_1->warn_repeat_every;
    VAR_5->crit_repeat_every = VAR_1->crit_repeat_every;

    VAR_5->group = VAR_1->group;
    VAR_5->after = VAR_1->after;
    VAR_5->before = VAR_1->before;
    VAR_5->update_every = VAR_1->update_every;
    VAR_5->options = VAR_1->options;

    if(VAR_1->exec) VAR_5->exec = FUNC_5(VAR_1->exec);
    if(VAR_1->recipient) VAR_5->recipient = FUNC_5(VAR_1->recipient);
    if(VAR_1->source) VAR_5->source = FUNC_5(VAR_1->source);
    if(VAR_1->units) VAR_5->units = FUNC_5(VAR_1->units);
    if(VAR_1->info) VAR_5->info = FUNC_5(VAR_1->info);

    if(VAR_1->calculation) {
        VAR_5->calculation = FUNC_2(VAR_1->calculation->source, ((void*)0), ((void*)0));
        if(!VAR_5->calculation)
            FUNC_1("Health alarm '%s.%s': failed to parse calculation expression '%s'", VAR_1->chart, VAR_1->name, VAR_1->calculation->source);
    }

    if(VAR_1->warning) {
        VAR_5->warning = FUNC_2(VAR_1->warning->source, ((void*)0), ((void*)0));
        if(!VAR_5->warning)
            FUNC_1("Health alarm '%s.%s': failed to re-parse warning expression '%s'", VAR_1->chart, VAR_1->name, VAR_1->warning->source);
    }

    if(VAR_1->critical) {
        VAR_5->critical = FUNC_2(VAR_1->critical->source, ((void*)0), ((void*)0));
        if(!VAR_5->critical)
            FUNC_1("Health alarm '%s.%s': failed to re-parse critical expression '%s'", VAR_1->chart, VAR_1->name, VAR_1->critical->source);
    }

    return VAR_5;
}
