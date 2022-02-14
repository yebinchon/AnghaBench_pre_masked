
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t opened; int* fds; int* fds_types; scalar_t__ failed; int ** fds_names; } ;
typedef TYPE_1__ LISTEN_SOCKETS ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(LISTEN_SOCKETS *VAR_0) {
    size_t VAR_1;
    for(VAR_1 = 0; VAR_1 < VAR_0->opened ;VAR_1++) {
        FUNC_0(VAR_0->fds[VAR_1]);
        VAR_0->fds[VAR_1] = -1;

        FUNC_1(VAR_0->fds_names[VAR_1]);
        VAR_0->fds_names[VAR_1] = ((void*)0);

        VAR_0->fds_types[VAR_1] = -1;
    }

    VAR_0->opened = 0;
    VAR_0->failed = 0;
}
