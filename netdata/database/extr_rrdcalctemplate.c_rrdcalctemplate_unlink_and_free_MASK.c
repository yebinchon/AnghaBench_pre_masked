
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int name; struct TYPE_7__* next; } ;
struct TYPE_6__ {char* hostname; TYPE_2__* templates; } ;
typedef TYPE_1__ RRDHOST ;
typedef TYPE_2__ RRDCALCTEMPLATE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;

inline void FUNC_4(RRDHOST *VAR_1, RRDCALCTEMPLATE *VAR_2) {
    if(FUNC_3(!VAR_2)) return;

    FUNC_0(VAR_0, "Health removing template '%s' of host '%s'", VAR_2->name, VAR_1->hostname);

    if(VAR_1->templates == VAR_2) {
        VAR_1->templates = VAR_2->next;
    }
    else {
        RRDCALCTEMPLATE *VAR_3;
        for (VAR_3 = VAR_1->templates; VAR_3 && VAR_3->next != VAR_2; VAR_3 = VAR_3->next ) ;
        if(VAR_3) {
            VAR_3->next = VAR_2->next;
            VAR_2->next = ((void*)0);
        }
        else
            FUNC_1("Cannot find RRDCALCTEMPLATE '%s' linked in host '%s'", VAR_2->name, VAR_1->hostname);
    }

    FUNC_2(VAR_2);
}
