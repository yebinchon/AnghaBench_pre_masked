
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pid_stat {int merged; size_t ppid; TYPE_2__* parent; int comm; int pid; TYPE_1__* target; struct pid_stat* next; int sortlist; int children_count; } ;
struct TYPE_6__ {int sortlist; void* target; } ;
struct TYPE_5__ {int comm; int pid; TYPE_1__* target; scalar_t__ children_count; } ;
struct TYPE_4__ {int name; scalar_t__ debug_enabled; } ;


 size_t VAR_0 ;
 TYPE_3__** VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 struct pid_stat* VAR_4 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void) {
    struct pid_stat *VAR_5 = ((void*)0);



    int VAR_6 = 1, VAR_7 = 0;
    while(VAR_6) {
        if(FUNC_2(VAR_3)) VAR_7++;
        VAR_6 = 0;
        for(VAR_5 = VAR_4; VAR_5 ; VAR_5 = VAR_5->next) {




            if(FUNC_2(!VAR_5->target && VAR_5->parent && VAR_5->parent->target)) {
                VAR_5->target = VAR_5->parent->target;
                VAR_6++;

                if(VAR_3 || (VAR_5->target && VAR_5->target->debug_enabled))
                    FUNC_1("TARGET INHERITANCE: %s is inherited by %d (%s) from its parent %d (%s).", VAR_5->target->name, VAR_5->pid, VAR_5->comm, VAR_5->parent->pid, VAR_5->parent->comm);
            }
        }
    }



    int VAR_8 = 1;
    VAR_6 = 1;
    while(VAR_6) {
        if(FUNC_2(VAR_3)) VAR_7++;
        VAR_6 = 0;

        for(VAR_5 = VAR_4; VAR_5 ; VAR_5 = VAR_5->next) {
            if(FUNC_2(!VAR_5->sortlist && !VAR_5->children_count))
                VAR_5->sortlist = VAR_8++;

            if(FUNC_2(
                    !VAR_5->children_count
                    && !VAR_5->merged
                    && VAR_5->parent
                    && VAR_5->parent->children_count


                    && (VAR_5->target == VAR_5->parent->target || !VAR_5->parent->target)
                    && VAR_5->ppid != VAR_0
                )) {

                VAR_5->parent->children_count--;
                VAR_5->merged = 1;


                if(FUNC_2(VAR_5->target && !VAR_5->parent->target)) {
                    VAR_5->parent->target = VAR_5->target;

                    if(VAR_3 || (VAR_5->target && VAR_5->target->debug_enabled))
                        FUNC_1("TARGET INHERITANCE: %s is inherited by %d (%s) from its child %d (%s).", VAR_5->target->name, VAR_5->parent->pid, VAR_5->parent->comm, VAR_5->pid, VAR_5->comm);
                }

                VAR_6++;
            }
        }

        FUNC_0("TARGET INHERITANCE: merged %d processes", VAR_6);
    }


    if(VAR_1[VAR_0])
        VAR_1[VAR_0]->target = VAR_2;


    if(VAR_1[0])
        VAR_1[0]->target = VAR_2;


    if(FUNC_2(VAR_3)) VAR_7++;
    for(VAR_5 = VAR_4; VAR_5 ; VAR_5 = VAR_5->next) {


        if(FUNC_2(!VAR_5->merged && !VAR_5->target))
            VAR_5->target = VAR_2;


        if(FUNC_2(!VAR_5->sortlist))
            VAR_5->sortlist = VAR_8++;
    }

    if(VAR_1[1])
        VAR_1[1]->sortlist = VAR_8++;


    VAR_6 = 1;
    while(VAR_6) {
        if(FUNC_2(VAR_3)) VAR_7++;
        VAR_6 = 0;
        for(VAR_5 = VAR_4; VAR_5 ; VAR_5 = VAR_5->next) {
            if(FUNC_2(!VAR_5->target && VAR_5->merged && VAR_5->parent && VAR_5->parent->target)) {
                VAR_5->target = VAR_5->parent->target;
                VAR_6++;

                if(VAR_3 || (VAR_5->target && VAR_5->target->debug_enabled))
                    FUNC_1("TARGET INHERITANCE: %s is inherited by %d (%s) from its parent %d (%s) at phase 2.", VAR_5->target->name, VAR_5->pid, VAR_5->comm, VAR_5->parent->pid, VAR_5->parent->comm);
            }
        }
    }

    FUNC_0("apply_apps_groups_targets_inheritance() made %d loops on the process tree", VAR_7);
}
