
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef unsigned int mp_int_t ;
struct TYPE_3__ {unsigned int width; unsigned int* byte_data; } ;
typedef TYPE_1__ greyscale_t ;



void FUNC_0(greyscale_t * VAR_0, mp_int_t VAR_1, mp_int_t VAR_2, mp_int_t VAR_3) {
    unsigned int VAR_4 = VAR_2*VAR_0->width+VAR_1;
    unsigned int VAR_5 = ((VAR_4<<2)&4);
    uint8_t VAR_6 = 240 >> VAR_5;
    VAR_0->byte_data[VAR_4>>1] = (VAR_0->byte_data[VAR_4>>1] & VAR_6) | (VAR_3 << VAR_5);
}
