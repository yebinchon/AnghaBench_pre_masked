
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* child_info_pipe; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void) {
    if (VAR_0.child_info_pipe[0] != -1 ||
        VAR_0.child_info_pipe[1] != -1)
    {
        FUNC_0(VAR_0.child_info_pipe[0]);
        FUNC_0(VAR_0.child_info_pipe[1]);
        VAR_0.child_info_pipe[0] = -1;
        VAR_0.child_info_pipe[1] = -1;
    }
}
