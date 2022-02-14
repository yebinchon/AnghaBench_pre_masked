
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef int mp_int_t ;
struct TYPE_3__ {unsigned int pixel44; unsigned int* bits24; } ;
typedef TYPE_1__ monochrome_5by5_t ;



uint8_t FUNC_0(monochrome_5by5_t * VAR_0, mp_int_t VAR_1, mp_int_t VAR_2) {
    unsigned int VAR_3 = VAR_2*5+VAR_1;
    if (VAR_3 == 24)
        return VAR_0->pixel44;
    return (VAR_0->bits24[VAR_3>>3] >> (VAR_3&7))&1;
}
