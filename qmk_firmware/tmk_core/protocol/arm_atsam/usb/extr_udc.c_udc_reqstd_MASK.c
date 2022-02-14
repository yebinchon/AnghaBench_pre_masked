
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wLength; int bRequest; } ;
struct TYPE_4__ {TYPE_1__ req; } ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;





 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static bool FUNC_14(void) {
    if (FUNC_0()) {

        if (VAR_3.req.wLength == 0) {
            return 0;
        }

        if (VAR_0 == FUNC_1()) {

            switch (VAR_3.req.bRequest) {
                case 133:
                    return FUNC_5();
                case 135:
                    return FUNC_4();
                case 136:
                    return FUNC_3();
                default:
                    break;
            }
        }

        if (VAR_2 == FUNC_1()) {

            switch (VAR_3.req.bRequest) {
                case 134:
                    return FUNC_12();
                default:
                    break;
            }
        }
    } else {

        if (VAR_0 == FUNC_1()) {

            switch (VAR_3.req.bRequest) {
                case 132:
                    return FUNC_6();
                case 137:
                    return FUNC_2();
                case 129:
                    return FUNC_8();
                case 131:
                    return FUNC_7();
                case 130:

                    break;
                default:
                    break;
            }
        }

        if (VAR_2 == FUNC_1()) {

            switch (VAR_3.req.bRequest) {
                case 128:
                    return FUNC_13();
                default:
                    break;
            }
        }
    }
    return 0;
}
