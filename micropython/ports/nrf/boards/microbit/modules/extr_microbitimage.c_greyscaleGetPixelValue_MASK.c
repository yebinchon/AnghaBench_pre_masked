
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef unsigned int mp_int_t ;
struct TYPE_3__ {unsigned int width; unsigned int* byte_data; } ;
typedef TYPE_1__ greyscale_t ;



uint8_t FUNC_0(greyscale_t * VAR_0, mp_int_t VAR_1, mp_int_t VAR_2) {
    unsigned int VAR_3 = VAR_2*VAR_0->width+VAR_1;
    unsigned int VAR_4 = ((VAR_3<<2)&4);
    return (VAR_0->byte_data[VAR_3>>1] >> VAR_4)&15;
}
