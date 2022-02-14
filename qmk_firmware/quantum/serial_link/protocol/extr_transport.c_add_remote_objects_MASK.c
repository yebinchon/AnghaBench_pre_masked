
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
typedef int triple_buffer_object_t ;
struct TYPE_4__ {scalar_t__ object_type; int object_size; int * buffer; } ;
typedef TYPE_1__ remote_object_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_2 (int *) ;

void FUNC_3(remote_object_t** VAR_5, uint32_t VAR_6) {
    unsigned int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        remote_object_t* VAR_8 = VAR_5[VAR_7];
        VAR_4[VAR_3++] = VAR_8;
        if (VAR_8->object_type == VAR_0) {
            triple_buffer_object_t* VAR_9 = (triple_buffer_object_t*)VAR_8->buffer;
            FUNC_2(VAR_9);
            uint8_t* VAR_10 = VAR_8->buffer + FUNC_0(VAR_8->object_size);
            VAR_9 = (triple_buffer_object_t*)VAR_10;
            FUNC_2(VAR_9);
        } else if (VAR_8->object_type == VAR_1) {
            uint8_t* VAR_11 = VAR_8->buffer;
            unsigned int VAR_12;
            for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
                triple_buffer_object_t* VAR_13 = (triple_buffer_object_t*)VAR_11;
                FUNC_2(VAR_13);
                VAR_11 += FUNC_0(VAR_8->object_size);
            }
            triple_buffer_object_t* VAR_14 = (triple_buffer_object_t*)VAR_11;
            FUNC_2(VAR_14);
        } else {
            uint8_t* VAR_15 = VAR_8->buffer;
            triple_buffer_object_t* VAR_16 = (triple_buffer_object_t*)VAR_15;
            FUNC_2(VAR_16);
            VAR_15 += FUNC_0(VAR_8->object_size);
            unsigned int VAR_17;
            for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
                VAR_16 = (triple_buffer_object_t*)VAR_15;
                FUNC_2(VAR_16);
                VAR_15 += FUNC_1(VAR_8->object_size);
            }
        }
    }
}
