
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int avl ;
struct TYPE_8__ {char* chart; char* name; struct TYPE_8__* next; scalar_t__ rrdset; } ;
struct TYPE_7__ {int alarms_idx_name; int alarms_idx_health_log; int hostname; TYPE_2__* alarms; } ;
typedef TYPE_1__ RRDHOST ;
typedef TYPE_2__ RRDCALC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*,char*,char*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(RRDHOST *VAR_1, RRDCALC *VAR_2) {
    if(FUNC_6(!VAR_2)) return;

    FUNC_2(VAR_0, "Health removing alarm '%s.%s' of host '%s'", VAR_2->chart?VAR_2->chart:"NOCHART", VAR_2->name, VAR_1->hostname);


    if(VAR_2->rrdset) FUNC_5(VAR_2);


    if(FUNC_6(VAR_2 == VAR_1->alarms))
        VAR_1->alarms = VAR_2->next;
    else {
        RRDCALC *VAR_3;
        for(VAR_3 = VAR_1->alarms; VAR_3 && VAR_3->next != VAR_2; VAR_3 = VAR_3->next) ;
        if(VAR_3) {
            VAR_3->next = VAR_2->next;
            VAR_2->next = ((void*)0);
        }
        else
            FUNC_3("Cannot unlink alarm '%s.%s' from host '%s': not found", VAR_2->chart?VAR_2->chart:"NOCHART", VAR_2->name, VAR_1->hostname);
    }

    RRDCALC *VAR_4 = (RRDCALC *) FUNC_1(&(VAR_1)->alarms_idx_health_log, (avl *)VAR_2);
    if (VAR_4) {
        VAR_4 = (RRDCALC *) FUNC_0(&(VAR_1)->alarms_idx_health_log, (avl *)VAR_2);
        if (!VAR_4) {
            FUNC_3("Cannot remove the health alarm index from health_log");
        }
    }

    VAR_4 = (RRDCALC *) FUNC_1(&(VAR_1)->alarms_idx_name, (avl *)VAR_2);
    if (VAR_4) {
        VAR_4 = (RRDCALC *) FUNC_0(&(VAR_1)->alarms_idx_name, (avl *)VAR_2);
        if (!VAR_4) {
            FUNC_3("Cannot remove the health alarm index from idx_name");
        }
    }

    FUNC_4(VAR_2);
}
