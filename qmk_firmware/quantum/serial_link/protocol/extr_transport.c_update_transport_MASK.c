
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int triple_buffer_object_t ;
struct TYPE_3__ {scalar_t__ object_type; int* buffer; size_t object_size; } ;
typedef TYPE_1__ remote_object_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int FUNC_1 (int,int*,size_t) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;

void FUNC_3(void) {
    unsigned int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        remote_object_t* VAR_7 = VAR_5[VAR_6];
        if (VAR_7->object_type == VAR_1 || VAR_7->object_type == VAR_3) {
            triple_buffer_object_t* VAR_8 = (triple_buffer_object_t*)VAR_7->buffer;
            uint8_t* VAR_9 = (uint8_t*)FUNC_2(VAR_7->object_size + VAR_0, VAR_8);
            if (VAR_9) {
                VAR_9[VAR_7->object_size] = VAR_6;
                uint8_t VAR_10 = VAR_7->object_type == VAR_1 ? 0xFF : 0;
                FUNC_1(VAR_10, VAR_9, VAR_7->object_size + 1);
            }
        } else {
            uint8_t* VAR_11 = VAR_7->buffer;
            unsigned int VAR_12;
            for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
                triple_buffer_object_t* VAR_13 = (triple_buffer_object_t*)VAR_11;
                uint8_t* VAR_14 = (uint8_t*)FUNC_2(VAR_7->object_size + VAR_0, VAR_13);
                if (VAR_14) {
                    VAR_14[VAR_7->object_size] = VAR_6;
                    uint8_t VAR_15 = VAR_12 + 1;
                    FUNC_1(VAR_15, VAR_14, VAR_7->object_size + 1);
                }
                VAR_11 += FUNC_0(VAR_7->object_size);
            }
        }
    }
}
