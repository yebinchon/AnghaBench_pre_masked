
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ systime_t ;
struct TYPE_5__ {scalar_t__* rows; } ;
typedef TYPE_1__ matrix_object_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int* FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (size_t) ;
 int FUNC_7 (scalar_t__*,int ) ;
 TYPE_1__* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int VAR_3 ;

void FUNC_10(void) {
    if (FUNC_9()) {
        VAR_3 = 1;
    }

    matrix_object_t VAR_4;
    bool VAR_5 = 0;
    for (uint8_t VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        VAR_4.rows[VAR_6] = FUNC_6(VAR_6);
        VAR_5 |= VAR_4.rows[VAR_6] != VAR_1.rows[VAR_6];
    }

    systime_t VAR_7 = FUNC_3();
    systime_t VAR_8 = VAR_7 - VAR_2;
    if (VAR_5 || VAR_8 > FUNC_0(5000)) {
        VAR_2 = VAR_7;
        VAR_1 = VAR_4;
        matrix_object_t* VAR_9 = FUNC_1();
        for (uint8_t VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
            VAR_9->rows[VAR_10] = VAR_4.rows[VAR_10];
        }
        FUNC_4();
        *FUNC_2() = 1;
        FUNC_5();
    }

    matrix_object_t* VAR_11 = FUNC_8(0);
    if (VAR_11) {
        FUNC_7(VAR_11->rows, 0);
    }
}
