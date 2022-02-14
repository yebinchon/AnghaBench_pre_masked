
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* variables; int name; int id; } ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_2__* rrdset; int options; void* value; int type; int variable; int hash; } ;
typedef int RRDVAR_TYPE ;
typedef int RRDVAR_OPTIONS ;
typedef TYPE_1__ RRDSETVAR ;
typedef TYPE_2__ RRDSET ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int ,int ,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;

RRDSETVAR *FUNC_5(RRDSET *VAR_1, const char *VAR_2, RRDVAR_TYPE VAR_3, void *VAR_4, RRDVAR_OPTIONS VAR_5) {
    FUNC_1(VAR_0, "RRDVARSET create for chart id '%s' name '%s' with variable name '%s'", VAR_1->id, VAR_1->name, VAR_2);
    RRDSETVAR *VAR_6 = (RRDSETVAR *)FUNC_0(1, sizeof(RRDSETVAR));

    VAR_6->variable = FUNC_4(VAR_2);
    VAR_6->hash = FUNC_3(VAR_6->variable);
    VAR_6->type = VAR_3;
    VAR_6->value = VAR_4;
    VAR_6->options = VAR_5;
    VAR_6->rrdset = VAR_1;

    VAR_6->next = VAR_1->variables;
    VAR_1->variables = VAR_6;

    FUNC_2(VAR_6);

    return VAR_6;
}
