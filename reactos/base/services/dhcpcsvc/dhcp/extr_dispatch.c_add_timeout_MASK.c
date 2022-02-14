
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeout {void (* func ) (void*) ;void* what; scalar_t__ when; struct timeout* next; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 struct timeout* VAR_1 ;
 struct timeout* FUNC_2 (int) ;
 struct timeout* VAR_2 ;

void
FUNC_3(time_t VAR_3, void (*VAR_4)(void *), void *VAR_5)
{
    struct timeout *VAR_6, *VAR_7;

    FUNC_0(VAR_0,("Adding timeout %x %p %x\n", VAR_3, VAR_4, VAR_5));

    VAR_6 = ((void*)0);
    for (VAR_7 = VAR_2; VAR_7; VAR_7 = VAR_7->next) {
        if (VAR_7->func == VAR_4 && VAR_7->what == VAR_5) {
            if (VAR_6)
                VAR_6->next = VAR_7->next;
            else
                VAR_2 = VAR_7->next;
            break;
        }
        VAR_6 = VAR_7;
    }



    if (!VAR_7) {
        if (VAR_1) {
            VAR_7 = VAR_1;
            VAR_1 = VAR_7->next;
            VAR_7->func = VAR_4;
            VAR_7->what = VAR_5;
        } else {
            VAR_7 = FUNC_2(sizeof(struct timeout));
            if (!VAR_7) {
                FUNC_1("Can't allocate timeout structure!");
                return;
            }
            VAR_7->func = VAR_4;
            VAR_7->what = VAR_5;
        }
    }

    VAR_7->when = VAR_3;




    if (!VAR_2 || VAR_2->when > VAR_7->when) {
        VAR_7->next = VAR_2;
        VAR_2 = VAR_7;
        return;
    }


    for (VAR_6 = VAR_2; VAR_6->next; VAR_6 = VAR_6->next) {
        if (VAR_6->next->when > VAR_7->when) {
            VAR_7->next = VAR_6->next;
            VAR_6->next = VAR_7;
            return;
        }
    }


    VAR_6->next = VAR_7;
    VAR_7->next = ((void*)0);
}
