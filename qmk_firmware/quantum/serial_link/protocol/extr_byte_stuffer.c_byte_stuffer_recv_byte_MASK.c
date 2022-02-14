
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {size_t next_zero; int long_frame; scalar_t__ data_pos; size_t* data; } ;
typedef TYPE_1__ byte_stuffer_state_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (size_t,size_t*,scalar_t__) ;

void FUNC_2(uint8_t VAR_2, uint8_t VAR_3) {
    byte_stuffer_state_t* VAR_4 = &VAR_1[VAR_2];

    if (VAR_4->next_zero == 0) {
        VAR_4->next_zero = VAR_3;
        VAR_4->long_frame = VAR_3 == 0xFF;
        VAR_4->data_pos = 0;
        return;
    }

    VAR_4->next_zero--;
    if (VAR_3 == 0) {
        if (VAR_4->next_zero == 0) {

            if (VAR_4->data_pos > 0) {
                FUNC_1(VAR_2, VAR_4->data, VAR_4->data_pos);
            }
        } else {

            FUNC_0(VAR_4);
        }
    } else {
        if (VAR_4->data_pos == VAR_0) {


            VAR_4->next_zero = VAR_3;
            VAR_4->long_frame = VAR_3 == 0xFF;
            VAR_4->data_pos = 0;
        } else if (VAR_4->next_zero == 0) {
            if (VAR_4->long_frame) {

                VAR_4->next_zero = VAR_3;
                VAR_4->long_frame = VAR_3 == 0xFF;
            } else {

                VAR_4->next_zero = VAR_3;
                VAR_4->data[VAR_4->data_pos++] = 0;
            }
        } else {
            VAR_4->data[VAR_4->data_pos++] = VAR_3;
        }
    }
}
