
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {scalar_t__ stype; int all_alarms; } ;
struct TYPE_9__ {int rrdcalc_flags; int name; } ;
struct TYPE_8__ {int hostname; } ;
typedef scalar_t__ SILENCE_TYPE ;
typedef TYPE_1__ RRDHOST ;
typedef TYPE_2__ RRDCALC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,TYPE_5__*) ;
 int FUNC_1 (char*,int ,int ,char*,char*,char*,char*) ;
 TYPE_5__* VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(RRDHOST *VAR_5, RRDCALC *VAR_6) {
    uint32_t VAR_7 = VAR_6->rrdcalc_flags;

    VAR_6->rrdcalc_flags &= ~(VAR_0 | VAR_1);
    if (FUNC_2(VAR_4->all_alarms)) {
        if (VAR_4->stype == VAR_2) VAR_6->rrdcalc_flags |= VAR_0;
        else if (VAR_4->stype == VAR_3) VAR_6->rrdcalc_flags |= VAR_1;
    } else {
        SILENCE_TYPE VAR_8 = FUNC_0(VAR_6, VAR_5->hostname, VAR_4);
        if (VAR_8 == VAR_2) VAR_6->rrdcalc_flags |= VAR_0;
        else if (VAR_8 == VAR_3) VAR_6->rrdcalc_flags |= VAR_1;
    }

    if (VAR_7 != VAR_6->rrdcalc_flags) {
        FUNC_1("Alarm silencing changed for host '%s' alarm '%s': Disabled %s->%s Silenced %s->%s",
             VAR_5->hostname,
             VAR_6->name,
             (VAR_7 & VAR_0)?"true":"false",
             (VAR_6->rrdcalc_flags & VAR_0)?"true":"false",
             (VAR_7 & VAR_1)?"true":"false",
             (VAR_6->rrdcalc_flags & VAR_1)?"true":"false"
        );
    }
    if (VAR_6->rrdcalc_flags & VAR_0)
        return 1;
    else
        return 0;
}
