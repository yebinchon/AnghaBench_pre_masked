
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ buzz; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(void) {
    uint16_t VAR_7 = 0;

    if (!VAR_5) return;

    VAR_7 = FUNC_1(VAR_6);


    if (VAR_7 > VAR_4) {
        FUNC_0();
        return;
    }


    if (VAR_2.buzz) {
        if (VAR_7 / VAR_0 % 2 == 0) {
            if (!VAR_3) {
                VAR_3 = 1;
                FUNC_2(VAR_1);
            }
        } else {
            if (VAR_3) {
                VAR_3 = 0;
                FUNC_3(VAR_1);
            }
        }
    }
}
