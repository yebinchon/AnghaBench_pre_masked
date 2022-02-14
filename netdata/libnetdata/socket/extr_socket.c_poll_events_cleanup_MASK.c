
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t max; int * inf; int * fds; } ;
typedef TYPE_1__ POLLJOB ;
typedef int POLLINFO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0) {
    POLLJOB *VAR_1 = (POLLJOB *)VAR_0;

    size_t VAR_2;
    for(VAR_2 = 0 ; VAR_2 <= VAR_1->max ; VAR_2++) {
        POLLINFO *VAR_3 = &VAR_1->inf[VAR_2];
        FUNC_1(VAR_3);
    }

    FUNC_0(VAR_1->fds);
    FUNC_0(VAR_1->inf);
}
