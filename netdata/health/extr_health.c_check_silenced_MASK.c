
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {char* name; char* chart; TYPE_1__* rrdset; } ;
struct TYPE_9__ {int families; int hosts; int contexts; int charts; int alarms; scalar_t__ families_pattern; scalar_t__ charts_pattern; scalar_t__ hosts_pattern; scalar_t__ contexts_pattern; scalar_t__ alarms_pattern; struct TYPE_9__* next; } ;
struct TYPE_8__ {scalar_t__ stype; TYPE_3__* silencers; } ;
struct TYPE_7__ {char* context; char* family; } ;
typedef scalar_t__ SILENCE_TYPE ;
typedef TYPE_2__ SILENCERS ;
typedef TYPE_3__ SILENCER ;
typedef TYPE_4__ RRDCALC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 scalar_t__ FUNC_2 (int) ;

SILENCE_TYPE FUNC_3(RRDCALC *VAR_3, char* VAR_4, SILENCERS *VAR_5) {
    SILENCER *VAR_6;
    FUNC_0(VAR_0, "Checking if alarm was silenced via the command API. Alarm info name:%s context:%s chart:%s host:%s family:%s",
            VAR_3->name, (VAR_3->rrdset)?VAR_3->rrdset->context:"", VAR_3->chart, VAR_4, (VAR_3->rrdset)?VAR_3->rrdset->family:"");

    for (VAR_6 = VAR_5->silencers; VAR_6!=((void*)0); VAR_6=VAR_6->next){
        if (
                (!VAR_6->alarms_pattern || (VAR_3->name && VAR_6->alarms_pattern && FUNC_1(VAR_6->alarms_pattern,VAR_3->name))) &&
                (!VAR_6->contexts_pattern || (VAR_3->rrdset && VAR_3->rrdset->context && VAR_6->contexts_pattern && FUNC_1(VAR_6->contexts_pattern,VAR_3->rrdset->context))) &&
                (!VAR_6->hosts_pattern || (VAR_4 && VAR_6->hosts_pattern && FUNC_1(VAR_6->hosts_pattern,VAR_4))) &&
                (!VAR_6->charts_pattern || (VAR_3->chart && VAR_6->charts_pattern && FUNC_1(VAR_6->charts_pattern,VAR_3->chart))) &&
                (!VAR_6->families_pattern || (VAR_3->rrdset && VAR_3->rrdset->family && VAR_6->families_pattern && FUNC_1(VAR_6->families_pattern,VAR_3->rrdset->family)))
                ) {
            FUNC_0(VAR_0, "Alarm matches command API silence entry %s:%s:%s:%s:%s", VAR_6->alarms,VAR_6->charts, VAR_6->contexts, VAR_6->hosts, VAR_6->families);
            if (FUNC_2(VAR_5->stype == VAR_2)) {
                FUNC_0(VAR_0, "Alarm %s matched a silence entry, but no SILENCE or DISABLE command was issued via the command API. The match has no effect.", VAR_3->name);
            } else {
                FUNC_0(VAR_0, "Alarm %s via the command API - name:%s context:%s chart:%s host:%s family:%s"
                        , (VAR_5->stype == VAR_1)?"Disabled":"Silenced"
                        , VAR_3->name
                        , (VAR_3->rrdset)?VAR_3->rrdset->context:""
                        , VAR_3->chart
                        , VAR_4
                        , (VAR_3->rrdset)?VAR_3->rrdset->family:""
                        );
            }
            return VAR_5->stype;
        }
    }
    return VAR_2;
}
