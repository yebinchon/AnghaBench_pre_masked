
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wValue; int wIndex; scalar_t__ wLength; } ;
struct TYPE_4__ {int callback; TYPE_1__ req; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_2 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool FUNC_4(void) {
    if (VAR_2.req.wLength) {
        return 0;
    }

    switch (VAR_2.req.wValue) {
        case 134:

            VAR_1 |= FUNC_0(VAR_0);
            FUNC_1();
            return 1;
        default:
            break;
    }
    return 0;
}
