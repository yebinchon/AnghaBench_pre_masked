
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {char* hostname; TYPE_1__* rrdset_root; } ;
struct TYPE_17__ {int rrd_memory_mode; int memsize; int name; struct TYPE_17__* module_name; struct TYPE_17__* plugin_name; struct TYPE_17__* config_section; int rrdset_rwlock; int id; struct TYPE_17__* next; int rrdvar_root_index; int rrdfamily; scalar_t__ dimensions; scalar_t__ alarms; scalar_t__ variables; TYPE_2__* rrdhost; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;


 int VAR_0 ;






 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_15 (int) ;

void FUNC_16(RRDSET *VAR_1) {
    if(FUNC_15(!VAR_1)) return;

    RRDHOST *VAR_2 = VAR_1->rrdhost;

    FUNC_7(VAR_2);
    FUNC_11(VAR_1);






    if(FUNC_15(FUNC_8(VAR_2, VAR_1) != VAR_1))
        FUNC_1("RRDSET: INTERNAL ERROR: attempt to remove from index chart '%s', removed a different chart.", VAR_1->id);

    FUNC_9(VAR_2, VAR_1);




    while(VAR_1->variables) FUNC_13(VAR_1->variables);
    while(VAR_1->alarms) FUNC_12(VAR_1->alarms);
    while(VAR_1->dimensions) FUNC_5(VAR_1, VAR_1->dimensions);

    FUNC_6(VAR_2, VAR_1->rrdfamily);

    FUNC_0(VAR_0, "RRDSET: Cleaning up remaining chart variables for host '%s', chart '%s'", VAR_2->hostname, VAR_1->id);
    FUNC_14(VAR_2, &VAR_1->rrdvar_root_index);




    if(VAR_1 == VAR_2->rrdset_root) {
        VAR_2->rrdset_root = VAR_1->next;
    }
    else {

        RRDSET *VAR_3;
        for(VAR_3 = VAR_2->rrdset_root; VAR_3 && VAR_3->next != VAR_1 ; VAR_3 = VAR_3->next) ;


        if(VAR_3) VAR_3->next = VAR_1->next;
        else FUNC_1("Request to free RRDSET '%s': cannot find it under host '%s'", VAR_1->id, VAR_2->hostname);
    }

    FUNC_10(VAR_1);




    FUNC_4(&VAR_1->rrdset_rwlock);


    FUNC_2(VAR_1->config_section);
    FUNC_2(VAR_1->plugin_name);
    FUNC_2(VAR_1->module_name);

    switch(VAR_1->rrd_memory_mode) {
        case 128:
        case 131:
        case 129:
            FUNC_0(VAR_0, "Unmapping stats '%s'.", VAR_1->name);
            FUNC_3(VAR_1, VAR_1->memsize);
            break;

        case 133:
        case 130:
        case 132:
            FUNC_2(VAR_1);
            break;
    }
}
