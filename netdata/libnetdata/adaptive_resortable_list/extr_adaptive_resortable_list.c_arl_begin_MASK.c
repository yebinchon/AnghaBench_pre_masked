
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int iteration; scalar_t__ relinkings; scalar_t__ expected; scalar_t__ allocated; scalar_t__ slow; scalar_t__ fast; int rechecks; scalar_t__ wanted; scalar_t__ found; TYPE_2__* head; TYPE_2__* next_keyword; int fred; scalar_t__ added; int name; } ;
struct TYPE_8__ {int flags; struct TYPE_8__* next; struct TYPE_8__* name; TYPE_1__* prev; } ;
struct TYPE_7__ {TYPE_2__* next; } ;
typedef TYPE_2__ ARL_ENTRY ;
typedef TYPE_3__ ARL_BASE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(ARL_BASE *VAR_3) {
    if(FUNC_4(VAR_3->iteration > 0 && (VAR_3->added || (VAR_3->iteration % VAR_3->rechecks) == 0))) {
        int VAR_4 = ((VAR_3->iteration % VAR_3->rechecks) == 0);



        VAR_3->added = 0;
        VAR_3->wanted = (VAR_4)?VAR_3->expected:0;

        ARL_ENTRY *VAR_5 = VAR_3->head;
        while(VAR_5) {
            if(VAR_5->flags & VAR_2) {


                VAR_5->flags &= ~VAR_2;


                if(!VAR_4 && VAR_5->flags & VAR_1)
                    VAR_3->wanted++;

            }
            else if(VAR_5->flags & VAR_0 && !(VAR_3->head == VAR_5 && !VAR_5->next)) {





                ARL_ENTRY *VAR_6 = VAR_5->next;


                if(VAR_5->next) VAR_5->next->prev = VAR_5->prev;
                if(VAR_5->prev) VAR_5->prev->next = VAR_5->next;
                if(VAR_3->head == VAR_5) VAR_3->head = VAR_5->next;


                FUNC_1(VAR_5->name);
                FUNC_1(VAR_5);


                VAR_3->fred++;


                VAR_5 = VAR_6;
                continue;
            }

            VAR_5 = VAR_5->next;
        }
    }

    if(FUNC_4(!VAR_3->head)) {



        FUNC_0(VAR_3, "a-really-not-existing-source-keyword", ((void*)0));
    }

    VAR_3->iteration++;
    VAR_3->next_keyword = VAR_3->head;
    VAR_3->found = 0;

}
