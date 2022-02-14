
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mypopen {scalar_t__ pid; struct mypopen* next; TYPE_1__* prev; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {struct mypopen* next; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct mypopen*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mypopen* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(pid_t VAR_3) {
    struct mypopen *VAR_4;

    if (VAR_1 == 0)
        return;

    FUNC_2(&VAR_0);
    for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
        if (VAR_4->pid == VAR_3) {
            if (VAR_4->next != ((void*)0))
                VAR_4->next->prev = VAR_4->prev;
            if (VAR_4->prev != ((void*)0))
                VAR_4->prev->next = VAR_4->next;
            if (VAR_2 == VAR_4)
                VAR_2 = VAR_4->next;
            FUNC_1(VAR_4);
            break;
        }
    }

    if (VAR_4 == ((void*)0))
        FUNC_0("Cannot find pid %d.", VAR_3);

    FUNC_3(&VAR_0);
}
