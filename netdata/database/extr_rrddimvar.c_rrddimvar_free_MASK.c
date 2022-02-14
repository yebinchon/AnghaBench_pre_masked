
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int id; TYPE_2__* variables; int name; TYPE_1__* rrdset; } ;
struct TYPE_8__ {struct TYPE_8__* suffix; struct TYPE_8__* prefix; struct TYPE_8__* next; int key_name; TYPE_3__* rrddim; } ;
struct TYPE_7__ {char* id; int name; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDDIMVAR ;
typedef TYPE_3__ RRDDIM ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int ,int ,int ,...) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(RRDDIMVAR *VAR_1) {
    RRDDIM *VAR_2 = VAR_1->rrddim;
    RRDSET *VAR_3 = VAR_2->rrdset;
    FUNC_0(VAR_0, "RRDDIMSET free for chart id '%s' name '%s', dimension id '%s', name '%s', prefix='%s', suffix='%s'", VAR_3->id, VAR_3->name, VAR_2->id, VAR_2->name, VAR_1->prefix, VAR_1->suffix);

    FUNC_3(VAR_1);

    if(VAR_2->variables == VAR_1) {
        FUNC_0(VAR_0, "RRDDIMSET removing first entry for chart id '%s' name '%s', dimension id '%s', name '%s'", VAR_3->id, VAR_3->name, VAR_2->id, VAR_2->name);
        VAR_2->variables = VAR_1->next;
    }
    else {
        FUNC_0(VAR_0, "RRDDIMSET removing non-first entry for chart id '%s' name '%s', dimension id '%s', name '%s'", VAR_3->id, VAR_3->name, VAR_2->id, VAR_2->name);
        RRDDIMVAR *VAR_4;
        for (VAR_4 = VAR_2->variables; VAR_4 && VAR_4->next != VAR_1; VAR_4 = VAR_4->next) ;
        if(!VAR_4) FUNC_1("RRDDIMVAR '%s' not found in dimension '%s/%s' variables linked list", VAR_1->key_name, VAR_3->id, VAR_2->id);
        else VAR_4->next = VAR_1->next;
    }

    FUNC_2(VAR_1->prefix);
    FUNC_2(VAR_1->suffix);
    FUNC_2(VAR_1);
}
