
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int* max_blocks_per_layer; } ;
struct TYPE_5__ {int QuadPart; } ;
typedef int* PULONG ;
typedef TYPE_1__* PLARGE_INTEGER ;
typedef TYPE_2__* PEXT2_VCB ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

ULONG
FUNC_1(
    PEXT2_VCB VAR_3,
    PLARGE_INTEGER VAR_4,
    PULONG VAR_5
)
{
    ULONG VAR_6, VAR_7 =0, VAR_8;

    VAR_6 = (ULONG)((VAR_4->QuadPart + VAR_1 - 1) >> VAR_0);
    if (VAR_6 <= VAR_2)
        goto errorout;
    VAR_6 -= VAR_2;

    VAR_7 += 1;
    if (VAR_6 <= VAR_3->max_blocks_per_layer[1]) {
        goto errorout;
    }
    VAR_6 -= VAR_3->max_blocks_per_layer[1];

level2:

    if (VAR_6 <= VAR_3->max_blocks_per_layer[2]) {
        VAR_7 += 1 + ((VAR_6 + VAR_1/4 - 1) >> (VAR_0 - 2));
        goto errorout;
    }
    VAR_7 += 1 + VAR_1/4;
    VAR_6 -= VAR_3->max_blocks_per_layer[2];

    if (VAR_6 > VAR_3->max_blocks_per_layer[3]) {
        VAR_6 = VAR_3->max_blocks_per_layer[3];
    }

    FUNC_0(VAR_3->max_blocks_per_layer[2]);
    VAR_8 = VAR_6 % VAR_3->max_blocks_per_layer[2];
    VAR_6 = VAR_6 / VAR_3->max_blocks_per_layer[2];
    VAR_7 += 1 + VAR_6 * (1 + VAR_1/4);
    if (VAR_8) {
        VAR_6 = VAR_8;
        goto level2;
    }

errorout:

    if (VAR_5)
        *VAR_5 = VAR_7;
    VAR_6 = (ULONG)((VAR_4->QuadPart + VAR_1 - 1) >> VAR_0);
    return (VAR_6 + VAR_7);
}
