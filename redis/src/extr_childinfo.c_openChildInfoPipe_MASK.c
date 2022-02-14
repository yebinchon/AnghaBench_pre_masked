
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int child_info_data; int * child_info_pipe; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_1 ;

void FUNC_4(void) {
    if (FUNC_3(VAR_1.child_info_pipe) == -1) {


        FUNC_1();
    } else if (FUNC_0(((void*)0),VAR_1.child_info_pipe[0]) != VAR_0) {
        FUNC_1();
    } else {
        FUNC_2(&VAR_1.child_info_data,0,sizeof(VAR_1.child_info_data));
    }
}
