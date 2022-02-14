
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* variables; int name; int id; TYPE_1__* rrdset; } ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {int name; int id; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDDIMVAR ;
typedef TYPE_3__ RRDDIM ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(RRDDIM *VAR_1) {
    RRDSET *VAR_2 = VAR_1->rrdset;
    (void)VAR_2;

    FUNC_0(VAR_0, "RRDDIMSET rename for chart id '%s' name '%s', dimension id '%s', name '%s'", VAR_2->id, VAR_2->name, VAR_1->id, VAR_1->name);

    RRDDIMVAR *VAR_3, *VAR_4 = VAR_1->variables;
    while((VAR_3 = VAR_4)) {
        VAR_4 = VAR_3->next;
        FUNC_1(VAR_3);
    }
}
