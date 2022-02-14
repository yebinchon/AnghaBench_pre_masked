
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int id32; int * id8; int * id16; } ;
typedef TYPE_1__ rng_id_t ;


 int FUNC_0 (int*,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2 (void) {
    rng_id_t VAR_1;
    uint32_t VAR_2;
    uint16_t VAR_3;


    FUNC_0(&VAR_2, &VAR_3);

    FUNC_1 (VAR_1.id8);


    VAR_1.id16[0] ^= VAR_1.id16[2];

    VAR_1.id8[0] ^= VAR_1.id8[3];
    VAR_1.id8[1] ^= VAR_1.id8[4];
    VAR_1.id8[2] ^= VAR_1.id8[5];

    VAR_0 = VAR_1.id32 & 0x00FFFFFF;
    VAR_0 += (VAR_2 & 0x000FFFFF) + VAR_3;


    if (VAR_0 == 0) {
        VAR_0 = 1;
    }
}
