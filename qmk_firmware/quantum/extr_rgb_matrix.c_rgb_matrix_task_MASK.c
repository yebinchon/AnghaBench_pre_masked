
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int any_key_hit; } ;
struct TYPE_3__ {int mode; int enable; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;


 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(void) {
    FUNC_5();



    bool VAR_6 = ((VAR_3 && VAR_1) || (VAR_0 > 0 && VAR_2.any_key_hit > VAR_0 * 60 * 20));
    uint8_t VAR_7 = VAR_6 || !VAR_4.enable ? 0 : VAR_4.mode;

    switch (VAR_5) {
        case 129:
            FUNC_3();
            break;
        case 130:
            FUNC_2(VAR_7);
            break;
        case 131:
            FUNC_1(VAR_7);
            break;
        case 128:
            FUNC_4();
            break;
    }

    if (!VAR_6) {
        FUNC_0();
    }
}
