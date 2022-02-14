
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ h; scalar_t__ v; scalar_t__ x; scalar_t__ y; int buttons; } ;
typedef TYPE_1__ report_mouse_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__ FUNC_5 () ;
 int FUNC_6 (TYPE_1__) ;
 int FUNC_7 (char*) ;
 int VAR_12 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int,int,...) ;

uint8_t FUNC_12(void) {

    FUNC_1();
    if (VAR_11) {
        if (++VAR_10 == 0) {



            FUNC_7("trying to reset mcp23018\n");
            VAR_11 = FUNC_2();
            if (VAR_11) {
                FUNC_7("left side not responding\n");
            } else {
                FUNC_7("left side attached\n");
            }
        }
    }

    bool VAR_18 = 0;
    for (uint8_t VAR_19 = 0; VAR_19 < VAR_2; VAR_19++) {

        uint8_t VAR_20 = VAR_19;
        uint8_t VAR_21 = VAR_19 + VAR_2;
        FUNC_8(VAR_20);
        FUNC_8(VAR_21);




        VAR_18 |= FUNC_9(VAR_20);
        VAR_18 |= FUNC_9(VAR_21);

        FUNC_10();
    }

    FUNC_0(VAR_12, VAR_9, VAR_1, VAR_18);
    FUNC_4();

    FUNC_1();







    return 1;
}
