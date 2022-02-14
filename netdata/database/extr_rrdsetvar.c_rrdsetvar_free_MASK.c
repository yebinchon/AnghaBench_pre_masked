
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* id; TYPE_1__* variables; int name; } ;
struct TYPE_7__ {int options; struct TYPE_7__* value; struct TYPE_7__* variable; struct TYPE_7__* next; int key_fullname; TYPE_2__* rrdset; } ;
typedef TYPE_1__ RRDSETVAR ;
typedef TYPE_2__ RRDSET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,int ,TYPE_1__*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(RRDSETVAR *VAR_2) {
    RRDSET *VAR_3 = VAR_2->rrdset;
    FUNC_0(VAR_0, "RRDSETVAR free for chart id '%s' name '%s', variable '%s'", VAR_3->id, VAR_3->name, VAR_2->variable);

    if(VAR_3->variables == VAR_2) {
        VAR_3->variables = VAR_2->next;
    }
    else {
        RRDSETVAR *VAR_4;
        for (VAR_4 = VAR_3->variables; VAR_4 && VAR_4->next != VAR_2; VAR_4 = VAR_4->next);
        if(!VAR_4) FUNC_1("RRDSETVAR '%s' not found in chart '%s' variables linked list", VAR_2->key_fullname, VAR_3->id);
        else VAR_4->next = VAR_2->next;
    }

    FUNC_3(VAR_2);

    FUNC_2(VAR_2->variable);

    if(VAR_2->options & VAR_1)
        FUNC_2(VAR_2->value);

    FUNC_2(VAR_2);
}
