
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; scalar_t__ cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void) {
    if (VAR_4.status == VAR_3) {
        FUNC_1();
    }

    if (VAR_4.status == VAR_2) {
        if (VAR_4.cmd == VAR_0) {
            VAR_4.cmd = VAR_1;
            VAR_4.status = FUNC_0();
        }
    }
}
