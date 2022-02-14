
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct nn_chunkref_chunk {int chunk; } ;
struct TYPE_2__ {int* ref; } ;
struct nn_chunkref {TYPE_1__ u; } ;


 int FUNC_0 (size_t*,size_t*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,size_t) ;

void FUNC_3 (struct nn_chunkref *VAR_0, size_t VAR_1)
{
    struct nn_chunkref_chunk *VAR_2;

    if (VAR_0->u.ref [0] == 0xff) {
        VAR_2 = (struct nn_chunkref_chunk*) VAR_0;
        VAR_2->chunk = FUNC_2 (VAR_2->chunk, VAR_1);
        return;
    }

    FUNC_1 (VAR_0->u.ref [0] >= VAR_1);
    FUNC_0 (&VAR_0->u.ref [1], &VAR_0->u.ref [1 + VAR_1], VAR_0->u.ref [0] - VAR_1);
    VAR_0->u.ref [0] -= (uint8_t) VAR_1;
}
