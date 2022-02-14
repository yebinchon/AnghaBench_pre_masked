
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ repl_state; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(void) {
    if (VAR_3.repl_state == VAR_2) {
        FUNC_0();
        VAR_3.repl_state = VAR_0;
    } else if (VAR_3.repl_state == VAR_1 ||
               FUNC_1())
    {
        FUNC_2();
        VAR_3.repl_state = VAR_0;
    } else {
        return 0;
    }
    return 1;
}
