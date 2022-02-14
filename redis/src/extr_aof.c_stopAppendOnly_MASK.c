
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ aof_state; int aof_fd; int aof_selected_db; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int) ;

void FUNC_5(void) {
    FUNC_4(VAR_1.aof_state != VAR_0);
    FUNC_1(1);
    FUNC_3(VAR_1.aof_fd);
    FUNC_0(VAR_1.aof_fd);

    VAR_1.aof_fd = -1;
    VAR_1.aof_selected_db = -1;
    VAR_1.aof_state = VAR_0;
    FUNC_2();
}
