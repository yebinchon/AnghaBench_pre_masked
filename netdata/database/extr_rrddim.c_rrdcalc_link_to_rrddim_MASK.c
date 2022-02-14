
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int avl ;
struct TYPE_17__ {scalar_t__ hash_chart; int foreachcounter; int name; int chart; int spdim; struct TYPE_17__* next; } ;
struct TYPE_16__ {int name; int id; } ;
struct TYPE_15__ {int alarms_idx_health_log; TYPE_4__* alarms_with_foreach; } ;
struct TYPE_14__ {scalar_t__ hash_name; int name; int id; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;
typedef TYPE_3__ RRDDIM ;
typedef TYPE_4__ RRDCALC ;


 char* FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*,TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,char*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(RRDDIM *VAR_0, RRDSET *VAR_1, RRDHOST *VAR_2) {
    RRDCALC *VAR_3;
    for (VAR_3 = VAR_2->alarms_with_foreach; VAR_3 ; VAR_3 = VAR_3->next) {
        if (FUNC_7(VAR_3->spdim, VAR_0->id) || FUNC_7(VAR_3->spdim, VAR_0->name)) {
            if (VAR_3->hash_chart == VAR_1->hash_name || !FUNC_8(VAR_3->chart, VAR_1->name) || !FUNC_8(VAR_3->chart, VAR_1->id)) {
                char *VAR_4 = FUNC_0(VAR_3->name, FUNC_9(VAR_3->name), VAR_0->name, FUNC_9(VAR_0->name));
                if (VAR_4) {
                    if(FUNC_6(VAR_2, VAR_1->name, VAR_4, 0, 0)){
                        FUNC_3(VAR_4);
                        continue;
                    }

                    RRDCALC *VAR_5 = FUNC_5(VAR_3, VAR_2, VAR_4, VAR_0->name);
                    if (VAR_5) {
                        FUNC_4(VAR_2, VAR_5);
                        RRDCALC *VAR_6 = (RRDCALC *) FUNC_1(&(VAR_2)->alarms_idx_health_log,(avl *)VAR_5);
                        if (VAR_6 != VAR_5) {
                            FUNC_2("Cannot insert the alarm index ID %s",VAR_5->name);
                        }
                    } else {
                        FUNC_2("Cannot allocate a new alarm.");
                        VAR_3->foreachcounter--;
                    }
                }
            }
        }
    }
}
