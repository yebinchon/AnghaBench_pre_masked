
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* arg; struct TYPE_4__* next; int (* handfn ) (void*) ;} ;
typedef TYPE_1__ THREAD_EVENT_HANDLER ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, THREAD_EVENT_HANDLER **VAR_1)
{
    THREAD_EVENT_HANDLER *VAR_2, *VAR_3 = ((void*)0);


    if (VAR_1 == ((void*)0))
        return;

    VAR_2 = *VAR_1;
    while (VAR_2 != ((void*)0)) {
        if (VAR_0 != ((void*)0) && VAR_2->arg != VAR_0) {
            VAR_2 = VAR_2->next;
            continue;
        }
        VAR_2->handfn(VAR_2->arg);
        VAR_3 = VAR_2;
        VAR_2 = VAR_2->next;
        if (VAR_3 == *VAR_1)
            *VAR_1 = VAR_2;
        FUNC_0(VAR_3);
    }
}
