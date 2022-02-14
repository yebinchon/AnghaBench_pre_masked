
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {void* buffer; } ;
typedef TYPE_1__ triple_buffer_object_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void* FUNC_8(uint16_t VAR_0, triple_buffer_object_t* VAR_1) {
    FUNC_6();
    if (FUNC_0()) {
        uint8_t VAR_2 = FUNC_2();
        uint8_t VAR_3 = FUNC_1();
        FUNC_4(VAR_2);
        FUNC_5(VAR_3);
        FUNC_3(0);
        FUNC_7();
        return VAR_1->buffer + VAR_0 * VAR_2;
    } else {
        FUNC_7();
        return ((void*)0);
    }
}
