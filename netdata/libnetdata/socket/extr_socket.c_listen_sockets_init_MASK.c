
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* fds; int* fds_types; scalar_t__ failed; scalar_t__ opened; int ** fds_names; } ;
typedef TYPE_1__ LISTEN_SOCKETS ;


 size_t VAR_0 ;

__attribute__((used)) static inline void FUNC_0(LISTEN_SOCKETS *VAR_1) {
    size_t VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_0 ;VAR_2++) {
        VAR_1->fds[VAR_2] = -1;
        VAR_1->fds_names[VAR_2] = ((void*)0);
        VAR_1->fds_types[VAR_2] = -1;
    }

    VAR_1->opened = 0;
    VAR_1->failed = 0;
}
