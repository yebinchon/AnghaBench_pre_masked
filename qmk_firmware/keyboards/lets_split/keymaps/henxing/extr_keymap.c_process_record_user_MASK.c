
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;



 int FUNC_0 (int ) ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int VAR_3 ;

bool FUNC_4(uint16_t VAR_4, keyrecord_t *VAR_5) {


    bool VAR_6 = 0;

    switch (VAR_4) {
        case 129:
            if (VAR_5->event.pressed) {



                FUNC_3(1UL<<VAR_1);
            }
            break;

        case 130:
            if (VAR_5->event.pressed) {
                FUNC_2(VAR_0);
            } else {
                FUNC_1(VAR_0);
            }
            break;

        case 128:
            FUNC_3(1UL<<VAR_2);
            break;
        default:



            VAR_6 = 1;
            break;
    }

    return VAR_6;
}
