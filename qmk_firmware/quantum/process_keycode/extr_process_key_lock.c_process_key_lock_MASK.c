
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;

bool FUNC_5(uint16_t *VAR_2, keyrecord_t *VAR_3) {
    uint16_t VAR_4 = FUNC_4(*VAR_2);

    if (VAR_3->event.pressed) {

        if (!(FUNC_0(VAR_4) || VAR_4 == VAR_0)) {
            VAR_1 = 0;
            return 1;
        }


        if (VAR_4 == VAR_0) {
            VAR_1 = !VAR_1;
            return 0;
        }

        if (FUNC_0(VAR_4)) {




            if (VAR_1) {
                VAR_1 = 0;
                FUNC_2(VAR_4);


                *VAR_2 = VAR_4;

                return 1;
            }

            if (FUNC_1(VAR_4)) {
                FUNC_3(VAR_4);


                return 0;
            }
        }



        return 1;
    } else {

        return !(FUNC_0(VAR_4) && FUNC_1(VAR_4));
    }
}
