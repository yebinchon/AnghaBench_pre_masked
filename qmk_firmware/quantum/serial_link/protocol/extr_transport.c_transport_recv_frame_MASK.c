
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
typedef int triple_buffer_object_t ;
struct TYPE_3__ {int object_size; scalar_t__ object_type; size_t* buffer; } ;
typedef TYPE_1__ remote_object_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (void*,size_t*,int) ;
 size_t VAR_3 ;
 TYPE_1__** VAR_4 ;
 void* FUNC_3 (int,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(uint8_t VAR_5, uint8_t* VAR_6, uint16_t VAR_7) {
    uint8_t VAR_8 = VAR_6[VAR_7 - 1];
    if (VAR_8 < VAR_3) {
        remote_object_t* VAR_9 = VAR_4[VAR_8];
        if (VAR_9->object_size == VAR_7 - 1) {
            uint8_t* VAR_10;
            if (VAR_9->object_type == VAR_0) {
                VAR_10 = VAR_9->buffer + FUNC_0(VAR_9->object_size);
            } else if (VAR_9->object_type == VAR_2) {
                VAR_10 = VAR_9->buffer + FUNC_0(VAR_9->object_size);
                VAR_10 += (VAR_5 - 1) * FUNC_1(VAR_9->object_size);
            } else {
                VAR_10 = VAR_9->buffer + VAR_1 * FUNC_0(VAR_9->object_size);
            }
            triple_buffer_object_t* VAR_11 = (triple_buffer_object_t*)VAR_10;
            void* VAR_12 = FUNC_3(VAR_9->object_size, VAR_11);
            FUNC_2(VAR_12, VAR_6, VAR_7 - 1);
            FUNC_4(VAR_11);
        }
    }
}
