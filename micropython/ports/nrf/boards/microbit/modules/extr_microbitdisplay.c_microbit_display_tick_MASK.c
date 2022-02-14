
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brightnesses; scalar_t__ previous_brightness; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(void) {

    if (!VAR_3.active) {
        return;
    }

    FUNC_0(&VAR_3);

    FUNC_1();
    VAR_3.previous_brightness = 0;
    if (VAR_3.brightnesses & VAR_1) {
        FUNC_2(VAR_0, VAR_2, 1800);
    }
}
