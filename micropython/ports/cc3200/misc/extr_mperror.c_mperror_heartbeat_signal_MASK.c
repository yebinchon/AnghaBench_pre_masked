
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int do_disable; int beating; scalar_t__ on_time; scalar_t__ off_time; scalar_t__ enabled; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__ VAR_4 ;

void FUNC_2 (void) {
    if (VAR_4.do_disable) {
        VAR_4.do_disable = 0;
    } else if (VAR_4.enabled) {
        if (!VAR_4.beating) {
            if ((VAR_4.on_time = FUNC_1()) - VAR_4.off_time > VAR_2) {
                FUNC_0(VAR_0, VAR_1, VAR_1);
                VAR_4.beating = 1;
            }
        } else {
            if ((VAR_4.off_time = FUNC_1()) - VAR_4.on_time > VAR_3) {
                FUNC_0(VAR_0, VAR_1, 0);
                VAR_4.beating = 0;
            }
        }
    }
}
