
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int mode; int enable; } ;
struct TYPE_3__ {int (* flush ) () ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 TYPE_2__ VAR_8 ;
 int FUNC_2 () ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(void) {
    if (!VAR_8.enable) {
        FUNC_1();
        FUNC_3();
        return;
    }

    VAR_7++;

    if (VAR_3 < 0xFFFFFFFF) {
        VAR_3++;
    }

    for (int VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
        if (VAR_4[VAR_10] < 255) {
            if (VAR_4[VAR_10] == 254) VAR_5 = FUNC_0(VAR_5 - 1, 0);
            VAR_4[VAR_10]++;
        }
    }



    bool VAR_11 = ((VAR_6 && VAR_1) || (VAR_0 > 0 && VAR_3 > VAR_0 * 60 * 20));
    uint8_t VAR_12 = VAR_11 ? 0 : VAR_8.mode;




    switch (VAR_12) {
        case 128:
            FUNC_4();
            break;
        default:
            FUNC_2();
            break;
    }

    if (!VAR_11) {
        FUNC_3();
    }


    VAR_9.flush();
}
