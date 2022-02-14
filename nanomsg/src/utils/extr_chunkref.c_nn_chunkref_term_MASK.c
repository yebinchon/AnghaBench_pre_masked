
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_chunkref_chunk {int chunk; } ;
struct TYPE_2__ {int* ref; } ;
struct nn_chunkref {TYPE_1__ u; } ;


 int FUNC_0 (int ) ;

void FUNC_1 (struct nn_chunkref *VAR_0)
{
    struct nn_chunkref_chunk *VAR_1;

    if (VAR_0->u.ref [0] == 0xff) {
        VAR_1 = (struct nn_chunkref_chunk*) VAR_0;
        FUNC_0 (VAR_1->chunk);
    }
}
