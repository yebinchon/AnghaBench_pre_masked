
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_9__ {int in_progress; size_t count; scalar_t__* codes; } ;
struct TYPE_8__ {scalar_t__ code; scalar_t__ symbol; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 TYPE_4__ VAR_6 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_3__* VAR_7 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;

bool FUNC_10(uint16_t VAR_8, keyrecord_t *VAR_9) {
    uint8_t VAR_10;

    if (!VAR_6.in_progress) return 1;

    if (VAR_6.count >= VAR_4 && !(VAR_8 == VAR_0 || VAR_8 == VAR_2 || VAR_8 == VAR_3 || VAR_8 == VAR_1)) {
        return 0;
    }

    if (!VAR_9->event.pressed) return 1;

    VAR_6.codes[VAR_6.count] = VAR_8;
    VAR_6.count++;

    if (VAR_8 == VAR_0) {
        if (VAR_6.count >= 2) {
            VAR_6.count -= 2;
            return 1;
        } else {
            VAR_6.count--;
            return 0;
        }
    }

    if (VAR_8 == VAR_1 || VAR_8 == VAR_3 || VAR_8 == VAR_2) {
        bool VAR_11 = 0;

        for (VAR_10 = VAR_6.count; VAR_10 > 0; VAR_10--) {
            FUNC_4(VAR_0);
            FUNC_8(VAR_0);
            FUNC_9(VAR_5);
        }

        if (VAR_8 == VAR_2) {
            VAR_6.in_progress = 0;
            FUNC_1();
            return 0;
        }

        FUNC_7();
        for (VAR_10 = 0; VAR_7[VAR_10].symbol; VAR_10++) {
            if (FUNC_0(VAR_7[VAR_10].symbol)) {
                VAR_11 = 1;
                FUNC_5(VAR_7[VAR_10].code + 2);
                break;
            }
        }
        if (!VAR_11) {
            FUNC_3();
        }
        FUNC_6();

        if (VAR_11) {
            FUNC_2(VAR_10);
        }

        VAR_6.in_progress = 0;
        return 0;
    }
    return 1;
}
