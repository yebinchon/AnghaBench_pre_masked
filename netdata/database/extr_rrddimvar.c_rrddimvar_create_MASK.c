
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* variables; int name; int id; TYPE_1__* rrdset; } ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_3__* rrddim; int options; void* value; int type; void* suffix; void* prefix; } ;
struct TYPE_7__ {int name; int id; } ;
typedef int RRDVAR_TYPE ;
typedef int RRDVAR_OPTIONS ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDDIMVAR ;
typedef TYPE_3__ RRDDIM ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int ,int ,int ,char const*,int ,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (char const*) ;

RRDDIMVAR *FUNC_4(RRDDIM *VAR_1, RRDVAR_TYPE VAR_2, const char *VAR_3, const char *VAR_4, void *VAR_5, RRDVAR_OPTIONS VAR_6) {
    RRDSET *VAR_7 = VAR_1->rrdset;
    (void)VAR_7;

    FUNC_1(VAR_0, "RRDDIMSET create for chart id '%s' name '%s', dimension id '%s', name '%s%s%s'", VAR_7->id, VAR_7->name, VAR_1->id, (VAR_3)?VAR_3:"", VAR_1->name, (VAR_4)?VAR_4:"");

    if(!VAR_3) VAR_3 = "";
    if(!VAR_4) VAR_4 = "";

    RRDDIMVAR *VAR_8 = (RRDDIMVAR *)FUNC_0(1, sizeof(RRDDIMVAR));

    VAR_8->prefix = FUNC_3(VAR_3);
    VAR_8->suffix = FUNC_3(VAR_4);

    VAR_8->type = VAR_2;
    VAR_8->value = VAR_5;
    VAR_8->options = VAR_6;
    VAR_8->rrddim = VAR_1;

    VAR_8->next = VAR_1->variables;
    VAR_1->variables = VAR_8;

    FUNC_2(VAR_8);

    return VAR_8;
}
