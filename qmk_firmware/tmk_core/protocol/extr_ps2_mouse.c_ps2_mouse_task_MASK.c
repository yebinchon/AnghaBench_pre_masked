
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_7__ {int buttons; int x; int y; int v; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(void) {
    static uint8_t VAR_9 = 0;
    extern int VAR_10;


    uint8_t VAR_11;
    VAR_11 = FUNC_3(VAR_2);
    if (VAR_11 == VAR_0) {
        VAR_8.buttons = FUNC_2() | VAR_10;
        VAR_8.x = FUNC_2() * VAR_5;
        VAR_8.y = FUNC_2() * VAR_6;



    } else {
        if (VAR_7) FUNC_1("ps2_mouse: fail to get mouse packet\n");
        return;
    }


    if (VAR_8.x || VAR_8.y || VAR_8.v || ((VAR_8.buttons ^ VAR_9) & VAR_1)) {




        VAR_9 = VAR_8.buttons;
        FUNC_5(&VAR_8);







        FUNC_0(&VAR_8);
    }

    FUNC_4(&VAR_8);
}
