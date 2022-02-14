
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nn_chunkref_chunk {int chunk; } ;
struct TYPE_2__ {int* ref; } ;
struct nn_chunkref {TYPE_1__ u; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1 (struct nn_chunkref *VAR_0, uint32_t VAR_1)
{
    struct nn_chunkref_chunk *VAR_2;

    if (VAR_0->u.ref [0] == 0xff) {
        VAR_2 = (struct nn_chunkref_chunk*) VAR_0;
        FUNC_0 (VAR_2->chunk, VAR_1);
    }
}
