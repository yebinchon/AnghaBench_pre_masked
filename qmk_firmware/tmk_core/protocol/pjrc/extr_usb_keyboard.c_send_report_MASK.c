
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int * raw; } ;
typedef TYPE_1__ report_keyboard_t ;
typedef int int8_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static inline int8_t FUNC_2(report_keyboard_t *VAR_6, uint8_t VAR_7, uint8_t VAR_8, uint8_t VAR_9) {
    uint8_t VAR_10, VAR_11;

    if (!FUNC_1()) return -1;
    VAR_10 = VAR_1;
    FUNC_0();
    VAR_5 = VAR_7;
    VAR_11 = VAR_2 + 50;
    while (1) {

        if (VAR_4 & (1 << VAR_0)) break;
        VAR_1 = VAR_10;

        if (!FUNC_1()) return -1;

        if (VAR_2 == VAR_11) return -1;

        VAR_10 = VAR_1;
        FUNC_0();
        VAR_5 = VAR_7;
    }
    for (uint8_t VAR_12 = VAR_8; VAR_12 < VAR_9; VAR_12++) {
        VAR_3 = VAR_6->raw[VAR_12];
    }
    VAR_4 = 0x3A;
    VAR_1 = VAR_10;
    return 0;
}
