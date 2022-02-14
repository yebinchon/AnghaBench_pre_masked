
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {void* buffer; } ;
typedef TYPE_1__ triple_buffer_object_t ;


 int FUNC_0 () ;

void* FUNC_1(uint16_t VAR_0, triple_buffer_object_t* VAR_1) {
    uint8_t VAR_2 = FUNC_0();
    return VAR_1->buffer + VAR_0 * VAR_2;
}
