
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* variables; int name; int id; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ RRDSETVAR ;
typedef TYPE_2__ RRDSET ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(RRDSET *VAR_1) {
    FUNC_0(VAR_0, "RRDSETVAR rename for chart id '%s' name '%s'", VAR_1->id, VAR_1->name);

    RRDSETVAR *VAR_2;
    for(VAR_2 = VAR_1->variables; VAR_2 ; VAR_2 = VAR_2->next)
        FUNC_2(VAR_2);

    FUNC_1(VAR_1);
}
