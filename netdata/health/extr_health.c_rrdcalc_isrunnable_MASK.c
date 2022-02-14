
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_10__ {int counter_done; int update_every; TYPE_1__ last_collected_time; } ;
struct TYPE_9__ {char* chart; scalar_t__ next_update; scalar_t__ before; scalar_t__ after; int name; TYPE_3__* rrdset; int update_every; } ;
typedef TYPE_2__ RRDCALC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*,int ,...) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(RRDCALC *VAR_3, time_t VAR_4, time_t *VAR_5) {
    if(FUNC_5(!VAR_3->rrdset)) {
        FUNC_1(VAR_0, "Health not running alarm '%s.%s'. It is not linked to a chart.", VAR_3->chart?VAR_3->chart:"NOCHART", VAR_3->name);
        return 0;
    }

    if(FUNC_5(VAR_3->next_update > VAR_4)) {
        if (FUNC_5(*VAR_5 > VAR_3->next_update)) {


            *VAR_5 = VAR_3->next_update;
        }

        FUNC_1(VAR_0, "Health not examining alarm '%s.%s' yet (will do in %d secs).", VAR_3->chart?VAR_3->chart:"NOCHART", VAR_3->name, (int) (VAR_3->next_update - VAR_4));
        return 0;
    }

    if(FUNC_5(!VAR_3->update_every)) {
        FUNC_1(VAR_0, "Health not running alarm '%s.%s'. It does not have an update frequency", VAR_3->chart?VAR_3->chart:"NOCHART", VAR_3->name);
        return 0;
    }

    if(FUNC_5(FUNC_3(VAR_3->rrdset, VAR_2))) {
        FUNC_1(VAR_0, "Health not running alarm '%s.%s'. The chart has been marked as obsolete", VAR_3->chart?VAR_3->chart:"NOCHART", VAR_3->name);
        return 0;
    }

    if(FUNC_5(!FUNC_3(VAR_3->rrdset, VAR_1))) {
        FUNC_1(VAR_0, "Health not running alarm '%s.%s'. The chart is not enabled", VAR_3->chart?VAR_3->chart:"NOCHART", VAR_3->name);
        return 0;
    }

    if(FUNC_5(!VAR_3->rrdset->last_collected_time.tv_sec || VAR_3->rrdset->counter_done < 2)) {
        FUNC_1(VAR_0, "Health not running alarm '%s.%s'. Chart is not fully collected yet.", VAR_3->chart?VAR_3->chart:"NOCHART", VAR_3->name);
        return 0;
    }

    int VAR_6 = VAR_3->rrdset->update_every;
    time_t VAR_7 = FUNC_2(VAR_3->rrdset);
    time_t VAR_8 = FUNC_4(VAR_3->rrdset);

    if(FUNC_5(VAR_4 + VAR_6 < VAR_7 )) {
        FUNC_1(VAR_0
              , "Health not examining alarm '%s.%s' yet (wanted time is out of bounds - we need %lu but got %lu - %lu)."
              , VAR_3->chart ? VAR_3->chart : "NOCHART", VAR_3->name, (unsigned long) VAR_4, (unsigned long) VAR_7
              , (unsigned long) VAR_8);
        return 0;
    }

    if(FUNC_0(VAR_3)) {
        time_t VAR_9 = VAR_4 + VAR_3->before + VAR_3->after;

        if(VAR_9 + VAR_6 < VAR_7 || VAR_9 - VAR_6 > VAR_8) {
            FUNC_1(VAR_0
                  , "Health not examining alarm '%s.%s' yet (not enough data yet - we need %lu but got %lu - %lu)."
                  , VAR_3->chart ? VAR_3->chart : "NOCHART", VAR_3->name, (unsigned long) VAR_9, (unsigned long) VAR_7
                  , (unsigned long) VAR_8);
            return 0;
        }
    }

    return 1;
}
