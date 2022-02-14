
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_chunkref_chunk {void* chunk; } ;
struct TYPE_2__ {int* ref; } ;
struct nn_chunkref {TYPE_1__ u; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,int*,int) ;
 int FUNC_2 (int,int ,void**) ;

void *FUNC_3 (struct nn_chunkref *VAR_0)
{
    int VAR_1;
    struct nn_chunkref_chunk *VAR_2;
    void *VAR_3;

    if (VAR_0->u.ref [0] == 0xff) {
        VAR_2 = (struct nn_chunkref_chunk*) VAR_0;
        VAR_0->u.ref [0] = 0;
        return VAR_2->chunk;
    }

    VAR_1 = FUNC_2 (VAR_0->u.ref [0], 0, &VAR_3);
    FUNC_0 (VAR_1 == 0);
    FUNC_1 (VAR_3, &VAR_0->u.ref [1], VAR_0->u.ref [0]);
    VAR_0->u.ref [0] = 0;
    return VAR_3;
}
