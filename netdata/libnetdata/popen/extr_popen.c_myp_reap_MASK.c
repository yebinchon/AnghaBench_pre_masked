
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mypopen {scalar_t__ pid; struct mypopen* next; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mypopen* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(pid_t VAR_3) {
    struct mypopen *VAR_4;

    if (VAR_1 == 0)
        return 0;

    FUNC_0(&VAR_0);
    for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
        if (VAR_4->pid == VAR_3) {
            FUNC_1(&VAR_0);
            return 0;
        }
    }
    FUNC_1(&VAR_0);

    return 1;
}
