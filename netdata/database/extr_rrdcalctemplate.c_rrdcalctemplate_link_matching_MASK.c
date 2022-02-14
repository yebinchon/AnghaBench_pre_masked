
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; } ;
struct TYPE_9__ {TYPE_3__* alarms_template_with_foreach; TYPE_3__* templates; } ;
struct TYPE_8__ {TYPE_2__* rrdhost; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;
typedef TYPE_3__ RRDCALCTEMPLATE ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;

void FUNC_1(RRDSET *VAR_0) {
    RRDHOST *VAR_1 = VAR_0->rrdhost;
    RRDCALCTEMPLATE *VAR_2;

    for(VAR_2 = VAR_1->templates; VAR_2 ; VAR_2 = VAR_2->next) {
        FUNC_0(VAR_2, VAR_0, VAR_1);
    }

    for(VAR_2 = VAR_1->alarms_template_with_foreach; VAR_2 ; VAR_2 = VAR_2->next) {
        FUNC_0(VAR_2, VAR_0, VAR_1);
    }
}
