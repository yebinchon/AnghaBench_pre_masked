
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
typedef int int8_t ;
struct TYPE_8__ {scalar_t__* keys; int keycode; } ;
typedef TYPE_3__ combo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__ const*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static bool FUNC_4(combo_t *VAR_4, uint16_t VAR_5, keyrecord_t *VAR_6) {
    uint8_t VAR_7 = 0;
    uint8_t VAR_8 = -1;

    for (const uint16_t *VAR_9 = VAR_4->keys;; ++VAR_7) {
        uint16_t VAR_10 = FUNC_2(&VAR_9[VAR_7]);
        if (VAR_5 == VAR_10) VAR_8 = VAR_7;
        if (VAR_1 == VAR_10) break;
    }


    if (-1 == (int8_t)VAR_8) return 0;

    bool VAR_11 = VAR_3;

    if (VAR_6->event.pressed) {
        FUNC_0(VAR_8);

        if (VAR_11) {
            if (VAR_0) {
                FUNC_3(VAR_4->keycode, 1);
                VAR_2 = 1;
            }
        }
    } else {
        if (VAR_0) {
            FUNC_3(VAR_4->keycode, 0);
        } else {

            VAR_11 = 0;
        }

        FUNC_1(VAR_8);
    }

    return VAR_11;
}
