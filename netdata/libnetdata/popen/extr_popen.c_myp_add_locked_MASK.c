
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mypopen {struct mypopen* prev; struct mypopen* next; int pid; } ;
typedef int pid_t ;


 struct mypopen* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mypopen* VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(pid_t VAR_3) {
    struct mypopen *VAR_4;

    if (VAR_1 == 0)
        return;

    VAR_4 = FUNC_0(sizeof(struct mypopen));
    VAR_4->pid = VAR_3;

    VAR_4->next = VAR_2;
    VAR_4->prev = ((void*)0);
    if (VAR_2 != ((void*)0))
        VAR_2->prev = VAR_4;
    VAR_2 = VAR_4;
    FUNC_1(&VAR_0);
}
